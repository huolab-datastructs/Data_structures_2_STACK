#include   "../../C/UTILITY.H"

#include   "STACK.H"
 
#include   "../../C/UTILITY.CPP"
 
void main()
/*   
Pre:    The user supplies an integer n and n
floating point numbers.
Post:  The floating point numbers are printed in reverse order.
Uses:  The class Stack and its methods
 */

{
   int n;
   float item;
   Stack numbers;

   cout << " Type in an integer n followed by n floating point numbers.\n"
        << " The numbers will be printed in reverse order." << endl;
   cin  >> n;

   for (int i = 0; i < n; i++) {
      cin >> item;
      if (numbers.push(item) == overflow)
         cout << "\nThe stack is full." << endl;
   }

   cout << "\n\n";
   while (!numbers.empty()) {
      numbers.top(item);
      numbers.pop();
      cout << item << " ";
   }
   cout << endl;
}
