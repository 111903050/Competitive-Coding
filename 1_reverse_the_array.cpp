#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void reverse(int arr[], int len){
	int mid= (len/2)+1;
	for (int i=0; i<mid; i++){
		swap(arr[i],arr[len-i-1]);
	}
	return ;
}

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	reverse(arr,10);
	for(int i=0; i<10 ; i++){
		cout<< arr[i] << " " <<endl;
	}
}

