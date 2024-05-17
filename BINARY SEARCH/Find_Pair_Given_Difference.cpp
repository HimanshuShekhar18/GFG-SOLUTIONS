
// <--------------------------------------------------------------TWO POINTERS------------------------------------------------------------------------------------------>

class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here

        if(n==1) return -1;
        
        sort(arr.begin(),arr.end());
        
        int start = arr[0];
        int end = arr[n-1];
        
        if(x>abs(start-end)) return -1;
        
        int i = 0;
        
        while(i<n){
            int j = i+1;
            while(j<n){
                // cout << arr[i] << " " << arr[j] << endl;
                if(abs(arr[i]-arr[j])==x) return 1;
                else if(abs(arr[i]-arr[j])>x) break;
                else j++;
            }
            i++;
        }
        return -1;
    }
};




// <-------------------------------------------------------------------------BINARY SEARCH---------------------------------------------------------------------------------------->



class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        
        if(n==1) return -1;
        
        sort(arr.begin(),arr.end());
        
        int extl = arr[0];
        int extr = arr[n-1];
        
        if(x>abs(extl-extr)) return -1;
        
        
        for(int i = 0; i<n; i++){
            
            int start = i;
            int end = n-1;
            
           while(start<=end){
                
           int mid = end - (end-start)/2;
           
           if(abs(arr[mid]-arr[i])==x) return 1;
           else if(abs(arr[mid]-arr[i])>x) end = mid-1;
           else start = mid+1;
          }
        }
        
        return -1;
    }
};




