#include <iostream>
using namespace std;
int suma_recursiva(int A[6],int n){
	if(n==0){return 0;}
	return A[n-1] + suma_recursiva(A,--n);

}
int suma_iterativa(int A[6],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=A[i];

	}
	return sum;
}

int main(){
	int A[6]={5,4,6,7,8,9};
	cout<<"suma de elementos(recursivo): "<<suma_recursiva(A,6)<<endl;
	cout<<"suma de elementos(iterativo): "<<suma_recursiva(A,6)<<endl;
}