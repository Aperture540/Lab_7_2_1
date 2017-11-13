/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agendron
 *
 * Created on November 2, 2017, 1:22 PM
 */

#include <iostream>

using namespace std;
//add your own exception class here 
//add functions code here
float square_area(float a) {
    if(a<0) {
        throw string("Your input is not valid. The area can't be negative.");
    }
    else {
        return a*a;
    }
}

float rectangle_area(float a, float b) {
        if(a<0 || b<0) {
        throw string("Your input is not valid. The area can't be negative.");
    }
    else {
        return a*b;
    }
}

int main(void) {
    float a, b, r; 
    cin >> a;
    cin >> b;
    try
    {
        float rsquare = square_area(a);
        float rrectangle = rectangle_area(a,b);
        cout << rsquare << endl << rrectangle << endl;
    }
    //add a suitable catch block here
    catch(string &exc) {
        cout<<exc<<endl;
        return 0;
    }
    return 0;
}


