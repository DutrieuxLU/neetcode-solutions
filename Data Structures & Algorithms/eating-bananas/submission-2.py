class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        max_k = max(piles)
        min_k = 1
        curr_solution = max_k
        while max_k >= min_k:
            curr = float((max_k + min_k) // 2)
            test = float(0)
            for pile in piles:
                test += math.ceil(pile / curr)
            if test <= h and curr < max_k:
                curr_solution = curr
                max_k = curr - 1
            else:
                min_k = curr + 1
        return int(curr_solution)