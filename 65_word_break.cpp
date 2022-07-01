// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution
{
public:
    int t[1101];
   bool isfound(set<string> s,int i,int j,string A)
   {
       string q = A.substr(i,j);
       if(s.find(q)!=s.end())
       return true;
       return false;
   }
   bool solve(string A,set<string> s,int n,int i)
   {
       if(t[i]!=-1)
       return t[i];
       if(isfound(s,i,n,A))
       return true;
       for(int k=1;k<n;k++)
       {
           if(isfound(s,i,k,A)&&solve(A,s,n-k,i+k))
           return t[i]=true;
       }
       return t[i]=false;
   }
   int wordBreak(string A, vector<string> &B) {
       //code here
       set<string> s(B.begin(),B.end());
       memset(t,-1,sizeof(t));
       if(s.find(A)!=s.end())
       return 1;
       int n = A.size();
       return solve(A,s,n,0);
   }
   
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends
