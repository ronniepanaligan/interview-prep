/************************************************************
HASH TABLE
Below is an implementation of a hash table utilizing lists of Nodes.
1. generally used to easily iterate through a list of ndodes or array
2. insertion -> O(1)
3. deletion -> O(1)
************************************************************/

//define the Node struct
struct Node {
  int value;
  Node* next;
};

class hashTable {
  private:
    //size of table
    int size;
    //list will contain nodes that point to o list of nodes
    Node** table;
  public:
    //Constructor that creates a HashTable that contains s Nodes
    hashTable(int s) {
      size = s;
      table = new Node*[size];
      //each Node will initially point to NULL
      for(int i = 0; i < size; i++) {
        table[i] = NULL;
      }
    }
    // insert a node with value val
    void insert(int val) {
      // determine the location using remainder
      int hash = val%size;
      //create temp node of value val
      Node* temp = new Node;
      temp->value = val;
      temp->next = NULL;
      //create a runner node at correct location
      Node* current = table[hash];
      //if location is NULL, location is temp node
      if(current == NULL) {
        current = temp;
        return;
      }
      //else iterate through list until reach the end
      while(current->next != NULL) {
        current = current->next;
      }
      //last node of list will point to temp node
      current->next = temp;

      return;
    }
}
