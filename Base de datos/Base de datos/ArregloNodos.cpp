#include<iostream>
using namespace std;

void InsertaNon(int);
void InsertaPar(int);
void InsertaPrimo(int);
void InsertaNoPrimo(int);
void MuestraNon();
void MuestraPar();
void MuestraPrimo();
void MuestraNoPrimo();
int VerificaSiPrimo(int);


//Variables globales
int NNon[100];
int NPar[100];
int NPrimo[100]; 
int NoPrimo[100];

int contNon = -1;
int contPar = -1;
int contPrimo = -1;
int contNoPrimo = -1;


void main() {
	char opc = 's';
	int numero = 0;
	do {
		cout << endl << "Ingrese el numero:      \b\b\b\b\b";
		cin >> numero;
		if ((numero % 2) == 0) {
			InsertaPar(numero);
		}
		else {
			InsertaNon(numero);
		}if ((VerificaSiPrimo(numero))<=2) {
			InsertaPrimo(numero);
		}
		else {
			InsertaNoPrimo(numero);
		}
		cout << "Desea agregar mas numeros? s/n     \b\b";
		cin >> opc;
	} while (opc == 's' || opc == 'S');
	MuestraNon();
	MuestraPar();
	MuestraPrimo();
	MuestraNoPrimo();
	cout << endl;
}

void InsertaNon(int Numero) {
	contNon++;
	NNon[contNon] = Numero;
}

void InsertaPar(int Numero) {
	contPar++;
	NPar[contPar] = Numero;
}

void InsertaPrimo(int Numero) {
	contPrimo++;
	NPrimo[contPrimo] = Numero;
}

void InsertaNoPrimo(int Numero) {
	contNoPrimo++;
	NoPrimo[contNoPrimo] = Numero;
}


void MuestraNon() {
	int tsuma = 0;
	cout << endl << "Numeros Nones: ";
	for (int x = 0; x <= contNon; x++) {
		cout << NNon[x] << " ";
		tsuma += NNon[x];
	}
	cout << endl << "Total Numeros: " << contNon + 1;
	cout << endl << "Total suma: " << tsuma;
}

void MuestraPar() {
	int tsuma = 0;
	cout << endl << "Numeros Pares: ";
	for (int x = 0; x <= contPar; x++) {
		cout << NPar[x] << " ";
		tsuma += NPar[x];
	}
	cout << endl << "Total Numeros: " << contPar + 1;
	cout << endl << "Total suma: " << tsuma;
}


void MuestraPrimo() {
	int tsuma = 0;
	cout << endl << "Numeros Primos: ";
	for (int x = 0; x <= contPrimo; x++) {
		cout << NPrimo[x] << " ";
		tsuma += NPrimo[x];
	}
	cout << endl << "Total Numeros: " << contPrimo + 1;
	cout << endl << "Total suma: " << tsuma;
}

void MuestraNoPrimo() {
	int tsuma = 0;
	cout << endl << "Numeros No Primos: ";
	for (int x = 0; x <= contNoPrimo; x++) {
		cout << NoPrimo[x] << " ";
		tsuma += NoPrimo[x];
	}
	cout << endl << "Total Numeros: " << contNoPrimo + 1;
	cout << endl << "Total suma: " << tsuma;
}

int VerificaSiPrimo(int numero) {
	int veces = 0;
	int x = 0;
	for (x = 1; x <= numero; x++) {
		if ((numero% x)==0){
			veces++;
		}
	}
	return veces;

}