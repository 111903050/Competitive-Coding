#include <iostream>
#include<string>
using namespace std;
#include <bits/stdc++.h>
int isSubstring(string s1, string s2)
{
    // using find method to check if s1 is
    // a substring of s2
    if (s2.find(s1)==1)
        return s2.find(s1);
    return 0;
}

int is_rotationString(string s1,string s2){
    if(s1.length()==0 && s2.length()==0){
        return 1;
    }
    string temp= s1 + s1;
    int i=isSubstring(s2,temp);
    return i;
}


int main() {
	string s1,s2;
	s1="ABCDE";
	s2="BCDEA";
    int ans=is_rotationString(s1,s2);
    if(ans==0){
        cout<<"string isn't a rotation";
    }
    else{
        cout<<"string is a rotation";
    }
	return 0;
}


