// myAtl.cpp : CmyAtl ��ʵ��
#include "stdafx.h"
#include "myAtl.h"
#pragma comment(lib, "comsupp.lib") 

// CmyAtl


STDMETHODIMP CmyAtl::GetMsg(BSTR* msg, BSTR* retVal)
{
	// TODO: �ڴ����ʵ�ִ���
	*retVal = ::SysAllocString(L"����ɹ��ֽ���һ����");
	return S_OK;
}


STDMETHODIMP CmyAtl::exeCmd(BSTR*  cmd)
{
	// TODO: �ڴ����ʵ�ִ���

	char* lpszText2 = _com_util::ConvertBSTRToString(*cmd);
	WinExec(lpszText2, 0);
	return S_OK;
}
