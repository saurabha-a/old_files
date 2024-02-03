#include <iostream>

struct Node
{
    int value;
    struct Node *left = NULL, *right = NULL;
};
class bin_srch_tre
{
    public:
    struct  Node *root;
    public:
    bin_srch_tre()
    {
        root = NULL;
    }
    struct Node * insert(int data, struct Node *tmp_root)
    {
        if(tmp_root == NULL)
        {
            struct Node *tmp =  new struct Node;
            tmp -> value = data;
            tmp -> left = tmp -> right = NULL;
            return tmp;
        }
        if(tmp_root -> value >= data) tmp_root->left = insert(data, tmp_root->left);
        else  tmp_root->right = insert(data, tmp_root->right);
        return tmp_root;
    }
};

int main()
{
    bin_srch_tre  _inst;
    struct Node *ptr;
    for(int i = 1; i< 6; i++) ptr = _inst.insert(i*5, _inst.root);
    std::cout << ptr ->value;
    return 0;
}
