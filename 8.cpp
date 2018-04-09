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

char*inv_a(char*a){
	int x=tam_c(a);
	char*aux =a;

	a=a+x-1;
	while(x>=0){
		x--;
		*aux=*a;
		a--;aux++;
	}

	return aux;
}

char*inv_p(char*a){
	int tam=tam_c(a);
	char*aux=new char[tam];
	aux+=tam;
	while(*a!='\0'){
        char tem=*a;
        *aux=tem;
        //cout<<aux<<endl;
        //cout<<"--"<<a<<endl;
        a++;aux--;
	}
	aux++;
	return aux;

}

int main(){

	char*a ="abuelo";
	cout<<inv_p(a)<<endl;
}
