class Solution:
    def dividePlayers(self, skill: List[int]) -> int:
        skill.sort()
        l, r = 0, len(skill) - 1
        psum = skill[l] + skill[r]
        tsum = 0
        while l < r:
            sum_pair = skill[l] + skill[r]
            if psum != sum_pair:
                return -1
            tsum += skill[l] * skill[r]
            psum = sum_pair
            l += 1
            r -= 1

        return tsum
        