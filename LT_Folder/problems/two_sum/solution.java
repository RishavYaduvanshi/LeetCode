class Solution {
    public int[] twoSum(int[] a, int target) {
        
        int n= a.length;
        int [] ans = new int[2];
        Map<Integer,Integer> mp = new HashMap<>();
        
        for(int i=0;i<n;i++)
        {
            if(mp.containsKey(target-a[i])){
                ans[1]=i;
                ans[0]=mp.get(target-a[i]);
                break;
            }
            mp.put(a[i],i);
            
        }
        return ans;
        
    }
}