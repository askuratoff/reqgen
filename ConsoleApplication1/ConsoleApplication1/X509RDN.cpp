#include "stdafx.h"
#include "X509RDN.h"
#include <regex>

X509RDN::X509RDN()
{
}


X509RDN::~X509RDN()
{
}

string X509RDN::ToString()
{
	regex rg;
	smatch mch;
	if (true) { ; }
	return OID + "=" + "\"" + Value + "\"";
}

vector<string> X509RDN::ToStringArray()
{
	return vector<string> {OID, ASN1Type + Value};
}