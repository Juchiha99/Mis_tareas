#include<iostream>
#include<conio.h>


using namespace std;


int main(){
//creando la matriz 
	
 int x,y, suma=0, contador=0,i=2;
 
 
 cout<<"Ingrese x: ";
 cin>>x;
 
 cout<<"Ingrese y: ";
 cin>>y;
 cout<<"______________"<<endl;
 
 int fila[x][y], columna[x][y];
 
 cout<<"Matriz 1"<<endl;
 for(int a=0;a<x;a++){
 	
  for(int b=0;b<y;b++){
  	
   cout<<"Ingrese numero: ";
   cin>>fila[a][b];
   
  }
 }
 
 
 cout<<"\n";
 cout<<"____________"<<endl;
 cout<<"Matriz 2"<<endl;
 for(int a=0;a<x;a++){
  for(int b=0;b<y;b++){
  	
   cout<<"Ingrese numero: ";
   cin>>columna[a][b];
  }
 }
 
 cout<<"\n";
 cout<<"La matriz 1 es: "<<endl;
 for(int a=0;a<x;a++){
  for(int b=0;b<y;b++){
   cout<<fila[a][b]<<" ";
   
  }
  cout<<endl;
  
 }
 
 cout<<"\n";
 cout<<"La matriz dos es: "<<endl;
 for(int a=0;a<x;a++){
  for(int b=0;b<y;b++){
  	
   cout<<columna[a][b]<<" ";
   
  }
  cout<<endl;
  
 }
 
 cout<<"\n";
 cout<<"La suma de las dos matrices es:"<<endl;
 for(int a=0;a<x;a++){
  for(int b=0;b<y;b++){
  	
	  suma = fila[a][b]+columna[a][b];
  	
   cout<<suma<<" ";
}
  }
  cout<<endl;
  
  //definiendo numero primo
  
  if(suma==1){
  cout<<"Numero primo o no"<<endl;
  cout<<suma<<" no es numero primo"<<endl;
 }
 if(suma==2){
  cout<<"Numero primo o no"<<endl;
  cout<<suma<<" es numero primo"<<endl;
 }else{
  while(i<suma){
   if(suma%i==0){
   	cout<<"Numero primo o no"<<endl;
    cout<<suma<<" no es numero primo"<<endl;
    break;
   }else{
    contador++;
   }
   i++;
  }
  if(contador==suma-2){
  	
  	cout<<"Numero primo o no"<<endl;
   cout<<suma<<" Es un numero primo"<<endl;
  }
  
  
 }
 
 getch();
 return 0; 
}
