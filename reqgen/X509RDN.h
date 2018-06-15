#pragma once
#include <string>

//  ласс записи в Distinguesh Name
class X509RDN
{
public:
	X509RDN();
	virtual ~X509RDN();
	std::string Name;
	std::string OID;
	std::string Value;
	int asn1type;
	virtual std::string ToString();
};

