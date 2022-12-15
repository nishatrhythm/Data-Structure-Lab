/***********************************************************

    DATA STRUCTURE LAB CLASS
    LECTURE: 2
    PROGRAM: 1
    ROOT OF BINOMIAL EQUATION PROGRAM USING C++ LANGUAGE

***********************************************************/



#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{

    int a, b, c, x;
    double d, X, x1, x2;


    //input from user
    cout<<"Enter the value of a, b & c: ";
    cin>>a>>b>>c;


    //calculation
    d=(b*b)-(4*a*c);                 //determinant

    x1=((-b)+sqrt(d))/(2*a);         //if determinant>0
    x2=((-b)-sqrt(d))/(2*a);         //if determinant>0

    X=(-b)/(2*a);                    //if determinant=0


    //output regarding the condition

    cout<<showpoint<<fixed<<setprecision(3);
    //showpoint; output will show precision value
    //fixed; shows fixed value after precision
    //setprecison; counts how many value will show after precision

    if (d<0)
    {
        cout<<endl<<"The both of roots of the binomial equation are imaginary."<<endl;
    }

    else if (d==0)
    {
        cout<<endl<<"The both of roots of the binomial equation are real and equal."<<endl;
        cout<<"Roots are X1 = X2 = "<<X<<endl;
    }

    else
    {
        cout<<endl<<"The roots of the binomial equation are real but different."<<endl;
        cout<<"Roots are X1 = "<<x1<<" and X2 = "<<x2<<" respectively."<<endl;
    }

    getch();

}
