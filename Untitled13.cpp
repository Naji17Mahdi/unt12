#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int f ( int  , int  , int  );

main()
{
	int x , y , z ;
	
	cout<<"Please enter x : "<<endl;
	cin>>x;
	
	cout<<"Please enter y : "<<endl;
	cin>>y;
	
	cout<<"Please enter z : "<<endl;
	cin>>z;	
	
	cout << f ( x , y , z );
}

int f ( int a , int b , int c )
{
	int z;
	
	z = 2 * a + 3 * ( b + c );
	
	return z;
	
}
