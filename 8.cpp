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

char*invertir(char*a){
	int x=tam_c(a);
	char*aux = new char(x);
	for (int i = x;i>=0;i--){
		*(aux+(x-i-1))=*(a+i);
		
	}
	return aux;
}
char*inv(char*a){
	int tam=tam_c(a);
	char*aux=a;
	for(int i=tam;i>=0;i--){
		aux[tam-i-1]=a[i];
	}
	return aux;

}

int main(){
	char*a =new char[6] ;
	a="abuelo";
	cout<<invertir(a)<<endl;
	a="padre";
	cout<<invertir(a)<<endl;

}