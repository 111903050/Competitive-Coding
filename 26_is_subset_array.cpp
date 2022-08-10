//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int m, int n) {
    int i = 0, j = 0;

    if (m < n)
        return "No";

    // Sort both the arrays
    sort(a1, a1 + m);
    sort(a2, a2 + n);

    // Iterate till they donot exceed their sizes
    while (i < n && j < m) 
    {
        // If the element is smaller than
        // Move ahead in the first array
        if (a1[j] < a2[i])
            j++;
        // If both are equal, then move 
        // both of them forward
        else if (a1[j] == a2[i]) 
        {
            j++;
            i++;
        }

        // If we donot have a element smaller
        // or equal to the second array then break
        else if (a1[j] > a2[i])
            return "No";
    }

    return (i < n) ? "No" : "Yes";
}
