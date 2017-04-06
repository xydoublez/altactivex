// myAtl.cpp : CmyAtl 的实现
#include "stdafx.h"
#include "myAtl.h"
#pragma comment(lib, "comsupp.lib") 

// CmyAtl


STDMETHODIMP CmyAtl::GetMsg(BSTR* msg, BSTR* retVal)
{
	// TODO: 在此添加实现代码
	*retVal = ::SysAllocString(L"你离成功又近了一步！");
	return S_OK;
}


STDMETHODIMP CmyAtl::exeCmd(BSTR*  cmd)
{
	// TODO: 在此添加实现代码

	char* lpszText2 = _com_util::ConvertBSTRToString(*cmd);
	WinExec(lpszText2, 0);
	return S_OK;
}
