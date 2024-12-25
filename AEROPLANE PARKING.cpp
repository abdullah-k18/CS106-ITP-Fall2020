#include<iostream>
using namespace std;
int main()
{
	int n=3;
	int parkingLocation[n];
	int numOPTCBP=3; //numOPTCBP means "Number Of Planes That Can Be Parked".
	for(int i=0; i>=0; i++)
	{
		bool flag=true;
		cout<<"The Flight Is Ready To Land. Is Parking Available?";
		if(i<=numOPTCBP)
		{
			parkingLocation[i]=i+1;
			cout<<" Yes, You Can Park The Plane At Parking Location "<<parkingLocation[i]<<". ";
			bool flag=1;
		}
		else
		{
			cout<<" The Parking Is Not Available On The Airport. You Can Park It On Another Airport.";
		}
	}
	return 0;
	system("pause");
}
