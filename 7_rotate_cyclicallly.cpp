# include <iostream>
using namespace std;

void Rotate(int arr[],int n){
    int last=arr[n-1];
    for (int i=n-1;i>0;i--){
        arr[i] = arr[i - 1];
    }
    arr[0]=last;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5}, i;
    int n = sizeof(arr) /
            sizeof(arr[0]);

    cout << "Given array is \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << ' ';

    Rotate(arr, n);

    cout << "\nRotated array is\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << ' ';

    return 0;
}
