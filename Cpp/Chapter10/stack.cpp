// stack.cpp -- Stack member functions
#include "stack.h"
Stack::Stack() // create an empty stack
{
    this ->top =0;
}

bool Stack::isempty() const
{
    return this ->top == 0;
}

bool Stack::isfull() const
{
    return this ->top == MAX;
}

bool Stack::push(const Item & item)
{
    if(this ->top<MAX)
    {
        this ->items[top++]= item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if(top>0)
    {
        item = items[--top];
        return true;
    }
    else
    {
        return false;
    }
    
}
