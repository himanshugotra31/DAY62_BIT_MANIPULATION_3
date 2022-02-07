int Solution::hammingDistance(const vector<int> &A) 
{
    int mod=1000000007; 
    int n=A.size();
    int ans=0;
    for(int i=0;i<31;i++)
    {
        int set=0;                  //here 'set' will contain number of set bit at index 'i'
        for(int j=0;j<n;j++)
        {
            if((A[j]>>i)&1)
            {
                set+=1;
            }
        }
        int unset=n-set;
        ans=ans+((2LL*set*unset)%mod);
        ans=ans%mod; 
    }
    return ans;
}
//refer page 25-27, notebook 3
//T.C. for this code is O(N)
//S.C. for this code is O(1)
