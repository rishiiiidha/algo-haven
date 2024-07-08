def calculate_cost(s):
    n = len(s)
    cost = 0

   
    freq = [0] * 26
    for c in s:
        freq[ord(c) - ord('a')] += 1


    for i in range(26):
        for j in range(i + 1, 26):
            cost += freq[i] * freq[j] * (j - i)

    return cost


s = input().strip()

print(calculate_cost(s))