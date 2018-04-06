#include <iostream>

using namespace std;
void mostrar(int M[][2],int f,int c){
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
}

void mul_ma(int A[][3],int B[][2],int C[][2],int f1,int c2,int m){
    for(int i=0;i<f1;i++){
        for(int j=0;j<c2;j++){
            C[i][j]=0;
            for(int k=0;k<m;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    mostrar(C,2,2);
}
int main(){
	int Ma[2][3]={{1,0,1},{0,1,2}};
	int Mb[3][2]={{3,5},{-1,0},{2,-1}};
	int Mc[2][2];
	mul_ma(Ma,Mb,Mc,2,2,3);

}
