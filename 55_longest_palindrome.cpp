// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
       int start = 0, end = 1, low, high;
       for(int i=1; i<s.size(); i++) {
           low = i-1;
           high = i;
           while(low >= 0 && high < s.size() && s[low] == s[high]) {
               if(high-low+1 > end) {
                   end = high - low + 1;
                   start = low;
               }
               low--;
               high++;
           }
           
           low = i-1;
           high = i+1;
           while(low >= 0 && high < s.size() && s[low] == s[high]) {
               if(high-low+1 > end) {
                   end = high - low + 1;
                   start = low;
               }
               low--;
               high++;
           }
       }
       return s.substr(start, end);
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}

