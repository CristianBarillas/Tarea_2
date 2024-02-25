#include <iostream>
using namespace std;
main (){
	//and (y) &&
	// or (0) ||
	
	//puede entrar a mi clase si usted trae un lapiz y un lapicero
	//and (y) = el valor es verdadero si ambas son verdaderas
	//puede entrar a mi clase si usted trae un lapiz o un lapicero
	// or (0) = el valor es verdadero si por lo menos una es verdadera
	
	//puede entrar a mi clase si usted trae un lapiz o un lapicero y un cuaderno
	char lapiz,lapicero,cuaderno;
	cout<<"Trae Lapiz (s/n):";
	cin>>lapiz;
	cout<<"Trae Lapicero (s/n):";
	cin>>lapicero;
	cout<<"Trae Cuaderno (s/n):";
	cin>>cuaderno;
	if((lapiz=='s' || lapicero=='s')&& cuaderno == 's'){
		cout<<"Ingrese"<<endl;
		
		
	}else
		cout<<"Lo siento no puede ingresar"<<endl;
		
}
