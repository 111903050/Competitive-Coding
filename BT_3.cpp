
//sting break problem
#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    void fun(string s,unordered_map<string,int>m,int ind,vector<string>&v,string ans)
    {
        if(ind>=s.size())
        {
            v.push_back(ans);
            return;
        }
        string temp="";
        for(int i=ind;i<s.size();i++)
        {
            temp+=s[i];
            if(m.count(temp))
            {
                  fun(s,m,i+1,v,ans+temp+" ");
            }
        }
    }
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        vector<string>v;
        unordered_map<string,int>m;
        for(int i=0;i<dict.size();i++)
        {
            m[dict[i]]++;
        }
        fun(s,m,0,v,"");
        for(int i=0;i<v.size();i++)
        {
            string st=v[i];
            st.pop_back();
            v[i]=st;
        }
        return v;
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}

