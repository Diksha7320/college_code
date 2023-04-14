//Assignment 1 
// Implement a class Complex which represents the Complex Number data type. Implement the 
// following
// 1. Constructor (including a default constructor which creates the complex number 0+0i).
// 2. Overload operator+ to add two complex numbers.
// 3. Overload operator* to multiply two complex numbers.
// 4. Overload operators << and >> to print and read Complex Numbers.

#include<iostream>
using namespace std;

class complex {
    public:
        int real;
        int imagi;

    complex()
    {
        real=0;
        imagi=0;
    }


    void values()
    {
        cout<<"Enter real value";
        cin>>real;
        cout<<"Enter imaginary values";
        cin>>imagi;

    }

    void display()
    {
        if (imagi<0)
        {
            cout<<real<<imagi<<"i"<<endl;

        }

        else
        {
            cout<<real<<"+"<<imagi<<"i"<<endl;
        }


        
    }


   complex operator  +(const complex& c2)
   {
    complex add;
    add.real=real+c2.real;
    add.imagi=imagi+c2.imagi;
    return add;
   }

   complex operator  -(const complex& c2)
   {
    complex sub;
    sub.real=real-c2.real;
    sub.imagi=imagi-c2.imagi;
    return sub;
   }
    
    complex operator  *(const complex& c2)
    {
    complex prod;
    prod.real=(real*(c2.real))-(imagi*(c2.imagi));
    prod.imagi=(real*(c2.imagi))+(imagi*(c2.real));

    
    return prod;
    }
    
};

int main()
{
    complex c1,c2,a,s,p;
    int choice;

    while(true)
    {
        cout<<"\n 1. Add"<<endl;
        cout<<"\n 2. Subtract"<<endl;
        cout<<"\n 3. Product"<<endl;


        cout<<"Enter choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
                c1.values();
                c2.values();
                a=c1+c2;
                a.display();
                break;

        case 2:
                c1.values();
                c2.values();
                s=c1-c2;
                s.display();
                break;

        case 3:
                c1.values();
                c2.values();
                p=c1*c2;
                p.display();
                break;
        
        default:
                cout<<"Invalid choice";
                break;
        }
    }
return 0;

}