#include<bits/stdc++.h>
using namespace std;
#include <vector> 

class Solution {
public:
    void nextPermutation(vector<int>& vect){
	    int i=vect.size();
	    int j=i;
	    for(i;i<=0;i--){
		    if(vect[i]<vect[i-1]){
			    int m=i;
			    while(vect[m+1]<vect[i]>vect[m]){
				    m++;
			    }
			    swap(vect[i],vect[m]);
			    swap(vect[i+1],vect[j]);
		   }
	   }
    }
};

int main(){
	Solution ob;
	vector<int> p;
	p.push_back(1);
	p.push_back(5);
	p.push_back(8);
	p.push_back(4);
	p.push_back(7);
	p.push_back(6);
	p.push_back(5);
	p.push_back(3);
	p.push_back(1);
	ob.nextPermutation(p);
	for (int i = 0; i < p.size(); i++)
    	{
      		cout << p[i] << " ";    
        	cout << endl;
    	}
}
