#include <iostream>
using namespace std;
main (){
	int n1=0,n2=0,n3=0,promedio=0;
	cout<<"Ingrese nota 1:";
	cin>>n1;
	cout<<"Ingrese nota 2:";
	cin>>n2;
	cout<<"Ingrese nota 3:";
	cin>>n3;
	promedio=(n1+n2+n3)/3;
	cout<<promedio<<endl;
	
	if(promedio>=61){
		cout<<"Aprobo"<<endl;
		
	}else{
		cout<<"Reprobo"<<endl;
	}
	
		
	}
	
