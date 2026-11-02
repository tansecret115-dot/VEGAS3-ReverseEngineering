/* Module: vidcap30.exe
   Function: FUN_00582860
   Address: 00582860
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00582860(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  hModule = GetModuleHandleA(s_ole32_dll_005ba274);
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,s_CoInitializeEx_005ba264);
    if (pFVar1 != (FARPROC)0x0) {
      iVar2 = (*pFVar1)(0,4);
      return iVar2;
    }
  }
  return -0x7fffbffb;
}


