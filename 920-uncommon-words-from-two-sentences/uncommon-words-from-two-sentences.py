class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        s3 = s1 + ' ' + s2
        ls = s3.split(' ')
        res = []
        for i in range(len(ls)):
            if ls.count(ls[i])<2 :
                res.append(ls[i])
        return res
        
        