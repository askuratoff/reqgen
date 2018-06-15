#include "stdafx.h"
#include "X509DN.h"


X509DN::X509DN()
{
}


X509DN::~X509DN()
{
	RDNs.clear();
}

std::string & X509DN::operator[](int index)
{
	return RDNs.at(index).Value;
}

std::string & X509DN::operator[](std::string OID)
{
	for (std::vector<X509RDN> _rdn = RDNs;;)
	{
		;
	}
}
