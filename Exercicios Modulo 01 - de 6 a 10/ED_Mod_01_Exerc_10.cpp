#include<iostream>

using namespace std;

int main()

{
int id, op, optotal, nid;
float op1, op2, op3, op4, mid, totalid;

id = 0;
op = 0;
op1 = 0;
op2 = 0;
op3 = 0;
op4 = 0;
optotal = 0;
totalid = 0;
nid = 0;
mid = 0;

cout<<"Questionario no cinema"<<endl;

do
{
cout<<endl;	
	
cout<<"Qual a sua idade?";
cin>> id;

if(id<0) 
    break;

cout<<endl;

cout<<"Qual a sua opiniao a respeito do filme?"<<endl;

cout<<"1 - Otimo"<<endl;
cout<<"2 - Bom"<<endl;
cout<<"3 - Regular"<<endl;
cout<<"4 - Ruim"<<endl;
cout<<"Opiniao: ";
cin>> op;

if(op==1) 
   op1=op1+1;
else
if(op==2) 
   op2=op2+1;
else
if(op==3) 
   op3=op3+1;
else
if(op==4)
   op4=op4+1;

if(op==1 || op==2 || op==3 || op==4) 
   optotal=optotal+1;

if(id!=0) 
   nid=nid+1;

if(id!=0) 
   totalid=totalid+id;
   mid=(totalid/nid);

}

while(id!=0);

cout<<endl;

cout<<"Quantidade de pessoas que responderam a pesquisa: " << optotal <<endl;

cout<<"Media de idade das pessoas que responderam a pesquisa: " << mid <<endl;

cout<<"Porcentagem para a resposta Otimo: " << (op1/optotal)*100 <<endl;

cout<<"Porcentagem para a resposta Bom: " << (op2/optotal)*100 <<endl;

cout<<"Porcentagem para a resposta Regular: " << (op3/optotal)*100 <<endl;

cout<<"Porcentagem para a resposta Ruim: " << (op4/optotal)*100 <<endl;

return 0;

}