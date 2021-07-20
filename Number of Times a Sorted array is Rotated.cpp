class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    
	    
	    
	    if(arr[0] < arr[n-1])  
	        return 0;
	        
	    int s=0,e=n-1;
	    int m,nex,p;
	    while(s<=e){
	        m = s + (e-s)/2;
	        nex = (m+1)%n;
	        p = (m+n-1)%n;
	        if(arr[m]<= arr[nex] && arr[m]<=arr[p])
	            return m;
	        else if(arr[m] > arr[e])
	            s = m+1;
	        else if(arr[m] < arr[e])
	            e = m-1;
	    }
	}

};
