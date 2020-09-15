#include<iostream>

using namespace std;

int main()
{
 int num_aluno, arm_maior_num_aluno, arm_menor_num_aluno, i;
 float alt_aluno, arm_maior_alt, arm_menor_alt;

num_aluno = 0;
arm_menor_num_aluno = 0;
arm_maior_num_aluno = 0;
alt_aluno = 0;
arm_maior_alt = 0;
arm_menor_alt = 0;
i = 0;

 
 cout<<"Entre com o numero do aluno: ";
 cin>> num_aluno;

 cout<<"Entre com altura do aluno: ";
 cin>> alt_aluno;

 
 arm_menor_num_aluno = num_aluno;
 arm_maior_num_aluno = num_aluno;
 arm_maior_alt=alt_aluno;
 arm_menor_alt=alt_aluno;
 
 
 for(i=1; i<10; i++)
 {
 cout<<"Entre com o numero do aluno: ";
 cin>>num_aluno;
 
 cout<<"Entre com altura do aluno: ";
 cin>>alt_aluno;

 if(alt_aluno>arm_maior_alt)
    arm_maior_alt=alt_aluno,
    arm_maior_num_aluno = num_aluno;
 else
 if(alt_aluno<arm_menor_alt)
    arm_menor_alt=alt_aluno,
    arm_menor_num_aluno = num_aluno;
 }

 cout<<endl;
  
 cout<<"O numero do aluno mais baixo eh: "<<arm_menor_num_aluno <<endl;
 cout<<"Com a altura de: "<<arm_menor_alt<<endl;
 
 cout<<endl;
 
 cout<<"O numero do aluno mais alto eh: "<<arm_maior_num_aluno <<endl; 
 cout<<"Com a altura de: "<<arm_maior_alt<<endl;


return 0;
} 
