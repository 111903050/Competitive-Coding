#include<iostream>
#include<algorithm>
using namespace std;

void kth_max(int arr[], int len, int k){
	sort(arr,arr+len-1);
	for(int i=0; i<k;i++){
		if(i==k-1){
			cout<<k<<"th largest element of an array is "<< arr[len-i-2]<< endl;
		}
	}
}

int main(){
	int arr[]= {10,3,4,23,76,89,33,6,5,90,21};
	kth_max(arr,11,4);
}
