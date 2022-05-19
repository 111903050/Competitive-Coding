#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int start, int end, int x){
	if(start<=end){
		int mid= end/2;
		if(arr[mid]==x){
			return arr[mid];
		}
		if(x>arr[mid]){
			return binary_search(arr,mid+1,end,x);
		}
		return binary_search(arr,start,mid-1,x);
	}
	return -1;
}

void union_arr(int arr1[],int len1, int arr2[], int len2){
	if(len1>len2){
		int *temp=arr1;
		arr1=arr2;
		arr2=temp;

		int temp2=len1;
		len1=len2;
		len2=temp2;
	}
	sort(arr1,arr1+len1-1);
	for (int i=0;i<len2;i++){
		if(binary_search(arr1,0,len1-1,arr2[i])!=-1){
			cout<<arr2[i]<<" "<<endl;
		}
		else{
			//cout<<arr2[i]<<" "<<endl;
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
	cout<<"Enter the size of an array 2:"<<endl;
	cin>>n;
	int arr1[m],arr2[n];
	takeinput(arr1,m);
	//printarray(arr1,m);
	takeinput(arr2,n);
	//printarray(arr2,n);
	//int u;
	union_arr(arr1,m,arr2,n);
	//cout<<"Union of array is "<< u<<endl;
}
