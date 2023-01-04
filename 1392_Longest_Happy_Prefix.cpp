class Solution {
public:
    string longestPrefix(string s) {
        int n = s.size();
	    int arr[n];
        
        for(int i = 0;i<n;i++){
            arr[i] = 0;
        }
	    
	    int prevPointer = 0;
	    int curr = 1;
	    int ans = 1;
	    
	    while(curr<n){
	        if(s[curr]==s[prevPointer]){
	            arr[curr] = 1 + prevPointer;
	            prevPointer++;
	            curr++;
	        }
	        else{
	            if(prevPointer==0){
	                arr[curr] = 0;
	                curr++;
	            }
	            else{
	                prevPointer = arr[prevPointer-1];
	            }
	        }
	    } 


        return s.substr(0,arr[n-1]);       
    }
};
