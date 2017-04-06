// dllmain.h: 模块类的声明。

class CATLProject2Module : public ATL::CAtlDllModuleT< CATLProject2Module >
{
public :
	DECLARE_LIBID(LIBID_ATLProject2Lib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLPROJECT2, "{036895ED-0FAA-4A90-BEE8-A9136E164563}")
};

extern class CATLProject2Module _AtlModule;
