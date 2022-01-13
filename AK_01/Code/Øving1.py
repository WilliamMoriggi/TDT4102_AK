def isFibonacciNumber(n):
    a = 0
    b = 1
    while b < n :
        temp = b
        b += a
        a = temp

    if a == b:
      return True
    else:
        return False
