class Solution
{
    public:
    
    long long helper(vector<long long> v, long long x,char pos)
    {
        long long start=0;
        long long end=v.size()-1;
        long long mid,ans=-1;
        
        while(start<=end)
        {
            mid=start+((end-start)/2);
            
            if(v[mid]==x && pos=='f')
            {
                ans=mid;
                end=mid-1;
            }
            
            else if(v[mid]==x && pos=='l')
            {
                ans=mid;
                start=mid+1;
            }
            
            else if(v[mid]<x)
            {
                start=mid+1;
            }
            
            else if(v[mid]>x)
            {
                end=mid-1;
            }
            
            
        }
        
        return ans;
    }
    
    
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        long long  first=helper(v,x,'f');
        long long last=helper(v,x,'l');
        
        return {first,last};
    }
};
