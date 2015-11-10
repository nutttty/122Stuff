#include "ListNode.h"

ListNode::ListNode (int newData) : mData(newData)
{
    pNext = NULL;
    pPrev = NULL;
}

ListNode::ListNode (ListNode &copy) : mData(copy.mData)
{
    pNext = NULL;
    pPrev = NULL;
}

ListNode::~ListNode ()
{
    
}

int ListNode::getData () const // the const indicates "constant" function; can't modify the object's data members with this function
{
    return 0;
}

ListNode * ListNode::getNextPtr () const // the const indicates "constant" function; can't modify the object's data members with this function
{
    
    return 0;
    
}

void ListNode::setData (const int newData) // the const in this context ensures newData can't be modified
{
}

void ListNode::setNextPtr (const ListNode *pNewNext) // the const in this context ensures pNewNext can't be modified
{
}