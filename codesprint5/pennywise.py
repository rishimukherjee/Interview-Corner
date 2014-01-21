def main():
    s = raw_input
    player = s().strip()
    m, n = map(int, s().split())
    hand = map(int, s().split())
    table = []
    if n:
        table = map(int, s().split())
    if not table:
        print sorted(hand)[len(hand)/2], 0
    else:
        subset_sum = {}
        for i in range(1, 1<<len(table)):
            array = []
            for k in range(len(table)):
                if i & (1<<k) > 0:
                    array.append(table[k])
            subset_sum[sum(array)] = tuple(array)
        min_num = max(hand)
        min_subset = set()
        for num in sorted(hand, reverse=True):
            least_diff = 9999999999
            for su in subset_sum:
                if num - su > 0 and num - su  < least_diff:
                    least_diff = num - su
                    min_num = num
                    min_subset = subset_sum[su]
            #print least_diff
        print min_num, len(min_subset)
        if min_subset:
            print " ".join(map(str, min_subset))

main()
