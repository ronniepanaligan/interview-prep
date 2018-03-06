/************************************************************
BINARY SEARCH TRESS
Below is an implementation of a binary serach tree
1. generally used to easily iterate through a list of ndodes or array
2. insertion -> O(logn)
3. deletion -> O(1ogn)
************************************************************/
//define the Tree Node struct
struct Node {
  int value;
  Node* left;
  Node* right;
};

class binaryTree{
private:
  Node* head;
public:
  binaryTree() {
    head = null;
  }
  binaryTree(int n) {
    Node* temp = new Node;
    temp->value = n;
    temp->left = null;
    temp->right = null;
    head = temp;
    delete(temp);
  }
  Node* search(node* root, int key)
  {
    if(root == NULL || root->key == key)
      return root;

    if(root->key < key)
      return search(root->right, key);

    return search(root->left, key);
  }

  Node* insert(node* node, int key)
  {
    node* Node = new Node(key);
    if(key < node->key)
      node->left = insert(node->left, key);
    else if(key > node->key)
      node->right = insert(node->right, key);

    return node;
  }
  
  Node* deleteNode(node* root, int key)
  {
    if(!root) return nullptr;
    if(root->val == key) {
      if(!root->right){
        node* left = root->left;
        delete root;
        return left;
      }
      else
      {
        node* right = root->right;
        while(right->left)
          right = right->left;
        swap(root->val, right->val);
      }
    }
    root->left = deleteNode(root->left, key);
    root->right = deleteNode(root->right, key);
    return root;
  }

}
