#include <iostream>
#include<math.h>

using namespace std;

double XArray[100] = {}, YArray[100] = {}, Sx, Sy, Sxy, Sxy2, Sx2, Ax, Ay, m, c; //Declaring variables and initialising the arrays to zero
int i, n;

int main()
{

    INPUT:cout<<"How many points do you wish to plot?"<<endl;         // Taking in number of points to be plotted
    cin>>n;

    if(n>100)
    {
        goto INPUT;
    }


    for(i=0; i<n; i++)                                          //For Loop used to input x and y coordinate values for each point
    {
        cout<<"Enter x-coordinate for point "<<i+1<<endl;
        cin>>XArray[i];
        cout<<"Enter y-coordinate for point "<<i+1<<endl;
        cin>>YArray[i];

    }

    Sx = XArray[0];                                             //Setting the initial value for the Sum of X coordinates to the first value in the x array

     for(i=1; i<n; i++)                                         //For loop to sum all values of x coordinates in the array
    {
        Sx =  Sx + XArray[i];

    }


    Sy = YArray[0];                                             //Setting the initial value for the Sum of Y coordinates to the first value in the y array

     for(i=1; i<n; i++)                                         //For loop to sum all values of y coordinates in the array
    {
        Sy =  Sy + YArray[i];

    }

    Sxy = XArray[0]*YArray[0];

    for(i=1; i<n; i++)                                          //For loop to find sum of product XY for all input coordinates
    {
        Sxy = Sxy + XArray[i]*YArray[i];
    }


    Sx2 = XArray[0]*XArray[0];

    for(i=1; i<n; i++)                                          //For loop to find sum of x squared for all x coordinates
    {
        Sx2 = Sx2 + XArray[i]*XArray[i];

    }


    Ax = Sx/n;                                                  //Finding average value for x values
    Ay = Sy/n;                                                  //Finding average value for y values



    m = ((n * Sxy) - (Sx * Sy)) / ((n * Sx2) - (Sx * Sx));

    c = Ay - (m * Ax);

    cout<<" \n \nThe slope for the line of best fit for these data points is "<<m<<endl;
    cout<<"The intercept is "<<c<<endl;




    return 0;
}
