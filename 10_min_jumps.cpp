#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int minjump_arr(int arr[],int len){
	int jump=0;
	int i=0;
	while(i<len){
		if(i==0){
			i=arr[i];
			jump++;
		}
		else if(arr[i]==0){
			return -1;
		}
		else if(arr[i]==arr[len]){
			return jump;
		}
		else{
			i=i+arr[i];
			jump++;
		}
	}
	return jump;
}
void printarray(int arr[],int len){
	for(int i=0;i<len;i++){
		cout<<arr[i]<< " "<<endl;
	}
}

void takeinput(int arr[],int len){
	for(int i=0;i<len;i++){
		cout<<i<<"th element: "<<endl;
		cin>>arr[i];
	}
}
int main(){
	int m,n;
	cout<<"Enter the size of an array 1 :"<<endl;
	cin>>m;
	int arr1[m];
	takeinput(arr1,m);
	int j=minjump_arr(arr1,m);
	cout<<"Minimum numbers of jump required are"<<j<<endl;
	//printarray(arr1,m);
}
