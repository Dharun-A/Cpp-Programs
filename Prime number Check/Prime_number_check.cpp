#include <iostream>
using namespace std;

class A
{
public:
    int n;
    int input()
    {
        cout<<"\nCheck a number is Prime or not\n";
        cout<<"\nEnter the number : ";
        cin>>n;
        return n;
    }
    bool isPrime(int n)
    {
        bool flag = true;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag = false;
                break;
            }
        }
        return flag;
    }
};

int main()
{
    A a;
    int number = a.input();
    if(a.isPrime(number))
        cout<<"\nPrime";
    else
        cout<<"\nNot Prime";
    cout<<"\n";
    return 0;
}
