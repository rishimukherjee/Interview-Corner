from math import sqrt

MOD = 1000000007

def FindAllDivisors(x):
    divList = set([])
    y = 2
    while y <= sqrt(x):
        if x % y == 0:
            divList.add(y)
            divList.add(int(x / y))
        y += 1
    return divList

def main():
    s = raw_input
    t = int(s())
    for test in range(t):
        dim = int(s())
        dim_lens = map(int, s().split())
        total = 1
        for i in dim_lens:
            total *= i % MOD
        limit = min(dim_lens)
        g = int(sqrt(limit))
        ans = 0
        count = {}
        for x in range(2, limit+1):
            # Find the number of cells that have gcd = x
            counter = 1
            for ni in dim_lens:
                counter *= (ni / x) % MOD
            count[x] = counter
        # Remove overlaps
        for num in reversed(count.keys()):
            divisors = FindAllDivisors(num)
            for div in divisors:
                count[div] -= count[num]
                if count[div] < 0:
                    count[div] += MOD
        count[1] = total - sum(count[x] for x in range(2,limit+1))
        if count[1] < 0:
            count[1] += MOD
        ans = 0
        for k, v in count.items():
            ans += k*v % MOD
        print ans % MOD


main()
