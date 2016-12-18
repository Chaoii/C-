/*************************************************************************
	> File Name: ex1_16.cpp
	> Author: 
	> Mail: 
	> Created Time: 日 12/18 12:36:19 2016
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int val;
    int sum = 0;
   /* while(cin >> val)
    {
       sum += val;
    }
    */
    for (val; cin >> val; sum +=val);
    cout << sum << endl;
}
