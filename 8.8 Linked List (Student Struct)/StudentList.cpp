// Implementation file for the Student List class
// Modidified by: Rimma Esheva
// IDE: VS Code

#include <iostream>
#include "StudentList.h"
using namespace std;

//**************************************************
// Constructor
// This function allocates and initializes a sentienel node
//      A sentinel (or dummy) node is an extra node added before the first data record.
//      This convenrion simplifies and accelerates same list-manipulation algorithms,
//      by making sure that all links can be safely dereferenced and that every list
//      (even one that contains no data elements) always has a "first" node.
//**************************************************
StudentList::StudentList() {
    head = new ListNode; // head points to the sentinel node.

    head->stu.gpa = -1;
    head->stu.name = "";
    head->next = NULL;
    count = 0;
}

//**************************************************
// This function only shows the students
// whose gpa is greater than or equal to its argumet.
//**************************************************
void StudentList::displayList(double gpa) {
    ListNode *pCur; // To move through the list.
    pCur = head->next;

    while (pCur) {
        if (gpa < 4 && pCur->stu.gpa >= gpa) {
            cout <<pCur->stu.gpa <<" " <<pCur->stu.name <<endl;
        }    
        // Mpve to the next node.
        pCur = pCur->next;
        } 
   if (gpa >= 4)
      cout <<"None!" <<endl;
   else
      cout <<endl;
}

//**************************************************
// displayList shows the value
// stored in each node of the linked list
// pointed to by head.
//**************************************************
void StudentList::displayList() const {
    ListNode *pCur; // To move through the list.
    pCur = head->next;

    // While pCur points to a node, traverse the list.
    while (pCur) {
        // Display the value in this node.
        cout <<pCur->stu.gpa <<" " <<pCur->stu.name <<endl;

        // Mpve to the next node.
        pCur = pCur->next;
    }
    cout <<endl;
}




//**************************************************
// The insertNode function inserts a node with
// stu copied to its value member.
//**************************************************
void StudentList::insertNode(Student dataIn) {
    ListNode *newNode; // A new node
    ListNode *pCur; // To traverse the lsit
    ListNode *pPre; // The previous node

    // Allocate a new node and store dataIn ther.
    newNode = new ListNode;
    newNode->stu = dataIn;

    // Initialize pointers
    pPre = head;
    pCur = head->next;

    // Find location: skip all nodes whose name is less than dataIn's gpa
    while (pCur != NULL && pCur->stu.name < dataIn.name){
        pPre = pCur;
        pCur = pCur->next;
    }

    // Insert the new node vetween pPre and pCur
    pPre->next = newNode;
    newNode->next = pCur;

    // Update counter
    count++;
}

//**************************************************
// The deleteNode function searches for a node
// with target as its name value. The node, if found, is
// deleted from the list and from memeory.
//**************************************************
bool StudentList::deleteNode(string target) {
    ListNode *pCur; // To traverse list
    ListNode *pPre; // To point to the previous node
    bool deleted = false;

    // Initialize pointers
    pPre = head;
    pCur = head->next;

    // Find node contraining the target: Skip all nodes whose name is less than the target
    while (pCur != NULL && pCur->stu.name < target) {
        pPre = pCur;
        pCur = pCur->next;
    }

    // If found, delete the node
    if (pCur != NULL && pCur->stu.name == target) {
        pPre->next = pCur->next;
        delete pCur;
        deleted = true;
        count --;
    }
    return deleted;
}

//**************************************************
// Destructor                                      *
// This function deleted every node in the lsit.   *
//**************************************************
StudentList::~StudentList() {
    ListNode *pCur; // To traverse the list
    ListNode *pNext; // To point to the next node

    // Position nodePtr at the head of the lsit.
    pCur = head->next;

    // While pCu is not at the end of the list...
    while (pCur != NULL) {
        // Save a pinter to the next node.
        pNext = pCur->next;

        // Delete the current node.
        cout <<"DEBUG - Destructor: Now deleting " <<pCur->stu.name <<endl;
        delete pCur;

        // Posititon pCur at the next node
        pCur = pNext;
    }
    cout <<"DEBUG - Destructor: Now deleting the sentinel node gpa = " <<head->stu.gpa <<endl;
    delete head; //delete sentinel node
}
