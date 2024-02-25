from collections import Counter
guest_name = input().strip()
host_name = input().strip()
pile_letters = input().strip()
guest_count = Counter(guest_name)
host_count = Counter(host_name)
pile_count = Counter(pile_letters)
if pile_count == guest_count + host_count:
    print("YES")
else:
    print("NO")