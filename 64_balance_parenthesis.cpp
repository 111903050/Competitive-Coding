// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    bool checkit(char a,char b){
       if(a=='{'&&b=='}'||a=='('&&b==')'||a=='['&&b==']'){
           return true;
       }
       else{
           return false;
       }
   }
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
   {
       // Your code here
       stack<int>s;
       for(int i=0;i<x.length();i++){
           if(x[i]=='{'||x[i]=='('||x[i]=='['){
               s.push(x[i]);
           }
           else if(!s.empty()&&checkit(s.top(),x[i])){
               s.pop();
           }
           else{
               return false;
           }
       }
       if(s.empty()==true){
           return true;
       }
       else{
           return false;
       }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
