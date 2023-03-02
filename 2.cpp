#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	string letra;
	
	cout << "Infome sua letra:";
	cin >> letra;
	
	if(letra != "a" && letra != "e" && letra != "i" && letra != "o" && letra != "u"){
		
		cout << "Sua letra é uma consoate!";
	} else{
		cout << "Sua letra é uma vogal";
	}
}
