//
//  temp.cpp
//  Homework2
//
//  Created by Sean Belingheri on 9/8/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    double temp;
    cout<<"Enter a temperature in F: ";
    cin>>temp;
    cout<<"Temperature in C is "<<(temp - 32)*(5/9.0)<<endl;
}
