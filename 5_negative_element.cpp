#include<iostream>
using namespace std;


void negative(int arr[],int len){
	int temp=0;
	for (int i=0;i<len;i++){
		if(arr[i]<0){
			swap(arr[i],arr[temp]);
			temp++;
		}
	}
}
void printarray(int arr[],int len){
	for(int i=0;i<len;i++){
		cout<<arr[i]<< " "<<endl;
	}
}

int main(){
	int arr[]={12,-14,10,6,-5,-3,90,-80};
	negative(arr,8);
	printarray(arr,8);
}
