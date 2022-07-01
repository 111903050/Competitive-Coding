// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void swap(vector<int>&arr,int i,int j){
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
   }
    void reverse(int i,int j,vector<int>&arr){
       while(i<j) swap(arr,i++,j--);
    }
    vector<int> nextPermutation(int N, vector<int> arr){
       // code here
       if(arr.size()==NULL||arr.size()<=1) 
            return arr;
       int i=arr.size()-2;
       while(i>=0&& arr[i]>=arr[i+1]) 
            i--;
       if(i>=0){
           int j=arr.size()-1;
           while(arr[j]<=arr[i]) 
                j--;
           swap(arr,i,j);
       }
       reverse(i+1,arr.size()-1,arr);
       return arr;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends
