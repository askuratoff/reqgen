#include "stdafx.h"
#include "X509DN.h"


X509DN::X509DN()
{
}


X509DN::~X509DN()
{
	RDNs.clear();
}

string X509DN::ToString(string delim = ";")
{
	string res;
	for(X509RDN rdn:RDNs)
	{
		res += (rdn.ToString() + delim);
	}
	return res;
}

vector<string> X509DN::ToStringArray()
{
	vector<string> res;
	for (X509RDN rdn : RDNs)
	{
		res.push_back(rdn.OID);
		res.push_back(rdn.Value);
	}
	return res;
}
