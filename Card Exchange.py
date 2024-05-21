for _ in range(int(input())):
    n, k = map(int, input().split())
    cards = list(map(int, input().split()))
    counts = {}
    answer = n
    for card in cards:
        counts[card] = counts.get(card, 0) + 1
        if counts[card] >= k:
            answer = k - 1
    print(answer)
