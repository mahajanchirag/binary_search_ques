class Solution {
public:
    int check(vector<int>& bloomDay, int m, int k,int mid,int n)
    {
        int b_count=0;
        int f_count=0;
        for(int i=0;i<n;i++)
        {
            if(bloomDay[i]<=mid)
            {
                f_count++;
                if(f_count==k)
                {
                    b_count++;
                    f_count=0;
                }
            }
            
            else
            {
                f_count=0;
            }
        }
        
        if(b_count>=m)
        {
            return true;
        }
        
        return false;
    }
    
    
    
    
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int n=bloomDay.size();
        if(n<k*m)
        {
            return -1;
        }
        
        int mi=INT_MAX,ma=INT_MIN;
        for(int i=0;i<n;i++)
        {
            mi=min(mi,bloomDay[i]);
            ma=max(ma,bloomDay[i]);
            
        }
        
        int start=mi;
        int end=ma,res=-1;
        
        while(start<=end)
        {
            int mid=start+((end-start)/2);
            
            if(check(bloomDay,m,k,mid,n)==true)
            {
                res=mid;
                end=mid-1;
            }
            
            else
            {
                start=mid+1;
            }
            
        }
        return res;
    }
};
