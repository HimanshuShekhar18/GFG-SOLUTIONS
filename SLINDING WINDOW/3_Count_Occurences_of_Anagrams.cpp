class Solution{
public:
	int search(string pat, string txt) {
	    
	    int k = pat.length();
	    int n = txt.length();
	    
	    int ans = 0;
	   
	    map<char,int> mp;
	    
	    int j = 0;
	    int i = 0;
	    
	    for(int i = 0; i<k; i++) mp[pat[i]]++;
	    
	    int count = mp.size();
	    
	    while(j<n){
	        
	        if(mp.find(txt[j])!=mp.end()) {
	            mp[txt[j]]--;
	            if(mp[txt[j]]==0) count--;
	        }
	        
            if(j-i+1==k){
	            if(count==0) ans++;
	            if(mp.find(txt[i])!=mp.end()) {
	                mp[txt[i]]++;
	                 if(mp[txt[i]]==1) count++;
	            }
	            i++;
	        }
	        j++;
	    }
	    return ans;
	}

};
