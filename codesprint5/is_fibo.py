def is_square(apositiveint):
  x = apositiveint // 2
  seen = set([x])
  while x * x != apositiveint:
    x = (x + (apositiveint // x)) // 2
    if x in seen: return False
    seen.add(x)
  return True

def is_fibo(n):
    n1 = 5 * n * n - 4
    n2 = 5 * n * n + 4
    if is_square(n1) or is_square(n2):
        return "IsFibo"
    else:
        return "IsNotFibo"

s = raw_input
t = int(s())
for test in range(t):
    n = int(s())
    if n == 1:
        print "IsFibo"
        continue
    print is_fibo(n)

