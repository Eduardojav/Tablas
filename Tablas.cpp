#include<iostream>
using namespace std;
int A=0;
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
void recorer(int && m,a){
    for(i=0,i<a,i++){
        if (m[a]=="&"){
            m[a-1] * m[a+1]
        }
        if (m[a]=="|"){
            m[a+1]+ m[a-1]}
        if (m[a]=="^"){
            m[a+1]-m[a-1]
        }
        if(m[a]=="~"){
        if(m[a+1]==1){
                m[a+1]=0
        }
        else {m[a+1]=1}
    }}}
int main(){
cout<<"ingresa el tama�o de tu problema logico"<<endl;
cin>>a;
int m[a];
cin>>m[a];
cout<<m[a]<<endl;
return 0;}

