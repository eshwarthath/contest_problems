t = int(input())

for _ in range(t):
    n = int(input())
    s = input().strip()

    if n == 2:
        count = 0
        for i in range(n):
            num = s[i:] + s[:i]
            if int(num) % 4 == 0:
                count += 1
        print(count)

    else:
        ans = 0
        for i in range(n):
            last_two = s[(i + n - 2) % n] + s[(i + n - 1) % n]
            if int(last_two) % 4 == 0:
                ans += 1
        print(ans)
