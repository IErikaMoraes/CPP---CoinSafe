
/*    Exerc�cio:
A Kikas tem um cofre com muitas moedas, e deseja saber quantos euros conseguiu poupar.
Fa�a um algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total guardado, em euros.
Considere que existem moedas de 1, 5, 10, 20 e 50 c�ntimos, e ainda moedas de 1 euro.
N�o havendo moedas de um tipo, a respetiva quantidade � zero.*/


#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	float umCent, cincoCent, dezCent, vinteCent, cinquentaCent, umEuro, totalMoedas, totalUmCent, totalCincoCent,totalDezCent, totalVinteCent, totalCinquentaCent,totalUmEuro,valortotal ;
	
	
	cout<<"Insira a quantidade de moedas de 0,01 c�ntimos:  "<<endl;
	cin>>umCent;
	
	cout<<"Insira a quantidade de moedas de 0,05 c�ntimos:  "<<endl;
	cin>>cincoCent;
	
	cout<<"Insira a quantidade de moedas de 0,10 c�ntimos: "<<endl;
	cin>>dezCent;
	
	cout<<"Insira a quantidade de moedas de 0,20 centimos: "<<endl;
	cin>>vinteCent;
	
	cout<<"Insira a quantidade de moedas de 0,50 c�ntimos: "<<endl;
	cin>>cinquentaCent;
	
	cout<<"Insira a quantidade de moedas de 1 euro: "<<endl; 
	cin>>umEuro;
	
	
	totalMoedas=umCent+cincoCent+dezCent+vinteCent+cinquentaCent+umEuro;
	totalUmCent=0.01*umCent;
	totalCincoCent=0.05*cincoCent;
	totalDezCent=0.10*dezCent;
	totalVinteCent=0.20*vinteCent;
	totalCinquentaCent=0.50*cinquentaCent;
	totalUmEuro=1*umEuro;
	valortotal=totalUmCent+totalCincoCent+totalDezCent+totalVinteCent+totalCinquentaCent+totalUmEuro;
		
	
	
	
	cout<<"o total de moedas inseridas: "<<totalMoedas<<endl;

	cout<<"o valor em moedas de 0,01 c�ntimo: "<<totalUmCent<<endl;
	
	cout<<"o valor em moedas de 0,05 c�ntimos: "<<totalCincoCent<<endl;	
	
	cout<<"o valor em moedas de 0,10 c�ntimos: "<<totalDezCent<<endl;	
	
	cout<<"o valor em moedas de 0,20 c�ntimos: "<<totalVinteCent<<endl;	
	
	cout<<"o valor em moedas de 0,50 c�ntimos: "<<totalCinquentaCent<<endl;	
	
	cout<<"o valor em moedas de 1 Euro: "<<totalUmEuro<<endl;	

	cout<<"o valor Total: "<<valortotal<<endl;	


	
	return 0;
	
}

