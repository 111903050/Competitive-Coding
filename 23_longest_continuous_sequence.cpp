//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
       int ans = 0, count = 0;

        // sort the array
        sort(arr, arr + N);
    
        vector<int> v;
        v.push_back(arr[0]);
    
        //insert repeated elements only once in the vector
        for (int i = 1; i < N; i++) 
        {
            if (arr[i] != arr[i - 1])
                v.push_back(arr[i]);
        }
        // find the maximum length
        // by traversing the array
        for (int i = 0; i < v.size(); i++) 
        {
            
            // Check if the current element is equal
            // to previous element +1
            if (i > 0 && v[i] == v[i - 1] + 1)
                count++;
            // reset the count
            else
                count = 1;
    
            // update the maximum
            ans = max(ans, count);
        }
        return ans;
        /*
        unordered_set<int> S;
    int ans = 0;

    // Hash all the array elements
    for (int i = 0; i < n; i++)
        S.insert(arr[i]);

    // check each possible sequence from
    // the start then update optimal length
    for (int i = 0; i < n; i++)
    {
        // if current element is the starting
        // element of a sequence
        if (S.find(arr[i] - 1) == S.end())
        {
            // Then check for next elements
            // in the sequence
            int j = arr[i];
            while (S.find(j) != S.end())
                j++;

            // update  optimal length if
            // this length is more
            ans = max(ans, j - arr[i]);
        }
    }
    return ans;*/
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends
