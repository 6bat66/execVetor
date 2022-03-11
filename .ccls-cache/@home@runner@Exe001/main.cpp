#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int vetor[10];
int i=0;

void populavertor(){
  
  int igual,j;

  srand (time(NULL));
  
  do
  {
    vetor[i]=rand()%10;
    igual = 0;
    for(j = 0; j < i; j++)
    {
      if(vetor[j] == vetor[i])
        igual = 1;
    }
    if(igual == 0)
      i++;
  }while(i < sizeof(vetor)/4);
}

void imprimevetor(){

  cout << "Imprimindo Vetor Aleatorio Entre zero e nove: ";
  
  for(i = 0; i < sizeof(vetor)/4; i++)
  {
    cout << vetor[i] << " ";
  }
  cout<<"\n\n";
}

void elementospareseimpares(){
  int par[10];
  int impar[10];
  int contapar = 0;
  int contaimpa = 0;

  for(i = 0; i < sizeof(vetor)/4; i++)
  {
    if(vetor[i]%2==0)
    {
      par[contapar] = vetor[i];
      contapar++;
    }
    else
    {
      impar[contaimpa] = vetor[i];
      contaimpa++;
    }
  }
  cout << "Todos os numeros pares do vetor: ";
  for(i = 0; i < contapar; i++)
  {
    cout <<par[i];
  }
  cout << "\nTodos os numeros impares do vetor: ";
  for(i = 0; i < contaimpa; i++)
  {
    cout << impar[i];
  }
  cout << "\n\n";
}

void maiorvalor(){
  
  int maior = vetor[0];
  for(i = 0; i < sizeof(vetor)/4; i++)
  {
    if(vetor[i] > maior)
    {
      maior = vetor[i];
    }
  }
  cout << "Maior elemento do vetor é: " << maior;
  cout << "\n\n";
}

void elementospares(){

  int npar = 0;
  
  for(i = 0; i < sizeof(vetor)/4; i++)
  {
    if(vetor[i]%2==0)
    {
      npar++;
    }
  }
  cout << "Total de numeros Pares: "<< npar;
  cout << "\n\n";
}

void somarelementos(){
  
  int soma = 0;
  
  for(i = 0; i < sizeof(vetor)/4; i++)
  {
    soma = soma + vetor[i];
  }
  cout << "A soma dos valores do vetor é: " << soma;
  cout << "\n\n";
}

void inversovet(){
  
  int iverso[10];
  int j;
  
  for(i = 0, j = 9; i < 10; i++, j--)
  {
    iverso[j] = vetor[i];
  }
  cout << "Vetor invertido: ";
  for(i = 0; i < sizeof(iverso)/4; i++)
  {
    cout << iverso[i] << " ";
  }
  cout << "\n\n";
}

void ordemcrecente(){
  int aux;
  
  for(i = 0; i < sizeof(vetor)/4; i++)
  {
    for (int j=i+1; j < sizeof(vetor)/4; j++)
      if (vetor[i] > vetor[j])
      {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
  }
  cout << "Vetor em ordem crecente: ";
  for(i = 0; i < sizeof(vetor)/4; i++)
  {
    cout << vetor[i] << " ";
  }
  cout << "\n\n";
}

int main() {  
  populavertor();
  imprimevetor();
  elementospareseimpares();
  maiorvalor();
  elementospares();
  somarelementos();
  inversovet();
  ordemcrecente();
  
  return 0;
}
