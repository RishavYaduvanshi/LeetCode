class Solution {
    public void nextPermutation(int[] a) {
        
        int ind =-1;
        int n = a.length;
        if(n==1) return;
    
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
                ind=i;
        }
        if(ind==-1)
        {
            rever(a,0,n-1);
            return;
        }
        else {
            int req_ind = ind;
            for (int i = ind; i < n; i++) {
                if(a[i]<a[ind] && a[i]>a[ind-1])
                    req_ind = i;
            }
            int t= a[req_ind];
            a[req_ind]=a[ind-1];
            a[ind-1]=t;
            Arrays.sort(a,ind,n);
        }
        
    }
    private static void rever(int[] a,int i,int j) {
        while(i<j)
        {
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
            i++;
            j--;
        }
        
    }
}