#include <iostream>
using namespace std;
class Queue {
    public:
        int capacity,rear;
        int *arr;
        Queue(int num) {
            capacity = num;
            rear = -1;//the start is -1 index means empty
            arr = new int[capacity];//we use array
        }
        
        bool isFull() {
            if(rear == capacity-1)
                return true;
            return false;
        }
        
        bool isEmpty() {
            if(rear == -1)//empty is checking
                return true;
            return false;
        }
        
        void enqueue(int value) {//to add element 
            if(isFull())
                cout << "Queue is full\n";
            else
                arr[++rear] = value;
        }
        
        void dequeue() {//to empty an element at start
            if(isEmpty())
                cout << "Queue is empty\n";
            else {
                cout << arr[0] << endl;
                for(int i=0;i<rear;i++){
                    arr[i] = arr[i+1];
            }
                rear--;
            }
        }
        
        void display() {
            if(isEmpty())
                cout << "Queue is empty\n";
            else {
                for(int i=0;i<=rear;i++)
                    cout << arr[i] << " ";
                cout << endl;
            }
        }
};
