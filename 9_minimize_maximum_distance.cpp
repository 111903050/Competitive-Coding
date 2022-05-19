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

void minimize_distance_arr(int arr[],int len,int k){
	sort(arr,arr+len);
    	int ans = arr[len - 1] - arr[0]; 

    	int tempmin, tempmax;
    	tempmin = arr[0];
    	tempmax = arr[len - 1];

    	for (int i = 1; i < len; i++) {
        	if(arr[i] - k < 0)
        		continue;
        	tempmin= min(arr[0] + k,arr[i] - k); 
                                                
        	tempmax = max(arr[i - 1] + k, arr[len - 1] - k); 
                                                         
        	ans = min(ans, tempmax - tempmin); 
    	}
	cout<<"The distance between min and max element is "<< ans<<endl;
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
	minimize_distance_arr(arr1,m,2);
	//printarray(arr1,m);
}
