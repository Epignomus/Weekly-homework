#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n!=-1)
    {
        if(n>0 && n%5==0) cout << n/5 << endl;
        else cout << "-1" << endl;
    }
    cout << "bye";
    return 0;
}
