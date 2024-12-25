/*ASSIGNMENT NO 4
Name: Abdullah Bin Altaf
Rollno:4635
Dept:CS(1st sem)*/
#include <iostream>
using namespace std;
int main() {
	int a[3][3],b[3][3],i,j,sum[3][3],prod[3][3],sub[3][3];
	float div[3][3];
	cout<<"enter elements of 1st matrix:"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	cout<<"1st matrix becomes:"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"enter elements of 2nd matrix:"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>b[i][j];
		}
	}
	cout<<"2nd matrix becomes:"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"sum of matrices:"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<sum[i][j]<<"\t";
		}
		cout<<endl;
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			prod[i][j]=a[i][j]*b[i][j];
		}
	}
	cout<<"product of matrices:"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<prod[i][j]<<"\t";
		}
		cout<<endl;
	}
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			div[i][j]=a[i][j]/b[i][j];
		}
	}
	cout<<"division of matrices:"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<div[i][j]<<"\t";
		}
		cout<<endl;
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sub[i][j]=a[i][j]-b[i][j];
		}
	}
	cout<<"subtraction of matrices:"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<sub[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
