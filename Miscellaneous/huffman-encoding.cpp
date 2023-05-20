//Take a priority queue of Node and vector<Node>* and cmp
//cmp takes 2 nodes and return a->data > b->data
// aand then justuse bfs to traverse the tree
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
class Solution
{
    public:
    class cmp{
    public:
    bool operator()(Node* a,Node* b){
        return a->data > b->data;
    }  
};
        //traverse huffman tree from and get huffman code
        void traverse(Node* root,vector<string>& ans,string output){
            if(!root->left && !root->right){
                ans.push_back(output);
                return;
            }
            traverse(root->left,ans,output+'0');
            traverse(root->right,ans,output+'1');
        }
        
        vector<string> huffmanCodes(string S,vector<int> f,int N)
        {
            // Code here
            priority_queue<Node*,vector<Node*>,cmp>pq;
            for(int i=0;i < N;i++){
                Node* temp=new Node(f[i]);
                pq.push(temp);
            }
            //take two nodes and pop them then push their sum to make huffman tree.
            //also connect the nodes with each other
            while(pq.size() > 1){
                Node* first=pq.top();
                pq.pop();
                Node* second=pq.top();
                pq.pop();
                Node* sum=new Node(first->data + second->data);
                sum->left=first;
                sum->right=second;
                pq.push(sum);
            }
            Node* root=pq.top();
            vector<string>ans;
            traverse(root,ans,"");
            
            return ans;
        }
};
