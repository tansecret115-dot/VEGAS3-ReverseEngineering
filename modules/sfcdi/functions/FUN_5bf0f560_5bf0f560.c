/* Module: sfcdi.dll
   Function: FUN_5bf0f560
   Address: 5bf0f560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0f560(void)

{
  UINT uMode;
  
  uMode = SetErrorMode(0x8001);
  DAT_5bf65fe0 = LoadLibraryA(s_SAGE_DLL_5bf645dc);
  SetErrorMode(uMode);
  if (DAT_5bf65fe0 < (HMODULE)0x20) {
    DAT_5bf65fe0 = (HMODULE)0x0;
    DAT_5bf65fe4 = (FARPROC)0x0;
    DAT_5bf65fe8 = (FARPROC)0x0;
    return;
  }
  DAT_5bf65fe4 = GetProcAddress(DAT_5bf65fe0,s_System_Agent_Detect_5bf645e8);
  DAT_5bf65fe8 = GetProcAddress(DAT_5bf65fe0,s_System_Agent_Enable_5bf645fc);
  if ((DAT_5bf65fe4 == (FARPROC)0x0) || (DAT_5bf65fe8 == (FARPROC)0x0)) {
    FreeLibrary(DAT_5bf65fe0);
    DAT_5bf65fe8 = (FARPROC)0x0;
    DAT_5bf65fe4 = (FARPROC)0x0;
    DAT_5bf65fe0 = (HMODULE)0x0;
  }
  return;
}


