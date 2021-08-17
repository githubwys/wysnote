#include <iostream>
using namespace std;

double a[] = {4, 2, 3, 4, 5, 6, 7, 8, 9};
// int b[10];
// int *p = b;
int *p=new int[10];
double *aptr = a;
double *testptr(int i)
{
    //cout <<"resultf = "<< *aptr << endl;
    return aptr + p[2]*3 +i;
}
int main()
{
    for (int i = 0; i < 11; i++)
    {
        *p = i;
        cout << "*p = " << *(p) << endl;
        cout << "*p = " << p << endl;
        *p++;
    }
    cout << "*p = " << *(p - 1) << endl;
    cout << "*p = " << *(p) << endl;
    // p = &b[0];
    p = &p[-11];
    cout << "p[0] = " << p[1] << endl;
    cout << "p[1] = " << p[1]*2 << endl;
    cout << "p[2] = " << p[2] << endl;
    p[3]=5;
    cout << "p[3] = " << p[0]+p[3]*2+p[-1] << endl;
    cout << "p+2 = " << p + 2 << endl;
    cout << "resultf = " << *aptr << endl;
    cout << "resultf = " << aptr << endl;
    cout << "resultf = " << aptr+ p[2] << endl;
    cout << "aptr+p[2] = " << *(aptr+ p[2]) << endl;
    cout << "result = " << &a[0] << endl;
    cout << "result = " << *testptr(1) << endl;
}