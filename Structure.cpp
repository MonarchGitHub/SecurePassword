#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <time.h>
#include <string>
using namespace std;

int initial()
{

    std::string integer = {"123456789"};
    std::string special = {"!@#$%^&*()"};
    std::string uppercasealpha = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string lowercasealpha = {"abcdefghijklmnopqrstuvwxyz"};
    int singledigit;
    srand(time(NULL));
    singledigit = rand() % 10;
    cout << integer.at(singledigit) << endl;
    cout << special.at(singledigit) << endl;
    cout << uppercasealpha.at(singledigit) << endl;
    cout << lowercasealpha.at(singledigit) << endl;
    cout<<singledigit<<endl;


//random number in a given range
    int usinglealpha = (rand() %
           (26 - 1 + 1)) + 1;

           cout<<usinglealpha<<endl;

    int lsinglealpha = (rand() %
           (26 - 1 + 1)) + 1;

           cout<<lsinglealpha<<endl;
    // string thread = to_string(hash);

    // cout << hash;
    return 0;
}



int main()
{
    initial();

    // srand(time(0));

    // for (int i = 0; i < 4; i++)
    //     cout << rand() << endl;
    // printf(" %d ", rand());

    return 0;
}