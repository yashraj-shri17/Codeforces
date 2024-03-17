def longest_common_subsequence(s1, s2):
    m, n = len(s1), len(s2)
    
    # Create a 2D table to store the lengths of LCS for subproblems
    dp = [[0] * (n + 1) for _ in range(m + 1)]
    
    # Fill the dp table in bottom-up manner
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            if s1[i - 1] == s2[j - 1]:
                dp[i][j] = dp[i - 1][j - 1] + 1
            else:
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])
    
    return dp[m][n]

# Example usage:
s1 = "abcde"
s2 = "ace"
print("Length of Longest Common Subsequence:", longest_common_subsequence(s1, s2))
