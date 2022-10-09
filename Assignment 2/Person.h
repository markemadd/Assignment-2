//
//  Person.h
//  Assignment 2
//
//  Created by Mark Emad  on 06/10/2022.
//

#include <iostream>
#include <stdio.h>
#ifndef Person_h
#define Person_h
using namespace std;
class Person{
protected:
    string name;
    string ID;
    int Age;
public:
    Person(){ //constructor
        name= " ";
        ID=" ";
        Age=0;
    }
    void set_name(string N){
        name=N;
    }
    string get_name(){
        return name;
    }
    void set_ID(string Id){
        ID=Id;
    }
    string get_ID(){
        return ID;
    }
    void set_age(int a){
        Age=a;
    }
    int get_age(){
        return Age;
    }
    void printInfo(){ //prints info about the user
        cout<<"The person's name is: "<<name<<" , his ID is: "<<ID<<" age: "<<Age<<endl;
    }
    struct Appointment{
        int hours;
        int mins;
        Appointment(){
            hours = 0;
            mins = 0;
        }
    };
};

/*class customer : public Person{
private:
    string MechanicID;
    Appointment Appointment;
public:
    void set_mechanic(string m){
        MechanicID=m;
    }
    string get_Mechanic(){
        return MechanicID;
    }
    void set_appointment(int h, int min){
        Appointment.hours=h;
        Appointment.mins=min;
    }
    int get_appointment_mins(){
        return Appointment.mins;
    }
    int get_appointment_hours(){
        return Appointment.hours;
    }
    bool operator > (const customer &c1)
    {
        if (this->Appointment.hours>c1.Appointment.hours)
            if (this->Appointment.mins>c1.Appointment.mins)
                return true;
            else
                return false;
        else
            return false;
    }
    bool operator== (const customer &c1)
    {
        if (this->Appointment.hours==c1.Appointment.hours)
            if (this->Appointment.mins==c1.Appointment.mins)
                return true;
            else
                return false;
        else
            return false;
    }
    bool operator < (const customer &c1)
    {
     if (this->Appointment.hours<c1.Appointment.hours)
         if (this->Appointment.mins<c1.Appointment.mins)
             return true;
         else
             return false;
     else
         return false;
    }
    
};
class mechanic: public Person{
private:
    int counter;
    Appointment *booked= new Appointment[counter];
public:
   bool isAvailable(int counter, Appointment booked[], Appointment user_app){
       for (int i=0; i<counter; i++){
           if(user_app.Appointment == (booked+i) ){
               return false;
               
                  }
       }

}
};
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
         
           // cout << "Popping " << arr[front] << endl;
         
            front = (front + 1) % capacity;
            count--;
    }
    void push(q x){
        if (isFull())
            {
                cout << "The queue is full";
                exit(EXIT_FAILURE);
            }
         
           // cout << "Pushing " << x << endl;
         
            rear = (rear + 1) % capacity;
            arr[rear] = x;
            count++;
    }
// X peek();
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
*/
#endif /* Person_h */
