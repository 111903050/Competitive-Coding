//Frog Jump 
#include <bits/stdc++.h>
using namespace std;
#include<vector>
 int frog_jump(int ind){
 	if(ind==0) return 1;
 	if(ind==1) return 0;
 	int left= frog_jump(ind-1);
 	int right= frog_jump(ind-2);
 	return left +right;
 }
 
int main(){
	int count=frog_jump(6);
	cout<<"Count="<<count<<endl;		
}

