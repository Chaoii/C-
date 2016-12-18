/*************************************************************************
	> File Name: 1_22.cpp
	> Author: 
	> Mail: 
	> Created Time: 日 12/18 13:15:04 2016
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item total;
    if(cin >> total)
    {
        Sales_item trans;
        while(cin >> trans)
        {
            if(total.isbn() == trans.isbn())
                total += trans;
            else
            {
                cout << total << endl;
                total = trans;
            }
        }
    }
    else
    {
        cerr << "No data?la!" << endl;
        return -1;
    }
    return 0;
}
