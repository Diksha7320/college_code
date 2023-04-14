#include <iostream>
using namespace std;

class Complex
{
    private:
    int real,imag;

    public:
    Complex()
    {
        real=0;
        imag=0;
    }

    void enter()
    {
        cout<<"Enter real value:";
        cin>>real;
        cout<<"Enter imag value:";
        cin>>imag;
    }

    void output()
    {
        if (imag<0)
        {
            cout<<real<<imag<<"i"<<endl;

        }else
        {
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
    }

    Complex operator +(const Complex& c2){
        Complex add;
        add.real=real+c2.real;
        add.imag=imag+c2.imag;
        return add;
    }
    Complex operator -(const Complex& c2){
        Complex subt;
        subt.real=real-c2.real;
        subt.imag=imag-c2.imag;
        return subt;
    }
    Complex operator *(const Complex& c2){
        Complex mult;
        mult.real=real*c2.real;
        mult.imag=imag*c2.imag;
        return mult;
    }
};


int main()
{   
    Complex c1,c2;
    Complex ans_add, ans_subt,ans_mul;
    int choice;
    while  (true){
    
        cout<<"1.Add"<<endl;
        cout<<"2.Subtract"<<endl;
        cout<<"3.Multiply"<<endl;
        cout<<"Enter choice:";
        cin>>choice;
        switch (choice)
        {
        case 1:
            c1.enter();
            c2.enter();
            ans_add=c1+c2;
            ans_add.output();
            break;

        case 2:
            c1.enter();
            c2.enter();
            ans_subt=c1-c2;
            ans_subt.output();
            break;
        case 3:
            c1.enter();
            c2.enter();
            ans_mul=c1*c2;
            ans_mul.output();
            break;
        case 4:
            break;
        }
        cout<<"--------------------------------------------"<<endl;
    }
    
    return 0;
}