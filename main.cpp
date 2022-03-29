
//Use the queue structure for full implementtation 




#include <iostream>
#include "Queue.cpp"


using namespace std;

void Push(int x,QueueType<int> &q1){


   QueueType<int> q2;
   //enque one element in q2
   q2.enque(x);


   //enque all the elements in q1
   while(!q1.isEmpty()){

    q2.enque(q1.Front());

    q1.deque();
   }

   //then swap the elements of q2 -> q1
  while(!q2.isEmpty()){

    q1.enque(q2.Front());

    q2.deque();

  }

}

int main(){


   //Implementation of Stack using queue

    QueueType<int> q1;
//give the input one by one and set it to q1
    for (int i = 0; i < 5; i++)
 {
     int input;
     cin>>input;
     Push(input,q1);
 }

 //print the q1
 while(!q1.isEmpty()){

    cout<<q1.Front()<<endl;
    q1.deque();
 }

}
