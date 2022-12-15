/*********************************************************

        DATA STRUCTURE LAB CLASS
        LECTURE: 6
        PROGRAM: 1
        MATRIX MULTIPLICATION USING C++ LANGUAGE

**********************************************************/



#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int row_1, col_1, row_2, col_2, i, j, k, sum=0;
    int first[10][10], second[10][10], result[10][10];


    //input from user
    cout<<"Enter the number of rows and columns for 1st matrix (A): ";
    cin>>row_1>>col_1;

    cout<<"Enter the number of rows and columns for 2nd matrix (B): ";
    cin>>row_2>>col_2;


    //checking if the matrices meet the basic condition to multiplicate
    if(col_1 != row_2)
    {
        cout<<endl<<"The matrix are not multiplicative."<<endl;
    }


    //if the matrices meet the basic condition of multiplication
    //input from user
    else
    {
        //taking elements for first matrix
        cout<<endl<<"Enter the elements of matrix A: "<<endl;
        for(i=0; i<row_1; i++)
        {
            for(j=0; j<col_1; j++)
            {
                cout<<"A["<<i<<"]["<<j<<"]: ";
                cin>>first[i][j];
            }
        }

        //taking elements for second matrix
        cout<<endl<<"Enter the elements of matrix B: "<<endl;
        for(i=0; i<row_2; i++)
        {
            for(j=0; j<col_2; j++)
            {
                cout<<"B["<<i<<"]["<<j<<"]: ";
                cin>>second[i][j];
            }
        }


        //printing the first matrix
        cout<<endl<<"First matrix: "<<endl;
        for(i=0; i<row_1; i++)
        {
            for(j=0; j<col_1; j++)
            {
                cout<<"\t"<<first[i][j];
            }
            cout<<endl;
        }

        //printing the second matrix
        cout<<endl<<"Second matrix: "<<endl;
        for(i=0; i<row_2; i++)
        {
            for(j=0; j<col_2; j++)
            {
                cout<<"\t"<<second[i][j];
            }
            cout<<endl;
        }


        //multiplying the first(A) and second(B) matrix
        for(i=0; i<row_1; i++)
        {
            for(j=0; j<col_2; j++)
            {
                for(k=0; k<row_2; k++)     //this loop is used to terminate a summation process in a row element of result matrix
                //for(k=0; k<col_1; k++)   //same condition since col_1=row_2
                {
                    sum = sum + first[i][k] * second[k][j];
                }
                result[i][j] = sum;
                sum=0;
            }

        }


        //output of result matrix
        cout<<endl<<endl<<"Multiplied matrix of first and second matrix is: "<<endl;
        for(i=0; i<row_1; i++)
        {
            for(j=0; j<col_2; j++)
            {
                cout<<"\t"<<result[i][j];
            }
            cout<<endl;
        }
    }

    getch();

}
