// dllmain.h : Declaration of module class.

class CNeuronicaModule : public ATL::CAtlDllModuleT< CNeuronicaModule >
{
public :
	DECLARE_LIBID(LIBID_NeuronicaLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_NEURONICA, "{8BD8A557-3A99-4549-8C71-3F0700B009A9}")
};

extern class CNeuronicaModule _AtlModule;
