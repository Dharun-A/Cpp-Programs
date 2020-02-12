#include <iostream>

using namespace std;

int main() {
	int N,SH,SM,EH,EM,i=0;
	cin >> N;
	for(i=0;i<N;i++)
	{
	    cin >> SH >> SM >> EH >> EM;
	    if(SM>EM)
	    {
	        cout<< (EH-SH)-1 <<" "<< (60-SM)+EM << "\n";
	    }
	    else
	    {
	        cout<< (EH-SH) <<" "<< (EM-SM)<<"\n";
	    }
	}
}
