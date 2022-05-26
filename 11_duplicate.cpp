#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void duplicate_arr(int arr[],int len){
	sort(arr,arr+len-1);
	for(int i=0; i<len; i++){
		if(arr[i]==arr[i+1]){
			cout<<arr[i]<<endl;
		}
	}
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
	cout<<"Duplicate numbers in an array are"<<endl;
	duplicate_arr(arr1,m);
}
