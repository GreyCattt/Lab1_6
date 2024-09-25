#include <iostream>
#include <string>

int main()
{
	int nA;
	float fltB;
	unsigned short wC;

	nA = 274;
	fltB = 1.001e-2;
	wC = 78;

	double dblD;
	int nE;
	char chF;

	dblD = (double)nA;
	nE = (int)fltB;
	chF = (char)wC;

	double* pdblD;
	void* pV;
	pV = &nA;
	pdblD = (double*)pV;
	dblD = *pdblD;

	int* pnE;
	pV = &fltB;
	pnE = (int*)pV;
	nE = *pnE;

	char* pchF;
	pV = &wC;
	pchF = (char*)pV;
	chF = *pchF;

	return 0;
}