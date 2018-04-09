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

char*copiar(char*a,char*b){
    int tam=tam_c(b);
	char*c=new char[tam];
	for(int i=0;i<tam;i++){
		*(c+i)=*(b+i);
	}
	return c;
}
char* copiar_p(char*a,char*b){
    a =new char[tam_c(b)];
    while(*b!='\0'){
        char aux=*b;
        *a=aux;
        a++;b++;
    }
    a-=tam;
    return a;
}

int main(){

	char*a ="perro";
	char*b ="gatitos";
	//cout<<copiar(a,b)<<endl;
	cout<<copiar_p(a,b)<<endl;
}
