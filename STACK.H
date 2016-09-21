#ifndef __STACK_H__
#define  __STACK_H__

#include "..\..\C\UTILITY.H"
typedef float Stack_entry;  //  The program will use stacks with float entries.
const int maxstack = 10;    //  small value for testing

class Stack {
public:
   Stack();
   bool empty() const;
   Error_code pop();
   Error_code top(Stack_entry &item) const;
   Error_code push(const Stack_entry &item);

private:
   int count;
   Stack_entry entry[maxstack];
};

#endif
