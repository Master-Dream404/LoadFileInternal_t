struct Script
{
	WCHAR* pwszScript;
	WCHAR* pwszUsername;
	WCHAR* pwszPassword;
};

typedef uint32_t(__fastcall* LoadFileInternal_t)(fwRefContainer<vfs::Stream> stream, char* scriptFile, Script* outScript);
LoadFileInternal_t loadfileinternal;

LoadFileInternal_t get_loadfileinternal_hook()
{
  return (LoadFileInternal_t)(GetModuleHandle("citizen-scripting-lua.dll") + 0x181C0);
}
