#include<iostream>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include "RSA.h"

using namespace std;

long int p, q;
char msg[100] = "hello";


int main()
{
	p = 47;
	q = 53;
	
	RSA rsa(p, q, msg);
	
	rsa.encrypt();
	rsa.decrypt();
	cout << endl;
	system("pause");
	return 0;
}
