/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int> > levelOrder(Node* root)
{
        if(root==NULL)return {};
    vector<vector<int> > ans;
    if (!root)
        cout << "N-Ary tree does not any nodes";
 
    queue<Node*> main_queue;
 
    main_queue.push(root);
 
    
    vector<int> temp;
 
    while (!main_queue.empty()) {
 
        int n = main_queue.size();
 
        for (int i = 0; i < n; i++) {
            Node* cur = main_queue.front();
            main_queue.pop();
            temp.push_back(cur->val);
            for (auto u : cur->children)
                main_queue.push(u);
        }
        ans.push_back(temp);
        temp.clear();
    }
    return ans;
}
   
};