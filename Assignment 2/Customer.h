//
//  Customer.h
//  Assignment 2
//
//  Created by Mark Emad  on 08/10/2022.
//

#ifndef Customer_h
#define Customer_h
#include "Person.h"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
class customer : public Person{
private:
    string MechanicID;
    Appointment Appointment;
public:
    
    customer(){
        name=" ";
        Age=0;
        ID=" ";
        MechanicID="";
    }
    customer(string n, int a,string iD,string m_id){
        name=n;
        Age=a;
        ID=iD;
        MechanicID=m_id;
      //  Appointment=app;
    }
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
    struct Appointment get_appointment(){
        return Appointment;
    }
//    int get_appointment_hours(){
//        return Appointment.hours;}
    
    bool operator > (const struct Appointment &a1)
    {
        if (this->Appointment.hours>a1.hours)
            if (this->Appointment.mins>a1.mins)
                return true;
            else
                return false;
        else
            return false;
    }
    bool operator== (const struct Appointment &a1)
    {
        if (this->Appointment.hours==a1.hours)
            if (this->Appointment.mins==a1.mins)
                return true;
            else
                return false;
        else
            return false;
    }
    bool operator < (const struct Appointment &a1)
    {
     if (this->Appointment.hours<a1.hours)
         if (this->Appointment.mins<a1.mins)
             return true;
         else
             return false;
     else
         return false;
    }
    
};

#endif /* Customer_h */
