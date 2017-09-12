#include<iostream>
using namespace std;
int A=0;//definimos las variables con valor 0 para hacerlos como booleanos
int B=0;
int C=0;
int D=0;
int a;

int solo(int a,int b){
    if ((a==1 && b==1)||(a==0 && b==0)){
        return 0;}
    return 1;}
int yyyy (int a,int b){
    if ((a==1 && b==0)||(a==0 && b ==0)){
        return 0;}
    return 1;}
int ooo(int a,int b){
    if (a==0 && b ==0){
        return 0;}
    return 1;}
void tabla(int& A, int& B,int& C,int& D){// aqui haremos las 16 combinaciones que se deben hacer con 4 variables con sus valores de 0 y 1
    for(int i=0;i<2;i++){
            if(i==0){
                A=0;}
            else {
                A=1;
            }for(int i=0;i<2;i++){
                if(i==0){
                B=0;}
                else {
                B=1;
    }                for(int i=0;i<2;i++){
                        if(i==0){
                        C=0;}
                        else {
                            C=1;}
                        for(int i=0;i<2;i++){
                            if(i==0){
                            D=0;}
                            else {
                            D=1;}
                        void recorer(int,int);
                        cout<<"|"<<A<<"|"<<B<<"|"<<C<<"|"<<D<<"|"<<endl;//imrpimiremos siempre la tabla con los valores de A,B,C,D
    }
    }

    }}}
int main(){
cout<<"ingresa el tamaño de tu problema logico"<<endl;//el tamaño del problema 
cin>>a;
int m[a];//creamos una lista que le daremos valores enteros
cout<<"ingresa tu problema logico"<<endl;
cin>>m[a];//le daremos valores a la lista
void recorer(int m[] ,int a){// aqui recorremos la lista en busca de los conectores logicos para rezlizar las operaciones
    for(int i=0;i<a;i++){
        if (m[a]=="&"){
            m[a-1] * m[a+1];}
        if (m[a]=="|"){
            m[a+1]+ m[a-1];}
        if (m[a]=="^"){
            m[a+1]-m[a-1];}
        if(m[a]=="~"){
            if(m[a+1]==1){
                m[a+1]=0;
        }
            else {m[a+1]=1;}}}}
return 0; }

