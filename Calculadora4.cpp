#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main (){
int s; 
float a,b;
float o;
cout<<"1)Suma: "<<endl;
cout<<"2)Resta: "<<endl;
cout<<"3)Multiplicacion: "<<endl;
cout<<"4)Divicion: "<<endl;
cout<<"Seleccione una opcion: "<<endl;
cin>>s;
switch(s){
	case 1:{
		cout<<"Teclee dos numeros : "<<endl;
cin>>a;
cin>>b;
if(a=='float'||'int' && b=='float'||'int' ){

o=a+b;

	cout<<"Resultado"<<o<<endl;
}else{
	cout<<"No se aceptan letras"<<endl;
}
}
	break;
	case 2:{
	cout<<"Teclee dos numeros : "<<endl;
cin>>a;
cin>>b;
if(a=='float'||'int' && b=='float'||'int' ){

o=a-b;

	cout<<"Resultado"<<o<<endl;
}else{
	cout<<"No se aceptan letras"<<endl;
}
}

	
		break;
			case 3:{
		cout<<"Teclee dos numeros : "<<endl;
cin>>a;
cin>>b;
if(a=='float'||'int' && b=='float'||'int' ){

o=a*b;

	cout<<"Resultado"<<o<<endl;
}else{
	cout<<"No se aceptan letras"<<endl;
}
}
	break;
		case 4:{
	cout<<"Teclee dos numeros : "<<endl;
cin>>a;
cin>>b;
if(a=='float'||'int' && b=='float'||'int' ){

o=a/b;

	cout<<"Resultado"<<o<<endl;
}else{
	cout<<"No se aceptan letras"<<endl;
}
}
	break;
	 
getch();
}
}
