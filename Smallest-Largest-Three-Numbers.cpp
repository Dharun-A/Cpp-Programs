#include <iostream>

using namespace std;

class deter{
    int x,y,z,maxi,max1,mini,min1;
public:
    void input()
    {
        cout <<"\n\tSMALLEST AND LARGEST AMONG THREE NUMBERS\n";
        cout << "\nEnter the three numbers : ";
        cin >> x >> y >> z;
    }

    void maximum()
    {
        max1 = (x>y) ? x:y;
        maxi = (max1>z) ? max1:z;
    }
    void minimum()
    {
        min1 = (x<y) ? x:y;
        mini = (min1<z) ? min1:z;
    }
    void display()
    {
        maximum();
        minimum();
        cout << "\nThe largest number is : " << maxi << "\n";
        cout << "\nThe smallest number is : " << mini << "\n";
    }
};
int main()
{
    deter m;
    m.input();
    m.display();
    return 0;
}
