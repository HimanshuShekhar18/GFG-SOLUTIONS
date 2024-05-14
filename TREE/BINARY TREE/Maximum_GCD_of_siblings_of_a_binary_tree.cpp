class Solution {
  public:
    int maxBinTreeGCD(vector<vector<int>> arr, int N) {
        // code here
        if(N==1) return 0;
        
        sort(arr.begin(),arr.end());
        
        int gcdmax = 0;
        
        for(int i = 0; i<arr.size()-1; i++){
            
            int first = arr[i][0];
            int second = arr[i+1][0];
            
            if(first!=second) continue;
            else{
                int sibling1 = arr[i][1];
                int sibling2 = arr[i+1][1];
                
                gcdmax = max(gcdmax,__gcd(sibling1,sibling2));
                i++;
            }
            
        }
        return gcdmax;
    }
};
