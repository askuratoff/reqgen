#pragma once
#include <string>
#include <vector>

using namespace std;

class X509RDN
{
public:
	X509RDN();
	virtual ~X509RDN();
	string Name;
	string OID;
	string Value;
	string ASN1Type;
	string ToString();
	vector<string> ToStringArray();
};

