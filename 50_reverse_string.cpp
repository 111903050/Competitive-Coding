// C++ program to sort a vector in non-increasing
// order.
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        for(int i=0;i<n/2;i++)
        {
            char temp = s[i];
            s[i]=s[n-i-1];
            s[n-i-1] = temp;
        }
    }
};
  
int main()
{
	Solution ans;
    	vector<char> v{"h","e","l","l","o"};
    	ans.reverseString(v);
    	for(int i=0;i<v.size();i++){
    		cout<<v[i]<<endl;
    	}
    	return 0;
}
