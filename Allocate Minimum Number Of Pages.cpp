class Solution {
  public:
  
  
    bool isvalid(int arr[],int n,int m,int mid)
    {
        int student=1;
        int sum=0;
        
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
  
  
  
    int findPages(int arr[], int n, int m) {
        //code here
        
        int max=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(max<arr[i])
            {
                max=arr[i];
            }
            
        }
        
        int start,end,mid,res=-1;
        
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
