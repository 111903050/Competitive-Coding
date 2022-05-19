#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void subarray_sum(int arr[],int len){
	int temp1=0;
	int temp2=0;
	for (int i=0;i<len;i++){
		temp1=temp1+arr[i];
		if(temp1>temp2){
			temp2=temp1;
		}
	}
	cout<<"Maximum subarray sum is "<< temp2<<endl;
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
	subarray_sum(arr1,m);
	//cout<<"Union of array is "<< u<<endl;
}
