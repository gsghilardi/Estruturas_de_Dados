#include<iostream>

using namespace std;

int main()

{
float voto,cand1,cand2,nulo,branco,total;

voto=0;
cand1=0;
cand2=0;
nulo=0;
branco=0;
total=0;

cout<<"Eleicoes Presidenciais"<<endl;

cout<<"1 - Voto no Candidato 1"<<endl;

cout<<"2 - Voto no Candidato 2"<<endl;

cout<<"3 - Voto Nulo"<<endl;

cout<<"4 - Voto em branco"<<endl;

do
{
cout<<"Escolha o seu voto: ";
cin>>voto;

if(voto==1) 
   cand1=cand1+1;
else
if(voto==2) 
   cand2=cand2+1;
else
if(voto==3 || voto>4) 
   nulo=nulo+1;
else
if(voto==4)
   branco=branco+1;

if(voto!=0) 
total=total+1;

if(voto==0) 
    break;
}

while(voto!=0);

cout<<endl;

cout<<"Total de Votos para Candidado 1: " << (cand1/total)*100 <<endl;

cout<<"Total de Votos para Candidato 2: " << (cand2/total)*100 <<endl;

cout<<"Total de Votos Nulos: "<< (nulo/total)*100 <<endl;

cout<<"Total de Votos em Branco: "<< (branco/total)*100 <<endl;

return 0;

}