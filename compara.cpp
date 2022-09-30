//Creado por: Jandry Joseph Martinez Escobar
#include <iostream>
using namespace std;
int main()
{
	float a,b;
	cout<<"Ingrese a:"; cin>>a;
	cout<<"Ingrese b:"; cin>>b;
	if(a==b){
	cout<<"El valor de a:" <<a<< " es igual al valor de b:" <<b<<endl;

	}else{
	if(a<b){
	cout<<"El valor de a:" <<a<< " es menor a el valor de b:" <<b<<endl;


	}else{

	cout<<"El valor de b:" <<b<< " es menor al valor de a:" <<a<<endl;
	}

	}
	return 0;
}
