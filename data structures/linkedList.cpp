/************************************************************
LINKED LIST
1. generally used to easily iterate through a list of ndodes or array
2. insertion -> O(n)
3. deletion -> O(n)
************************************************************/

//Basic struct for a node which includes an int for the value, and a node that points to the next node
struct Node
{
  int value;
  Node* next;
}

//Basic Singuly Linked List
class LinkedList
{
  private:
    // initialize head node which is the first node of a linked list
    Node *head;
  public:
    //Default constructor, create a new linked list with head value being NULL
    LinkedList()
    {
      head = NULL;
    }
    //insert a node to the end of the linkedlist
    void insert(int v)
    {
      //create a temp node that will hold the value that will get added to the list
      Node *temp = new Node;
      // current will point to head, we will use this to iterate through the linked list without actually affecting the head
      Node *current = *head;
      temp->value = v;
      temp->next = NULL;

      //of course if head is NULL, we will just make head = temp and delete temp from memory
      if(head == NULL)
      {
        head = temp;
        delete temp;
      }
      else
      {
        //basic loop to iterate through list until next points to NULL.
        //THIS LOOP IS IMPORTANT TO REMEMBER
        while(current->next != NULL)
          current = current->next;

        //once we find the last node of the list, it will point to temp and we will delete temp from memory.
        current->next = temp;
        delete temp;
      }
    }
    void remove(int v)
    {
      Node *current = new Node;
      Node *prev = new Node;
      current = head;

      //search for the node that has the val
      while(current->next != NULL && current->value != v)
      {
        prev = current;
        current = current->next;
      }

      if(current->value == v)
      {
        //fount the node that holds the int to be deleted
        //make the previous node point to the node current is pointing to
        prev->next = current->next;
        delete current;
      }
    }
}
