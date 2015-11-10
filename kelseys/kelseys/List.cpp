#include "List.h"

List::List ()                    // default constructor; will always set mpHead to NULL
{
}

List::List (List &copyList)      // copy constructor - implicitly invoked when a List object is passed-by-value
{
}

List::~List ()                   // destructor - implicitly invoked when a List object leaves scope
{
	destroyList ();
}

//// This function must allocate new memory for each of the nodes in rhs to construct "this" object
//List & List::operator= (const List &rhs) // overloaded assignment operator - must perform a deep copy
//{
//	// you must use a loop, which visits each of the nodes in List rhs, and assign the data to the new nodes
//	// How to use new operator? ListNode *pMem = new ListNode; new is similar to the results of using malloc ()
//}

//// getter
//ListNode * List::getHeadPtr () const     // returns a copy of the address stored in mpHead
//{
//}

// setter
void List::setHeadPtr (const ListNode *pNewHead) // modifies mpHead
{
}
		
bool List::insertAtFront (const int newData)     // inserts newData at the beginning or front of the list
{
    
    if (mpHead == NULL){
        mpHead = new ListNode(newData);
        return true;
    }
    
    ListNode * tmp = new ListNode(newData);
    
    tmp->setNextPtr(mpHead);

    mpHead = tmp;
    return true;
}


bool List::insertAtEnd (const int newData)       // inserts newData at the end of the list
{
        return true;
}

// returns true if the list is empty; false otherwise
bool List::isEmpty ()                            // determines if the list is empty  
{
        return (mpHead == NULL);
}

// precondition: list must not be empty
int List::deleteAtFront ()                       // deletes the node at the front of the list
{
    int mData = mpHead->getData();
    ListNode * freeMe = mpHead;
    mpHead = mpHead->getNextPtr();
    delete freeMe;
    
    return mData;
}

// precondition: list must not be empty
bool List::deleteNode (const int searchValue)    // deletes the node with data == searchValue
{
        return true;
}

// precondition: list must not be empty
int List::deleteAtEnd ()                         // deletes the node at the end of the list
{
        return 0;
}

void List::printList ()                          // visits each node, print the node's data
{
    ListNode * tmp = mpHead;
    while (tmp != NULL) {
        cout << tmp->getData() << " ";
        tmp = tmp->getNextPtr();
    }
    
    cout << endl;
    
}

//// allocates memory for a Listnode; initializes the memory with newData
//ListNode * List::makeNode (const int newData)    // will only call within insert functions
//{
//
//}

void List::destroyList ()                        // deletes each node to free memory; will call in the destructor
{
}