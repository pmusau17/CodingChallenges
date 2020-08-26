// stacktp.h -- a stack template

#ifndef STACKTP_H_
#define STACKTP_H_

template <class Type>
class Stack
{
    private:
        enum {MAX = 10}; // const specific to class 
        Type items[MAX]; // holds stack items
        int top;
    public:
        Stack();
        bool isempty();
        bool isfull();
        bool push(const Type & item);   // add item to stack
        bool pop(Type & item);
};

template <class Type>
Stack<Type>::Stack()
{
    this->top = 0;
}

template<class Type>
bool Stack<Type>::isempty()
{
    return this->top == 0;
}

template <class Type>
bool Stack<Type>::isfull()
{
    return this->top == MAX;
}

template <class Type>
bool Stack<Type>::push(const Type & item)
{
    if(top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

template <class Type>
bool Stack<Type>::pop(Type & item)
{
    if(top>0)
    {
        item = items[--top];
        return true;
    }
    else 
        return false;
}

#endif
