int Solution::singleNumber(const vector<int> &A) 
{
   int n=A.size();
   int ans=0;
   for(int i=0;i<32;i++)
   {
       int sum=0;
       for(int j=0;j<n;j++)
       {
           if((A[j]>>i)&1)
           {
               sum+=1;
           }
       }
       sum=sum%3;
       ans=ans|(sum<<i);
   }
   return ans;
}
//refer page 86-91, notebook 4
//T.C. for this code is O(N)
//S.C. for this code is O(1)
