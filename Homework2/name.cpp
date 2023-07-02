//
//  main.cpp
//  Homework2
//
//  Created by Sean Belingheri on 9/8/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    string first, middle, last, whole;
    cout<<"Enter your full name: ";
    cin>>first>>middle>>last;
    whole = first + middle + last;
    cout<<"This name has "<<whole.length()<<" letters."<<endl;
    cout<<first.substr(0, 1)<<middle.substr(0, 1)<<last.substr(0, 1)<<endl;
    cout<<first.substr((first.length()+1)/2)<<middle.substr((middle.length()+1)/2)<<last.substr((last.length()+1)/2)<<endl;
}
