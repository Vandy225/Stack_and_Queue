//Let Q be a non-empty queue, and let S be an empty stack. Using only the
//stack and queue ADT functions and a single element variable
//X, write an algorithm to reverse the order of the elements in Q


#include <stack>
#include <queue>
#include <iostream>

using namespace std;

int main()

{

   int x;
   stack<int> mystack;
   queue<int> myqueue;
   int n=0;
   int temp;

   cout <<"# of elements: ";
   cin >> n;

   //populate the queue

   for (int i=0; i < n; i++)
   {
      myqueue.push(i);
   }

   queue<int> myqueue2 = myqueue;

   //print what is in the queue

   cout <<"Printing Queue:";

   for (int i=0; i<n; i++)
   {
      temp = myqueue2.front();
      cout << temp;
      myqueue2.pop();
   }

   cout << endl;



   //reverse order using stack

   for (int i=0; i<n; i++)

      {
	 temp = myqueue.front();
	 myqueue.pop();
	 mystack.push(temp);
      }

   stack<int> mystack2 = mystack;

   //print what is in the stack

   cout <<"Printing Stack:";

   for (int i=0; i<n; i++)
   {
      temp = mystack2.top();
      cout << temp;
      mystack2.pop();
   }

   cout << endl;


   //repopulate queue in reverse

	   for (int i=0; i <n; i++)
	   {
	      temp = mystack.top();
	      mystack.pop();
	      myqueue.push(temp);
	   }

//print reversed queue

	   cout <<"Printing Reversed Queue: ";

	   for (int i =0; i<n; i++)
	   {
	      temp = myqueue.front();
	      cout << temp;
	      myqueue.pop();
	   }
//end program
   return 0;

}

