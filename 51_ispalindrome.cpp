// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
{
    if(S.length()==0){
        return 1;
    }
    int s=0;
    int e=S.length()-1;
    int j=e;
    if(e%2!=1){
        return 0;
    }
    for(int i=0;i<e/2;i++){
        if(S[i]==S[j]){
            j--;
        }
        else{
            return 0;
        }
    }
    return 1;
}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
