#pragma once
#include <Windows.h>
#include <string>
#include <atlstr.h>

class CSPDLL
{
public:
	CSPDLL();
	virtual ~CSPDLL();
	bool Load(const std::string dllname);
	void UnLoad();
	bool isLoaded();
private:
	HMODULE _hDLL;
	std::string _name;
	bool _isLoaded;
};

