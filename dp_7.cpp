//Ninja's Training
#include <bits/stdc++.h>
using namespace std;
#include<vector>
#include<cmath>
#include <algorithm>
int Ninjas_training(int ind,vector<int>dp,vector<int>arr){
 	if(ind==0) return 0;
 	if(dp[ind]!=-1) return dp[ind];
 	int left= frog_jump(ind-1,dp,arr)+abs(arr[ind-1]-arr[ind]);
 	int right = INT_MAX;
 	if(ind>1){
 		int right= frog_jump(ind-2,dp,arr)+abs(arr[ind-2]-arr[ind]);
 	}
 	return dp[ind] = min(left,right);
}
 
int main(){
	vector<int>arr{30,10,60,10,60,50};
	int n=arr.size();
	vector<int>vect(n+1,-1);
	int count=frog_jump(n,vect,arr);
	cout<<"Count="<<count<<endl;		
}

