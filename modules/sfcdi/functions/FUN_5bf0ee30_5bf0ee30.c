/* Module: sfcdi.dll
   Function: FUN_5bf0ee30
   Address: 5bf0ee30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0ee30(void)

{
  uint uVar1;
  UINT uMode;
  
  uVar1 = FUN_5bf21910(DAT_5bf65fc0,0x3ee,1);
  if (uVar1 != 0) {
    uMode = SetErrorMode(0x8001);
    DAT_5bf65fc8 = LoadLibraryA(s_CDR4DLL_DLL_5bf64598);
    SetErrorMode(uMode);
    if (DAT_5bf65fc8 < (HMODULE)0x20) {
      DAT_5bf65fc8 = (HMODULE)0x0;
      DAT_5bf65fd0 = (FARPROC)0x0;
      DAT_5bf65fd4 = (FARPROC)0x0;
      return;
    }
    DAT_5bf65fd0 = GetProcAddress(DAT_5bf65fc8,s__CDR4VSDDisableAutoInsert_0_5bf645a4);
    DAT_5bf65fd4 = GetProcAddress(DAT_5bf65fc8,s__CDR4VSDEnableAutoInsert_0_5bf645c0);
    if ((DAT_5bf65fd0 == (FARPROC)0x0) || (DAT_5bf65fd4 == (FARPROC)0x0)) {
      FreeLibrary(DAT_5bf65fc8);
      DAT_5bf65fd0 = (FARPROC)0x0;
      DAT_5bf65fd4 = (FARPROC)0x0;
      DAT_5bf65fc8 = (HMODULE)0x0;
    }
  }
  return;
}


