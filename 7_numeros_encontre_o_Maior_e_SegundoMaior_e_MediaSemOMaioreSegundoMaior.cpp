#include <iostream>

using namespace std;

int main(){
	float valores;
	float maior=0, segmaior=0, media, contmedia = 0;
	float contador = 1;
	
	for(int i=0; i < 7; i++){
		cin>>valores;
		if( contador == 1){
		   maior = valores;
		}else if(valores > maior){
			segmaior = maior;
			maior = valores;
			
		}else if( valores > segmaior){
			segmaior = valores;
			
		}
		contador++;
		
		contmedia += valores;
		media = (contmedia - maior - segmaior) / 5;
	
		
	}
	
	
	
	cout<<maior<<endl;
	cout<<segmaior<<endl;
	cout<<media<<endl;
	return 0;
}