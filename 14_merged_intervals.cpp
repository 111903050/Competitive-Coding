#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        for (auto interval : intervals) {
            // if the list of merged intervals is empty or if the current
            // interval does not overlap with the previous, simply append it.
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            }
            // otherwise, there is overlap, so we merge the current and previous
            // intervals.
            else {
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }
        return merged;
    }
};

int main(){
	Solution ob;
	vector<vector<int>> intervals = {{1,3},{2,5},{7,10},{9,11}};
	vector<vector<int>> answer= ob.merge(intervals);
	for (int i = 0; i < answer.size(); i++)
    	{
        	for (int j = 0; j < answer[i].size(); j++)
        	{
            		cout << answer[i][j] << " ";
        	}    
        	cout << endl;
    	}
}
