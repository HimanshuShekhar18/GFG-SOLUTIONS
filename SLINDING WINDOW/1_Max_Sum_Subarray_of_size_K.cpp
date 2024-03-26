class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        
        long long maxisum = 0, sum = 0;
        
        for(int i = 0; i<K; i++){
            sum+=Arr[i];
        }
        maxisum = sum;
        // code here 
        for(int i = K; i<N; i++){
            
            sum+=Arr[i]-Arr[i-K];
            maxisum=max(maxisum,sum);
        }
        
        return maxisum;
    }
};
