M-707. Design Linked List

class MyLinkedList {
    
    class Node{
        public:
        int val;
        Node* next;
    };
    
public:
    Node * head;
    int size;
    MyLinkedList() {
        head=new Node();
        head=NULL;
        size=0;
    }
    
    int get(int index) {
        if(index>=size)
            return -1;
        Node * temp=head;
        int i=0;
        // Node * temp2=head;
        // while(temp2)
        // {
        //     cout<<temp2->val;
        //     temp2=temp2->next;
        // }
        while(i!=index)
        {
            temp=temp->next;
            i++;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node * temp=new Node();
        temp->val=val;
        temp->next=head;
        head=temp;
        size++;
    }
    
    void addAtTail(int val) {
        if(size==0)
        {
            addAtHead(val);
            return;
        }
        Node * temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new Node();
        temp->next->val=val;
        temp->next->next=NULL;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index>size)
        {
            return;
        }
        if(index==size)
        {
            addAtTail(val);
            return;
        }
        if(index==0)
        {
            addAtHead(val);
            return;
        }
        
        Node * temp=head;
        int i=0;
        while(i!=index-1)
        {
            temp=temp->next;
            i++;
        }
        Node * temp2=temp->next;
        temp->next=new Node();
        temp->next->val=val;
        temp->next->next=temp2;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index>=size)
            return;
        if(index==0)
        {
            if(head)
            {
                head=head->next;
                size--;
            }
            return;
        }
        Node * temp=head;
        int i=0;
        while(i!=index-1)
        {
            temp=temp->next;
            i++;
        }
        temp->next=temp->next->next;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */