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
char*concatenar_a(char* a,char* b){
    int ta=tam_c(a);
	int t=ta+tam_c(b);
	char*aux= new char[t];
	for(int i=0;i<t;i++){
        if(i<ta){
            aux[i]=a[i];
        }
        else {
            aux[i]=b[i-ta];
        }
	}
	return aux;
}
char*concatenar_p(char* a,char* b){
    int ta=tam_c(a);
	int t=ta+tam_c(b);
	char*aux= new char[t];
	for(int i=0;i<t;i++){
        if(i<ta){
            *(aux+i)=*(a+i);
        }
        else {
            *(aux+i)=*(b+i-ta);
        }
	}
	return aux;
}

int main(){
	char*a=new char[5];
	char*b=new char[4];
	a="corta";
	b="uñas";
	cout<<"Cadena concatenadas: "<<concatenar_p(a,b)<<endl;
    cout<<"Cadena concatenadas: "<<concatenar_a(a,b)<<endl;

}
