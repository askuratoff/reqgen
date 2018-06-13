#pragma once
#include <vector>
#include <string>
#include "X509RDN.h"

using namespace std;

class X509DN
{
public:
	X509DN();
	virtual ~X509DN();
	vector<X509RDN> RDNs;
	string ToString(string delim);
	vector<string> ToStringArray();
};

