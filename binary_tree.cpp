#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int main() {
    Node* root = new Node();
    root->data = 1;
    root->left = NULL;
    root->right = NULL;

    cout << "Binary Tree Created";
    return 0;
}
