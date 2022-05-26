



// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		int maxSubarraySum(int arr[],int n){
			int t1=0;
			int t2=INT_MIN;
			for(int i=0;i<n;i++){
				t1=t1+arr[i];
				if(t1>t2){
					t2=t1;
				}
				if(t1<0){
					t1=0;
				}
			}
			return t2;
		}
};
// { Driver Code Starts.

int main()
{
    int t,n;
    cout<<"input the test cases"<<endl; 
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        cout<<"input the size of an array for test case "<< t<<endl;
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++){
	    cout<<"Enter the element number "<<i<<endl;
            cin>>a[i]; //inputting elements of array
	}    
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
