class Solution{
    public:
    int check(int tree[],int mid,int n)
    {
        int sum=0;
        for(int i=n-1;i>=0;i--)
        {
            if(tree[i]-mid<=0)
            {
                break;
            }
            
            sum=sum+tree[i]-mid;
        }
        return sum;
    }
    int find_height(int tree[], int n, int k)
    {
        // code here
        
        sort(tree,tree+n);
        int start=0,end=tree[n-1];
        
        while(start<=end)
        {
            int mid=start+((end-start)/2);
            int total=check(tree,mid,n);
            if(total==k)
            {
                return mid;
            }
            else if(total>k)
            {
                start=mid+1;
            }
            
            else
            {
                end=mid-1;
            }
        }
        
        return -1;
        
    }
};
