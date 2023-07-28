#include <iostream>
#include <math.h>
using namespace std;
 
int snt(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x%i == 0)
            return 0;
    return 1;
}
 
int main()
{
    int n;
    cout<<"Nhap n:";cin >> n;
    cout <<"Cac so nguyen to nho hon "<<n<<": "<<endl;
    for (int i = 1; i < n; i++){
        if (snt(i)==1)
            cout<<i <<endl;
	}
}
