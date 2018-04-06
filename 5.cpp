#include <iostream>
using namespace std;

int tam_c(char*c){
	char*a;
	a=c;
	while(*c!='\0'){
		c++;
	}
	return c-a;
}
//USANDO ARREGLOS
int tam_cad(char*c){
	int tam=0;
	while(c[tam]!='\0'){
		tam++;
	}
	return tam;

}

int main(){
	char*Cad =new char[27];
	Cad="esta cadena es de tamaño 27";

	cout<<tam_cad(Cad)<<endl;
	cout<<tam_c(Cad)<<endl;
	return 0;
}