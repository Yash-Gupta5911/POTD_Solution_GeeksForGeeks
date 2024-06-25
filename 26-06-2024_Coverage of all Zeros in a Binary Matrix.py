class Solution:
    def FindCoverage(self, matrix):
        n = len(matrix)
        m = len(matrix[0])
        coverage_sum = 0
        
        for i in range(n):
            for j in range(m):
                if matrix[i][j] == 0:
                    # Check left
                    if j > 0 and matrix[i][j - 1] == 1:
                        coverage_sum += 1
                    # Check right
                    if j < m - 1 and matrix[i][j + 1] == 1:
                        coverage_sum += 1
                    # Check up
                    if i > 0 and matrix[i - 1][j] == 1:
                        coverage_sum += 1
                    # Check down
                    if i < n - 1 and matrix[i + 1][j] == 1:
                        coverage_sum += 1
        
        return coverage_sum
