//Maximum Sum of non adjacent elements 
#include <bits/stdc++.h>
using namespace std;
#include<vector>
 int maximum_sum(int ind, vector<int>nums){
 	int prev=nums[0];
 	int prev2=0;
	for(int i=0;i<nums.size();i++){
		int take=nums[i];
		if(i>1) take+=prev2;
		int nontake=0 +prev;
		int curi= max(take,nontake);
		prev2=prev;
		prev=curi;
	}
	return prev;
 }
 
int main(){
	vector<int>vect{30,10,60,10,60,50};
	int n=vect.size();
	int count =maximum_sum(n,vect);
	cout<<"Maximum sum is "<<count<<endl;		
}

