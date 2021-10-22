#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int n, x, otr=0, pol=0, nul=0;
    cin >> n;
 
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(x>0)
        pol++;
        else if(x<0)
        otr++;
        else
        nul++;
    }
    cout << "pol=" << pol << "; otr=" << otr <<"; nul=" << nul;
    return 0;
}