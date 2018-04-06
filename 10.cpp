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
long potencia(int a,int b){
	int aux=a;
	if(b==0){return 1;}
	for(int i=0;i<b-1;i++){
		a=a*aux;
	}
	return a;

}

double cad_a_int(char*cad){
	double tam=tam_c(cad);
	double a=0;
	int aux=0;
	for(int i=tam-1;i>=0;i--){
		if(cad[i]=='.'){
			a=a/potencia(10,tam-i-1);
			aux=tam-i;
			}
		else{
		double num = potencia(10,tam-i-1-aux)*(cad[i] -'0');
		a=a+num;}

	}
	return a;
}


int main(){
	char*cad = new char[7];
	cad="12345.6";
	cout<<cad_a_int(cad)<<endl;
	cad="123456";
	cout<<cad_a_int(cad)<<endl;

}
