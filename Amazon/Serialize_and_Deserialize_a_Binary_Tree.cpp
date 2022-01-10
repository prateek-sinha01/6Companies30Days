//Problem link : https://practice.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1

//Date : 10/01/2022
//Time Complexity: O(N)
//Auxiliary Space: O(N)

class Solution{    
public:
    void fun(Node* root,vector<int> &v)
    {
        if(!root)
            return ;
        fun(root->left,v);
        v.push_back(root->data);
        fun(root->right,v);
    }
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int> v;
        fun(root,v);
        return v;
    }
    Node *deSerialize(vector<int> &A)
    {
       struct Node *newroot = new Node(-1);
       Node* temp = newroot;
       int n = A.size();
       for(int i=0;i<n;i++){
           temp->right = new Node(A[i]);
           temp = temp->right;
       }
       return newroot->right;
    }
};
