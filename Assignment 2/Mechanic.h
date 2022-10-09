//
//  Mechanic.h
//  Assignment 2
//
//  Created by Mark Emad  on 08/10/2022.
//

#ifndef Mechanic_h
#define Mechanic_h
#include <iostream>
#include <stdio.h>
#include "Person.h"
#include "Customer.h"
using namespace std;

class mechanic: public Person{
private:
    int counter;
    Appointment *booked;
    //= new Appointment[counter];
public:
    mechanic(){
        name=" ";
        Age=0;
        ID=" ";
    }
    mechanic(string n, int a,string iD, int c){
        name=n;
        Age=a;
        ID=iD;
        counter = c;
        booked = new Appointment[c];
    }
    Appointment get_arr(){
        return *booked;
    }
    void set_counter(int c){// setter for counter
        counter=c;
    }
    int get_counter(){// getter for counter
        return counter;
    }
    void fill_arr(Appointment *booked){
        for(int i=1; i<24;i++){
            booked[i].hours=i;
        }
        for(int i=0;i<60;i++){
            booked[i].mins=i;
        }
    }
   
   bool isAvailable(Appointment app1, Appointment user_app){// function to check if the mechani is available at this time
       if(app1.hours == user_app.hours && app1.mins==user_app.mins)
           return false;
        return true;
   }
   
};

#endif /* Mechanic_h */
