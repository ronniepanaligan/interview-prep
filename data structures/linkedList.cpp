
struct Node
{
  int value;
  Node* next;
}

//Basic Singuly Linked List
class LinkedList
{
  private:
    Node *head;
  public:
    LinkedList()
    {
      head = NULL;
    }
    void insert(int v)
    {
      Node *temp = new Node;
      Node *current = *head;
      temp->value = v;
      temp->next = NULL;

      if(head == NULL)
      {
        head = temp;
        delete temp;
      }
      else
      {
        while(current->next != NULL)
          current = current->next;

        current->next = temp;
        delete temp;
      }
    }
    void remove(int v)
    {
      Node *current = new Node;
      Node *prev = new Node;
      current = head;
      while(current->value != NULL)
      {

      }
    }
}
