

class BinaryTree {
public:
    int node;
    BinaryTree *left;
    BinaryTree *right;

    BinaryTree(int node) {
        this->node = node;
        this->left = nullptr;
        this->right = nullptr;
    };
};