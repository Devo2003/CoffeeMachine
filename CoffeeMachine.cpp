#include <cstdio>
#include <cstdlib>
#include <vector>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int Cups_of_Water = 0;
    int grounds = 0;
    
    
    std::vector<int> amount_of_orders;

    stringstream convert; //creates an object to input/output a string
    
    //ifstream: Stream class to read from files
    std::ifstream file_name("input.txt");
   
   int num;
    while (file_name >> num)
    {
        amount_of_orders.push_back(num);
    }
    file_name.close();



    //for every index of the vector: 40 numbers

    for (int i = 0; i < amount_of_orders.size(); i++)
    {
        

        Cups_of_Water += 1 * amount_of_orders[i];
        grounds += 2 * amount_of_orders[i];
        
        int day = i+1;
        cout << "Day: "<< day << " | Orders: " << amount_of_orders[i]<< endl;
        cout << Cups_of_Water << " cup of water" << endl;
        cout << grounds << " oz of coffee grounds" << endl;
        cout << "---------------------------------" << endl;

        //resets

        Cups_of_Water = 0;
        grounds = 0;
        
    }
}

