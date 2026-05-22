class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        r = 0
        l = 0 
        h = len(matrix) * len(matrix[0]) - 1
        while l <= h:
            mid = (l + h) // 2
            mid_row = mid // len(matrix[0])
            mid_col = mid % len(matrix[0])
            if matrix[mid_row][mid_col] == target:
                return True
            elif matrix[mid_row][mid_col] > target:
                h = mid - 1
            else:
                l = mid + 1
        return False