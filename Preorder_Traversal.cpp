// link to the problem ---> https://www.geeksforgeeks.org/problems/preorder-traversal/1

// Function to return a list containing the preorder traversal of the tree.
void solve(vector<int> &ans, Node *root)
{
    if (root == nullptr)
        return;

    ans.push_back(root->data);
    solve(ans, root->left);
    solve(ans, root->right);
}
vector<int> preorder(Node *root)
{
    // Your code here
    vector<int> ans;
    solve(ans, root);
    return ans;
}