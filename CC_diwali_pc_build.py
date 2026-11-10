
t = int(input())

for _ in range(t):
    p, d, k, b = map(int, input().split())

    total_cost = p + (d * k)

    if total_cost <= b:
        print("YES")
    else:
        print("NO")
