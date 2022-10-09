//
//  queue.h
//  Assignment 2
//
//  Created by Mark Emad  on 09/10/2022.
//

#ifndef queue_h
#define queue_h

template <class q>
class queue{
        q *arr;         // array to store queue elements
        int capacity;   // maximum capacity of the queue
        int front;      // front points to the front element in the queue (if any)
        int rear;       // rear points to the last element in the queue
        int count;      // current size of the queue
     
    public:
    int SIZE;
    queue(int size ){// constructor
        arr = new q[size];
        capacity = size;
        front = 0;
        rear = -1;
        count = 0;
    }
    void pop(){
        if (isEmpty())
            {
                cout << "There is no data to push out of the queue";
                exit(EXIT_FAILURE);
            }
            front = (front + 1) % capacity;
            count--;
    }
    void push(q x){
        if (isFull())
            {
                cout << "The queue is full";
                exit(EXIT_FAILURE);
            }
            rear = (rear + 1) % capacity;
            arr[rear] = x;
            count++;
    }
    int size(){
        return count;
    }
    bool isEmpty(){
        return (size() == 0);
        }
    bool isFull(){
        return (size() == capacity);
    }
    
};
#endif /* queue_h */
