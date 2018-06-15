#include <string>
#include "stdafx.h"
#include "X509RDN.h"


X509RDN::X509RDN()
{
}


X509RDN::~X509RDN()
{
}

std::string X509RDN::ToString()
{
	return OID + "=" + Value;
}