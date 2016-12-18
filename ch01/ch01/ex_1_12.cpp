/*************************************************************************
	> File Name: ex_1_12.cpp
	> Author: 
	> Mail: 
	> Created Time: 日 12/18 12:30:53 2016
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    for(int i = -100; i<= 100;i++) //在这个地方i++和++i得出来的结果是一样的
    sum += i;
    cout << sum << endl;
}
