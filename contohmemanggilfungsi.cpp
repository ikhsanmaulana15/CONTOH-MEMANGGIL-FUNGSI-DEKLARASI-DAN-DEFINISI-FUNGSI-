#include <stdio.h>
int HITUNG(int A, int B);

int main()
{
	int A, B, T;
	A=5; B=2; T=0;
	T= HITUNG(A,B);
	printf("\n %d", T);

}
int HITUNG(int A, int B)
{ int T;
	A= A * 2;
	B= B * 2;
	T= A+B;
	return(T);
	 }