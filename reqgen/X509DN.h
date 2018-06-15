#pragma once
#include <string>
#include <vector>
#include "X509RDN.h"

class X509DN
{
public:
	X509DN();
	~X509DN();
	std::string& operator[](int index);
	std::string& operator[](std::string OID);
	std::vector<X509RDN> RDNs;

};

