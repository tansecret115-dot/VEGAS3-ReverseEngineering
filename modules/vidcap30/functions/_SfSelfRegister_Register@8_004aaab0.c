/* Module: vidcap30.exe
   Function: _SfSelfRegister_Register@8
   Address: 004aaab0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfSelfRegister_Register_8(LPCSTR param_1,int param_2)

{
  int iVar1;
  UINT uMode;
  HMODULE hModule;
  char *lpProcName;
  FARPROC pFVar2;
  
                    /* 0xaaab0  607  _SfSelfRegister_Register@8 */
  iVar1 = _SfSelfRegister_IsSupported_4(param_1);
  if (iVar1 == 0) {
    uMode = SetErrorMode(0x8000);
    hModule = LoadLibraryExA(param_1,(HANDLE)0x0,8);
    SetErrorMode(uMode);
    if (hModule < (HMODULE)0x20) {
      return -0x7fffbffb;
    }
    lpProcName = "DllUnregisterServer";
    if (param_2 == 0) {
      lpProcName = "DllRegisterServer";
    }
    pFVar2 = GetProcAddress(hModule,lpProcName);
    if (pFVar2 != (FARPROC)0x0) {
      iVar1 = (*pFVar2)();
      FreeLibrary(hModule);
      return iVar1;
    }
    FreeLibrary(hModule);
    iVar1 = -0x7fffbfff;
  }
  return iVar1;
}


