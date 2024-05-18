class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
        int maxi = a[0];
        int n = a.size();
        
        if(a.size()==2) return a[1];
        
        if(a[n-1]>a[n-2]) return a[n-1];
        
        int start = 0, end = a.size();
        
        while(start<=end){
            
            int mid = end - (end-start)/2;
            
            if(a[mid]>a[mid-1] && a[mid]>a[mid+1]){
                return a[mid];
            }
            else if(a[mid]>a[mid-1]) {
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }
        return maxi;
    }
};
