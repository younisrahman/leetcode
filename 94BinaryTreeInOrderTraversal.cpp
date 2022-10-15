#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int d)
    {
        val = d;
        left = NULL;
        right = NULL;
    }
};

void returnData(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
        return;
    if (root->left != NULL)
        returnData(root->left, v);

    v.push_back(root->val);
    if (root->right != NULL)
        returnData(root->right, v);
}

void inOrder(TreeNode *root)
{
    vector<int> v;
    returnData(root, v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{

    FastIO;
    // 1 2 5 3 4 6
    TreeNode *h1 = new TreeNode(1);
    h1->right = new TreeNode(2);
    h1->right->left = new TreeNode(3);
    // h1->right->right = new TreeNode(5);
    // h1->right->right->right = new TreeNode(6);
    // h1->right->right->left = new TreeNode(3);
    // h1->right->right->left->left = new TreeNode(4);

    inOrder(h1);
    std::cout << std::endl;

    return 0;
}