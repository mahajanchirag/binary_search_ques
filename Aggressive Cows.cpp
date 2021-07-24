int check(vector<int> &stalls, int k,int mid,int n)
{
    int count=1;
    int pos=0;
    for(int i=1;i<n;i++)
    {
        if(stalls[i]-stalls[pos]>=mid)
        {
            count++;
            pos=i;
        }
        
    }
    
    if(count>=k)
    {
        return true;
    }
    
    return false;
}



int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    int n=stalls.size();
    int start=1;
    int end=stalls[n-1]-stalls[0];
    int ans=-1;
    while(start<=end)
    {
        int mid=start+((end-start)/2);
        if(check(stalls,k,mid,n)==true)
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        
    }
    return ans;
}
