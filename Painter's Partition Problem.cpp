class Solution
{
  public:
  bool isvalid(int arr[],int n,int m, long long mid)
    {
         long long student=1;
         long long sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            
            if(sum>mid)
            {
                sum=arr[i];
                student++;
            }
            
            if(student>m)
            {
                return false;
            }
            
        }
        
        return true;
    }
    long long minTime(int arr[], int n, int m)
    {
        // code here
        // return minimum time
         long long max=INT_MIN;
         long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(max<arr[i])
            {
                max=arr[i];
            }
            
        }
        
         long long start,end,mid,res=-1;
        
        start=max;
        end=sum;
        
        
        while(start<=end)
        {
            mid=start+((end-start)/2);
            
            if(isvalid(arr,n,m,mid)==true)
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
