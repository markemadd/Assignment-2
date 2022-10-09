//
//  main.cpp
//  Assignment 2
//
//  Created by Mark Emad  on 06/10/2022.
//
#include "Person.h"
#include "Customer.h"
#include "Mechanic.h"
#include "queue.h"
#include <iostream>
using namespace std;
int main() {
    Person P;
    customer c;
    customer c1, c2;
    mechanic m, m1, m2;
    int num_mechanics, num_customers;
    int num_appointments;
    string customer_name,mechanic_name;
    string customer_id;
    int age,mechanic_age;
    int hours, mins;
    string mechanic_id;
    customer app[num_customers];
    mechanic app1[num_appointments];
   
    
    cout<<" Enter information: number of customers, number of mecahnics and number of appointments."<<endl;
    cin>>num_customers>>num_mechanics>>num_appointments;
    for(int i=0; i<num_customers; i++){ //gets data of the users
        cout<<" Enter information of customers: customer name, customer id, customers age, hours, mins"<<endl;
        cin>>customer_name>>customer_id>>age>>hours>>mins;
        customer(customer_name,age,customer_id,mechanic_id);
        c.set_appointment(hours, mins);
        c1.set_appointment(hours, mins);
        c2.set_appointment(hours, mins);
        app[0]=c;
        app[1]=c1;
        app[2]=c2;
        }
    app1 -> get_arr();
    for(int i=0; i<num_mechanics;i++){//gets data of mecahnics
        cout<<" Enter information of mechanic:mechanic's id,name,age"<<endl;
        cin>>mechanic_id>>mechanic_name>>mechanic_age;
        mechanic(mechanic_name,mechanic_age,mechanic_id,num_appointments);
        
    }

    for(int i=0; i<num_mechanics; i++){
        if(m.isAvailable(app[i].get_appointment(), app1[])==false)
            i++;
        else if (m.isAvailable(num_appointments, app[], c)==true)
            cout<<c.get_name()<<" should be assigned to "<<m.get_name()<< " at "<< c.get_appointment().hours<<" : "<<c.get_appointment().mins<<endl;
            else cout<<" No mechanic was found available"<<endl;
        
        queue<customer > q(3);
            q.push(c1);
            q.push(c2);
            q.push(c);
        
}
    
 // add a function that sees which appointement comes first and insert them in a queue

// print the information of the customer
    
        
    
    return 0;
}
