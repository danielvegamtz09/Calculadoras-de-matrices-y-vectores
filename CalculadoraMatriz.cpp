/*
Vega Martinez Daniel
1AV6
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <iostream>


using namespace std;

void imprimir_menu ();
void leer_opcion(int &opt);
void scanVector(int *ptr, int size);


void printMatrix(int *ptr,int size1, int size2);
void printMatrix(int arr[3][3]);
void sumaMatrix(int *prtC, int *ptr2b, int *ptr2a, int d);
void restaMatrix(int *prtC, int *ptr2b, int *ptr2a, int d);
void multMatrix(int *ptr, int *ptr2b, int *ptr2, int &ss);
void Fac(int *ptr, int *ptr2b, int f, int c, int &o, int &ret);

int main(){

int opt, o = 3;
float n,e;
char rep;

int a[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
int b[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
int c[3][3] = {{0,0,0},{0,0,0},{0,0,0}};

int *ptrC = &c[0][0];;
int *ptr2a = &a[0][0];
int *ptr2b = &b[0][0];

printf("\n VECTOR 1\n");
scanVector(ptr2a,3);

printf("\n Vector 2\n");
scanVector(ptr2b,3);

printf(" \n MATRIZ 1 \n");
printMatrix(ptr2a,3,3);

printf(" \n MATRIZ 2 \n");
printMatrix(ptr2b,3,3);

do{

imprimir_menu ();
leer_opcion(opt);

switch(opt){

case 1:

printf(" \n SUMA DE MATRIZ \n");
sumaMatrix(ptrC, ptr2b, ptr2a,3);
break;

case 2:

printf(" \n RESTA DE MATRIZ  \n");
restaMatrix(ptrC, ptr2b, ptr2a,3);
break;

case 3:

printf(" \n MULTIPLIACION DE MATRIZ \n");
multMatrix(ptr2a, ptr2b, ptrC,o);
break; default: printf("\n ----OPCION INCORRECTA----");
break;
}

printf("\n ----QUIERE REALIZAR OTRA OPERACION ?---- S N \n");
rep = getch();
}
while((rep=='S') || (rep=='s'));

}

void scanVector(int *ptr,int size){

int valor;
for (int i=0; i<size; i++){
for(int j = 0; j < size ; j++){

printf("[%d][%d]: \n",i,j);
scanf("%d",&valor);
*(ptr+j+(i*size)) = valor;

}
}
}

void printMatrix(int *ptr,int size1, int size2){
for(int i = 0; i < size1 ; i++){
for(int j = 0; j < size2 ; j++){
printf("%d   ",*(ptr+j+(i*size1)));
}
printf("\n");
}
}

void printMatrix(int arr[3][3]){
for(int i = 0; i < 3; i++){
for(int j = 0; j < 3; j++){
printf("%d   ",arr[i][j]);
}
printf("\n");
}
}
void sumaMatrix(int *ptr, int *ptr2b, int *ptr2, int ss){

int suma =0;
for(int i = 0; i<ss; i++){
for(int j = 0; j<ss; j++){
*(ptr+j+(i*ss)) = *(ptr2+j+(i*ss))+ *(ptr2b+j+(i*ss)) ;
printf("%d   ",*(ptr+j+(i*ss)));

}

printf("\n");

}
}

void restaMatrix(int *ptr, int *ptr2b, int *ptr2, int ss){

int suma =0;

for(int i = 0; i<ss; i++){
for(int j = 0; j<ss; j++){

*(ptr+j+(i*ss)) = *(ptr2+j+(i*ss)) - *(ptr2b+j+(i*ss));
printf("%d   ",*(ptr+j+(i*ss)));

}
printf("\n");

}
}
void multMatrix(int *ptr2, int *ptr2b, int *ptr, int &ss){

int v=0;
for(int i=0; i<ss; i++){
for(int j =0; j<ss;j++)
{
Fac(ptr2,ptr2b,i,j,ss,v);
*(ptr+j+(i*ss))=v;
printf("%d",*(ptr+j+(i*ss)));
}
printf("\n");
}

}
void Fac(int *ptr2, int *ptr2b, int f, int c, int &o, int &ret){

ret = 0 ;
for(int i=0; i<o; i++){
ret = (*(ptr2+i+(f*o)))*(*(ptr2b+c+(i*o)));
}
}

void leer_opcion(int& opt){

printf("\n ----ELIGA UNA OPERACION---- \n");
scanf("%d",&opt);

}
void imprimir_menu(){

printf("----OPERACIONES DISPONIBLES---- : \n");
printf("1. SUMA\n");
printf("2. RESTA\n");
printf("3. MULTIPLICACION\n ");

}


