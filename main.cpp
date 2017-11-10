/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: aparsons
 *
 * Created on November 6, 2017, 12:55 PM
 */

#include <iostream>
#include <regex>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    string sourceIP;
    string destinationIP;
    cin >> sourceIP;
    cin >> destinationIP;
    
    regex pattern("[0-255]{3}.[0-225]{3}.[0-255]{3}.[0-255]{2}");
    
    try
    {
        if(regex_match(destinationIP,pattern))
        {
            if(regex_match(sourceIP,pattern))
            {
                cout<<"Your IP is vaild."<<endl;
            }
            else
            {
                throw string ("Your source IP is invalid.");
            }
        }
        else
        {
            throw string ("Your destination IP is invaild.");
        }
    }
    catch(string & e)
    {
      cout<<"Invalid IP Header - "<<e<<endl;  
    }
}

