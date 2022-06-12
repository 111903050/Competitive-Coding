// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    struct Node{
		        string symbol;
		        int frequency;
		        Node *lchild;
		        Node *rchild;
		        bool isleaf;
		        
		        Node(string symbol, int frequency){
		            this->symbol = symbol;
		            this->frequency= frequency;
		            this->lchild=NULL;
		            this->rchild=NULL;
		            this->isleaf=false;
		        }
		};
		struct CompareNode{
		    bool operator()(Node* a, Node* b){
	            return a->frequency > b->frequency;
	        }
		};
		void preOrder(Node* node, string path, vector<string>&result){
	        if(node == NULL){
	            return;
	        }
	        
	        if(node->isleaf){
	            result.push_back(path);
	        }
	        
	        preOrder(node->lchild, path+"0", result);
	        preOrder(node->rchild, path+"1", result);
	    }
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    priority_queue<Node*, vector<Node*>, CompareNode> pq;
		    Node *node,*node1,*node2,*newNode,*root;
		    vector<string> result;
		    
		    for(int i=0; i<N; i++){
		        node = new Node(string(1,S[i]),f[i]);
		        node->isleaf = true;
		        pq.push(node);
		    }
		    
		    while(pq.size() != 1){
		        node1 = pq.top();
		        pq.pop();
		        
		        node2 = pq.top();
		        pq.pop();
		        
		        newNode = new Node((node1->symbol+node2->symbol), (node1->frequency+node2->frequency));
		        newNode->lchild = node1;
		        newNode->rchild = node2;
		        pq.push(newNode);
		    }
		    
		    root = pq.top();
		    
		    preOrder(root, "", result);
		    
		    return result;

		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string S;
	    cin >> S;
	    int N = S.length();
	    vector<int> f(N);
	    for(int i=0;i<N;i++){
	        cin>>f[i];
	    }
	    Solution ob;
	    vector<string> ans = ob.huffmanCodes(S,f,N);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    }
	return 0;
}  // } Driver Code Ends
