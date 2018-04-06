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
bool Palindromo(char*cad){
	int n=tam_c(cad);
	for(int i=0;i<n;i++){
		if(cad[i]!=cad[n-i-1]){
			return false;}
	}
	return true;

}


int main(){
	char*cad = new char[15];
	cad="anitalavalatina";
	if(Palindromo(cad)==1){
		cout<<"si es Palindromo"<<endl;}
	else{
		cout<<"no es Palindromo"<<endl;}
	



}