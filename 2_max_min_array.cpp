#include<iostream>
using namespace std;

void max_min(int arr[],int len){
	int max, min;
	max=arr[0];
	min=max;
	for (int i=0; i<len; i++){
		if (arr[i]<min){
			min=arr[i];
		}
		if (arr[i]>max){
			max=arr[i];
		}
	}
	cout<< "Maximum element in an array is " <<max <<endl;
	cout<< "Minimum element in an array is " <<min <<endl;
}

int main(){
	int arr[] = {10,4,12,3,8,6,45,23,99,65,10};
	max_min(arr,11);
}
