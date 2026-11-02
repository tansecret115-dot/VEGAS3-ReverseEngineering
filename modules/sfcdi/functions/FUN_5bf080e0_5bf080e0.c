/* Module: sfcdi.dll
   Function: FUN_5bf080e0
   Address: 5bf080e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf080e0(LPCSTR param_1)

{
  UINT uMode;
  HMODULE pHVar1;
  int iVar2;
  
  uMode = SetErrorMode(0x8000);
  pHVar1 = LoadLibraryA(param_1);
  SetErrorMode(uMode);
  if (pHVar1 < (HMODULE)0x20) {
    return 0xffffffff;
  }
  (&DAT_5bf66320)[DAT_5bf6662c * 3] = pHVar1;
  iVar2 = FUN_5bf07f70(pHVar1);
  if (iVar2 < 0) {
    FreeLibrary((HMODULE)(&DAT_5bf66320)[DAT_5bf6662c * 3]);
    (&DAT_5bf66320)[DAT_5bf6662c * 3] = 0;
    return 0xffffffff;
  }
  DAT_5bf6662c = DAT_5bf6662c + 1;
  return 0;
}


