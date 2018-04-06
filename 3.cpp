#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
void mostrar(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<"-";
	}
	cout<<endl;
}

void insert_s(int A[], int n){
	int aux;
	for(int i=1;i<n;i++){
		aux=A[i];
		for(int j=i-1;j>=0 && A[j]>aux;j--){
			A[j+1]=A[j];
			A[j]=aux;
		}
	}

}


void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}


void quickSort(int arr[], int left, int right) {

      int i = left, j = right;

      int tmp;

      int pivot = arr[(left + right) / 2];

      while (i <= j) {

            while (arr[i] < pivot)

                  i++;

            while (arr[j] > pivot)

                  j--;

            if (i <= j) {

                  tmp = arr[i];

                  arr[i] = arr[j];

                  arr[j] = tmp;

                  i++;

                  j--;

            }

      };
      if (left < j)

            quickSort(arr, left, j);

      if (i < right)

            quickSort(arr, i, right);

}


int main(){
	int A[5]={5,4,3,2,1};
	mostrar(A,5);
	insert_s(A,5);
	mostrar(A,5);
	int B[5]={5,4,3,2,1};
	mostrar(B,5);
	mergeSort(B,0,4);
	mostrar(B,5);
	int C[5]={5,4,3,2,1};
	mostrar(C,5);
	quickSort(C,0,4);
	mostrar(C,5);

}
