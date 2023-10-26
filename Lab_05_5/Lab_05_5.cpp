#include <iostream>
#include <cmath>

using namespace std;

int k;
int n;
int d = 0;

int Bin(int k, int n, int level, int &depth)
{
    if (level > depth)
        depth = level;
    cout << " level = " << level << endl;
    if (k == n || k == 0)
        return 1;
    if (n > 0)
        return Bin(k - 1, n - 1, level +1, depth) + Bin(k, n - 1, level +1, depth);
}

int main()
{
    int depth;
    depth = 0;

    cout << "k = "; cin >> k;
    cout << "n = "; cin >> n; cout << endl;
    cout << endl << "   Bin = " << Bin(k, n, 1, depth) << endl;
    cout << "   recursive depth = " << depth << endl;  
}
