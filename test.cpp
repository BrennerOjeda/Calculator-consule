# include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265

int main() {
 
    vector<pair<int,int>> v;
    int x1, y1;
    int x2, y2;
    int x3, y3; 
    int deltax = 0, deltay = 0;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    if (x1 == x2)
        deltay = (y1 - y2);
    else 
        deltay = (y1 - y3);
    if (y1 == y2)
        deltax = (x1 - y2);
    else
        deltax = (x1 - x3);
    cout << deltax << " " << deltay << endl;
    int x4 = x1 + deltax;
    int y4 = y1 + deltay;
    cout << x4 << " " << y4 << endl;
    
    // Division operator
    int div = x1 / x2;
    return 0;
}
