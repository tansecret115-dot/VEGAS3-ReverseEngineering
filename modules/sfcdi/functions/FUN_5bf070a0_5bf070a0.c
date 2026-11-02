/* Module: sfcdi.dll
   Function: FUN_5bf070a0
   Address: 5bf070a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf070a0(LPCSTR param_1)

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
  (&DAT_5bf664a0)[DAT_5bf66620 * 3] = pHVar1;
  iVar2 = FUN_5bf06f10(pHVar1);
  if (iVar2 < 0) {
    FreeLibrary((HMODULE)(&DAT_5bf664a0)[DAT_5bf66620 * 3]);
    (&DAT_5bf664a0)[DAT_5bf66620 * 3] = 0;
    return 0xffffffff;
  }
  DAT_5bf66620 = DAT_5bf66620 + 1;
  return 0;
}


