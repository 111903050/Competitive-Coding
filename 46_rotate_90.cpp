#include <iostream>
#include <vector>
using namespace std;

void print_matrix(vector<vector<int>>mat,int m, int n){
    for(int i=0 ;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<< " "<<endl;
        }
        cout<<"\n"<<endl;
    }
    return;
}
void rotate_90(vector<vector<int>>mat,int m , int n){
    if(n>m){
        swap(m,n);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    return;
}
int main() {
	vector<vector<int>>m={
				{ 1, 2, -1, -4, -20 },
				{ -8, -3, 4, 2, 1 },
				{ 3, 8, 6, 1, 3 },
				{ -4, -1, 1, 7, -6 },
				{ 0, -4, 10, -5, 1 }
			};
	cout<<"The matrix before rotation is"<< print_matrix(m,5,5)<<endl;
	rotate_90(m,5,5);
	//cout << "The matrix after 90 degree rotation "<< print_matrix(m,5,5)<<endl;

	return 0;
}


