#include <iostream>
using namespace std;

class A{
public:
    char s1[50],s2[100],s3[50];
    int i,j,k,c;
    void getdata()
    {
        cout << "\nSTRING INPUT";
        cout << "\nEnter the string : ";
        cin.getline(s1,100);
    }
    void strln()
    {
        cout<<"\nSTRING LENGTH";
        i=0;
        while(s1[i] != '\0')
            i++;
        cout << "\nThe length of the string is " << i <<endl;

    }
    void strcpy()
    {
        cout<<"\nSTRING COPY";
        for(i=0;s1[i] != '\0';i++)
            s3[i] = s1[i];
        cout <<"\nThe copied string is " <<s3;
        cout<<"\n";
    }
    void strrev()
    {
        cout<<"\nSTRING REVERSE";
        c=0;
        cout <<"\nEnter the string : ";
        cin.getline(s2,100);
        for(j=0;s2[j]!='\0';j++)
            c++;
        cout<<"\nThe reversed string is ";
        for(k=c-1;k>=0;k--)
            cout << s2[k];
        cout<<"\n";
    }
};

int main()
{
    cout << "\nString Operations" << endl;
    A o;
    o.getdata();
    o.strln();
    o.strcpy();
    o.strrev();
    return 0;
}
