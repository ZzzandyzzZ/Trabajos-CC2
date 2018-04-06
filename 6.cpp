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

int main(){
	char*a =new char[5];
	char*b =new char[7];
	a="perro";
	b="gatitos";
	cout<<copiar(a,b)<<endl;

}
