#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a, int *b, int *c, int *d) {
    int A, B, C, D;

    A = rand() % 4 + 1;
    if (A == 1) *a = 50;
    else if (A == 2) *a = 100;
    else if (A == 3) *a = 500;
    else if (A == 4) *a = 1000;
    do {
        B = rand() % 4 + 1;
    } while (B == A);
    if (B == 1) *b = 50;
    else if (B == 2) *b = 100;
    else if (B == 3) *b = 500;
    else if (B == 4) *b = 1000;
    do {
        C = rand() % 4 + 1;
    } while (C == A || C == B);
    if (C == 1) *c = 50;
    else if (C == 2) *c = 100;
    else if (C == 3) *c = 500;
    else if (C == 4) *c = 1000;
    do {
        D = rand() % 4 + 1;
    } while (D == A || D == B || D == C);
    if (D == 1) *d = 50;
    else if (D == 2) *d = 100;
    else if (D == 3) *d = 500;
    else if (D == 4) *d = 1000;
}
