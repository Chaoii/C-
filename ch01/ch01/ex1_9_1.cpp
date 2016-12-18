#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int sum(int lo, int hi)
{
        int sum = 0;
        while (lo < hi) sum += lo++;
        return sum;

}

int main()
{
        cout << "sum is: " << sum(50, 100+1) <<endl;
        return 0;

}
