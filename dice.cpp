#include <iostream>
#include <vector>
#include <string>
#include "xdy.cpp"

using namespace std;

int main(){
    bool m = true;
    int d = 3, n = 1;

    cout << "You Rolled " << n << "d" << d << " and got a " << xdy(n,d) << endl;
}