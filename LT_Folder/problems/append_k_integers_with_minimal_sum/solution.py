class Solution:
    def minimalKSum(self, a: List[int], k: int) -> int:
        a.sort()
        n = len(a)
        d = a[0]-1
        k-=d
        ans =0
        if k>=0:
            ans+=(d*(d+1))//2
        else:
            ans+=((d+k)*(d+k+1))//2
        i =1
        while(i<n and k>0):
            t = a[i]-a[i-1]-1
            if t<=0:
                i+=1
                continue
            if k>=t:
                ans+=(t*(2*(a[i-1]+1)+t-1))//2
            else:
                ans+=(k*(2*(a[i-1]+1)+(k-1)))//2
            k-=t
            i+=1

        if k>0:
            ans+=(k*(2*(a[n-1]+1)+(k-1)))//2
        return ans
        