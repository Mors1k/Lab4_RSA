#ifndef _RSA_H_
#define _RSA_H_

#include <iostream>
#include<math.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

class RSA
{
private:
	long int p, q, n, t, flag, e[100], d[100], temp[100], j, m[100], en[100], i;
	char msg[100];
	int prime(long int);
	void ce();
	long int cd(long int);

public:
	RSA(int, int, char[100]);
	void encrypt();
	void decrypt();
};
#endif#pragma once