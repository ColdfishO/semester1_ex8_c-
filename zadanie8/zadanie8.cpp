#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;
void autor(void) {
	printf("\n");
	for (int i = 1; i <= 120; i++) cout<<"*";
	cout<<"Autor programu: Simon Dudek\n\n";
	for (int i = 1; i <= 120; i++) cout<<"*";
}
int main()
{
	char tabd[3][100], tab[300];
	setlocale(LC_ALL, "");
	autor();
	FILE* plik;
	errno_t err = fopen_s(&plik, "1.txt", "r");
	if (plik != NULL) {
		while (feof(plik) == 0) {
			fgets(tabd[0], 100, plik);			
			cout << tabd[0];
		}
		cout<<endl;
		fclose(plik);
		errno_t err = fopen_s(&plik, "2.txt", "r");
		if (plik != NULL) {
			while (feof(plik) == 0) {
				fgets(tabd[1], 100, plik);
				cout << tabd[1];
			}
			cout << endl;
			fclose(plik);
			errno_t err = fopen_s(&plik, "3.txt", "r");
			if (plik != NULL) {
				while (feof(plik) == 0) {
					fgets(tabd[2], 100, plik);
					cout << tabd[2];
				}
				fclose(plik);
				 cout<< endl;
			}
			else {
				cout << "Błąd w otwarciu pliku 3.txt" << endl;
			}
		}
		else {
			cout << "Błąd w otwarciu pliku2.txt" << endl;
			errno_t err = fopen_s(&plik, "3.txt", "r");
			if (plik != NULL) {
				while (feof(plik) == 0) {
					fgets(tabd[2], 100, plik);
					cout << tabd[2];
				}
				fclose(plik);
				cout << endl;
			}
			else {
				cout << "Błąd w otwarciu pliku 3.txt" << endl;
			}
		}
		
	}
	else
	{
		cout << "Błąd w otwarciu pliku 1.txt" << endl;
		errno_t err = fopen_s(&plik, "2.txt", "r");
		if (plik != NULL) {
			while (feof(plik) == 0) {
				fgets(tabd[1], 100, plik);
				cout << tabd[1];
			}
			fclose(plik);
			 cout << endl;
		}
		else {
			cout << "Błąd w otwarciu pliku 2.txt" << endl;
			errno_t err = fopen_s(&plik, "3.txt", "r");
			if (plik != NULL) {
				while (feof(plik) == 0) {
					fgets(tabd[2], 100, plik);
					cout << tabd[2];
				}
				fclose(plik);
				cout << endl;
			}
			else {
				cout << "Błąd w otwarciu pliku 3.txt"<< endl;
			}
		}
	}
	system("pause");
    return 0;
}