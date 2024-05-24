// link to the problem -->https://www.geeksforgeeks.org/problems/postorder-traversal-iterative/1

// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution
{
public:
    vector<int> postOrder(Node *node)
    {
        // code here
        stack<Node *> s1;
        stack<Node *> s2;
        s1.push(node);
        while (!s1.empty())
        {
            Node *temp = s1.top();
            s1.pop();
            s2.push(temp);
            if (temp->left != NULL)
                s1.push(temp->left);
            if (temp->right != NULL)
                s1.push(temp->right);
        }
        vector<int> ans;
        while (!s2.empty())
        {
            ans.push_back(s2.top()->data);
            s2.pop();
        }
        return ans;
    }
};