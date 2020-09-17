// queuetp.h -- queue template with a nested class
#ifndef QUEUETP_H_
#define QUEUETP_H_

template <class Item>
class QueueTP
{
    private: 
        enum {Q_SIZE = 10};
        // Node is a nested class definition 
        class Node
        {
            public: 
                Item item; 
                Node * next;
                Node(const Item & i): item(i), next(0) {} 
        };

        // QueueTP private fields
        Node *  front;      // pointer to front of Queue
        Node * rear;        // pointer to rear of Queue
        int items;          // current number of items in Queue
        const int qsize;    // maximum number of items in Queue
        QueueTP(const QueueTP & q): qsize(0) {}
        QueueTP & operator=(const QueueTP & q) {return *this;}

    public:
        QueueTP(int qs = Q_SIZE);
        ~QueueTP();
        bool isempty() const 
        {
            return items == 0;
        }

        bool isfull() const 
        {
            return items==qsize;
        }

        int queuecount() const 
        {
            return items;
        }

        bool enqueue(const Item & item); // add item to end
        bool dequeue(Item & item);
};

// QueueTP methods
template <class Item>
QueueTP<Item>::QueueTP(int qs): qsize(qs)
{
    front = rear = 0;
    items = 0;
}

template <class Item>
QueueTP<Item>::~QueueTP()
{
    Node * temp; 
    while (front !=0 )  // while queue is not yet empty 
    {
        temp = front;           // save addres of front item 
        front = front->next;    // reset pointer 
        delete temp;            // delete former front 
    }
}


// Add item to queue 
template <class Item> 
bool QueueTP<Item>::enqueue(const Item & item)
{
    if(isfull())
        return false;
    Node * add = new Node(item); // create node
    if( add == NULL)
        return false; // quit if noe available 
    items++; 
    if(front == 0)
        front = add;    // if the queue is empty add it at the front
    else 
        rear->next = add; // else add it at the rear
    rear = add;           // set this node to be the rear
    return true; 
}


// Place fron item into item variable and remove from queue
template< class Item>
bool QueueTP<Item>::dequeue(Item & item)
{
    if(front == 0)
        return false;
    item = front -> item; // set item to first item in the queue
    items--; 
    Node* temp = front;
    front = front -> next;
    delete temp;
    if(items == 0)
        rear = 0; 
    return true;
}



#endif 