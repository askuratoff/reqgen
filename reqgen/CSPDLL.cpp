#include "stdafx.h"
#include "CSPDLL.h"


CSPDLL::CSPDLL()
{
	_isLoaded = false;
}


CSPDLL::~CSPDLL()
{
	UnLoad();
}

bool CSPDLL::Load(const std::string dllname)
{
	_name = dllname;
	CString tmpstr = dllname.c_str();
	_hDLL = LoadLibrary((LPCWSTR)tmpstr.GetBuffer(0));
	if (_hDLL)
	{
		_isLoaded = true;
	}
	return _isLoaded;
}

void CSPDLL::UnLoad()
{
	if (_isLoaded)
	{
		if (!FreeLibrary(_hDLL))
		{
			DWORD dw = GetLastError();
		}
		_isLoaded = false;
	}
}

bool CSPDLL::isLoaded()
{
	return _isLoaded;
}
