/*
 * Name: Minji Ahn
 * NetID: mja104
 * Date: 2/17/19
 */


#include <iostream>
#include "myStack.h"

using namespace std;

/*
 * Constructor
 * Usage: myStack(maxSz);
 * -------------------------
 * A new stack variable is initialized.  The initialized
 * stack is made empty.  maxSz is used to determine the
 * maximum number of character that can be held in the
 * stack.
 */

myStack::myStack(int maxSz) {
	// TODO
    contents = new int(maxSz-1);
    top = -1;
    maxSize = maxSz;
}


/* Destructor
 * Usage: delete ptr
 * -----------------------
 * This frees all memory associated with the stack.
 */

myStack::~myStack() {
	// TODO
	delete []contents;
}

/*
 * Functions: push, pop
 * Usage: s1.push(element); element = s1.pop();
 * --------------------------------------------
 * These are the fundamental stack operations that add an element to
 * the top of the stack and remove an element from the top of the stack.
 * A call to pop on an empty stack or to push on a full stack
 * is an error.  Make use of isEmpty()/isFull() (see below)
 * to avoid these errors.
 */

void myStack::push(int element) {
	// TODO
	top++;
	contents[top] = element;
}

int myStack::pop() {
	// TODO
	int temp = contents[top];
	top--;
    return temp;
}

/*
 * Functions: isEmpty, isFull
 * Usage: if (s1.isEmpty()) ...
 * -----------------------------------
 * These return a true value if the stack is empty
 * or full (respectively).
 */

bool myStack::isEmpty() const {
	// TODO
    return top == -1;
}

bool myStack::isFull() const {
	// TODO
    return top == maxSize-1;
}

