import time
N = 2000001
MOD = 1000000007

fact = [0]*N
inv_fact = [0]*N

def precalc():
    fact[0] = 1
    inv_fact[0] = pow(fact[0], MOD-2, MOD)
    for i in range(1, N):
        fact[i] = (fact[i-1] * i) % MOD
        inv_fact[i] = pow(fact[i], MOD-2, MOD)

def c(n, k):
    return ((fact[n] * inv_fact[k]) % MOD * inv_fact[n - k]) % MOD

def ways(x, y):
    return c(x + y - 2, x - 1)

def main():
    #x = time.time()
    precalc()
    #print time.time() - x
    s = raw_input
    t = int(s())
    for i in range(t):
        x, y = map(int, s().split())
        print ways(x, y)

if __name__ == '__main__':
    main()


