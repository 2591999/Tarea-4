#include <iostream>
using namespace std;

main(){
	//array = arreglo o coleccion o matiz
	//se utilizan para almacenar varios valores en una sala variable
	
	/*int notas[4]; //indice o posicion del arreglo inicia en 0
	notas[0] = 80;
	notas[1] = 65;
	notas[2] = 60;
	notas[3] = 70;
	for(int i=0;i<=3;i++){
		cout<<i<<":"<<notas[i]<<endl;
	}*/
	/*for(int i : notas){
		cout<<i<<endl;
	}*/
	
	/*cout<<notas[0]<<endl;
	cout<<notas[1]<<endl;
	cout<<notas[2]<<endl;
	cout<<notas[3]<<endl;*/
	
	/*int tam=0;
	cout<<"cuantas notas desea ingresar:";
	cin>>tam;
	int notas[4];
	 for(int i=0;i<tam;i++){
	 	cout<<"Ingrese nota "<<i+1<<":";
	 	cin>>notas[i];
	 }
	 
	 for(int i=0;i<tam;i++){
	 	cout<<notas[i]<<endl;
	 }*/
	 
	 /*int tam=0, suma=0, promedio=0;
	cout<<"cuantas notas desea ingresar:";
	cin>>tam; //5
	int notas[tam];
	 for(int i=0;i<tam;i++){
	 	cout<<"Ingrese nota "<<i+1<<":";
	 	cin>>notas[i];
	 }
	 
	 for(int i=0;i<tam;i++){
	 	suma += notas[i];
	 }
	 promedio = suma / tam;
	 cout<<"El promedio es: "<<promedio<<endl;*/
	 
	 /*int tam=0, suma=0, promedio=0;
	 int notas[tam];
	 char res;
	 do{
	 	tam++;
	 	cout<<"Igrese Nota" <<tam<<":";
	 	cin>>notas[tam-1]; 
	 	cout<<"Desea ingresar otra nota(s/n):";
	 	cin>>res;
	 }while(res=='s'||res=='s');
	
	for(int i=0;i<tam;i++){
		suma+=notas[i];
	}
	promedio = suma / tam;
	
	cout<<"El promedio es: "<<promedio<<endl;*/
	
	/*char nombre[30]; // arreglo de char
	cout<<"Ingrese su nombre completo:";
	//cin>>nombre;
	cin.get(nombre,30);
	cout<<nombre<<endl;*/
	
	/*string nombre; // char nombre[30]
	int dato;
	cout<<"Ingrese Dato:";
	cin>>dato;
	cin.ignore();
	cout<<"Ingrese su nombre completo:";
	getline(cin,nombre);
	
	cout<<nombre<<endl;*/
	
	string semana [7]={"Lune","Martes","Miercoles","jueves","Viernes","Sabado","Domingo"};
		
		semana[3] = "Jueves";
		for (int i=0;i<7;i++){
			cout<<semana[i]<<endl;
		}
	
	system ("pause");
}
