/*************************************************************************
	> File Name: ex1_21.cpp
	> Author: 
	> Mail: 
	> Created Time: 日 12/18 13:10:49 2016
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item item1,item2;
    cin >> item1 >> item2;
    if(item1.isbn() == item2.isbn())
        cout << item1 + item2 << endl;
    else 
        cerr << "different isbn." << endl;
}
