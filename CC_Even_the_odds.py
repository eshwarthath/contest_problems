
t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    ans = 0

    for i in range(n):
        odd = 0

        for j in range(i, n):
            if a[j] % 2 != 0:
                odd += 1

            if odd % 2 == 0:
                ans = max(ans, j - i + 1)

    print(ans)
