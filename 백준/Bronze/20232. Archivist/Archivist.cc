#include <iostream>
using namespace std;


int main() {
    int year;
    cin >> year;
    if (year == 1996 || year == 1997 || year == 2000 ||
        year == 2007 || year == 2008 || year == 2013 || year == 2018) {
        cout << "SPbSU";
    }
    else if (year == 2006) {
        cout << "PetrSU, ITMO";
    }
    else {
        cout << "ITMO";
    }
}