// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    int max=0;
		    map<char,int> count;
		    for(int i=0;i<str.size();i++){
		        if(str[i]==str[i+1]){
		            count[str[i]]++;
		        }
		        else if(str[i]!=str[i+1]){
		            continue;
		        }
		    }
		    for (auto i = count.rbegin(); i != count.rend(); ++i) {
                return i->second;
            }
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
