#include <iostream>
using namespace std;
void p_p_referencia(int&x){
	x=x*2;
	cout<<"Paso por referencia: "<<x<<endl;
}
void p_p_valor(int x){
	x=x*2;
	cout<<"Paso por valor: "<<x<<endl;
}

int main(){
	int x=100;
	cout<<"Variable orignal: "<<x<<endl;
	p_p_valor(x);
	cout<<"Variable orignal: "<<x<<endl;
	p_p_referencia(x);
	cout<<"Variable orignal: "<<x<<endl;

}

