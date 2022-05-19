#include<iostream>
using namespace std;

void swap_012(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void sort_012(int arr[],int len){
	int zero=0;
	int one=0;
	int two=len-1;
	while(one<=two){
		if(arr[one]==0){
			swap_012(arr+one,arr+zero);
			zero++;
			one++;
			break;
		}
		if(arr[one]==1){
			one++;
			break;
		}
	}
	return;
}
void printarray(int arr[],int len){
	for(int i=0;i<len;i++){
		cout<<arr[i]<< " "<<endl;
	}
}

int main(){
	int arr[]={0,2,2,1,2,1,0,0,1};
	sort_012(arr,9);
	printarray(arr,9);
}
