/* Module: sftrans1.dll
   Function: FUN_0053a3a0
   Address: 0053a3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0053a3a0(void)

{
  UINT uMode;
  HMODULE pHVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [18];
  
  if (DAT_00622464 == (HMODULE)0x0) {
    uMode = SetErrorMode(0x8000);
    pHVar1 = LoadLibraryA(s_KALIB32_005768dc);
    SetErrorMode(uMode);
    if ((int)pHVar1 < 0x21) {
      return 0xffdd;
    }
    puVar3 = local_48;
    for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_48[1] = 0x70400000;
    DAT_00622464 = pHVar1;
    FUN_0053a2b0(local_48,0,0);
  }
  return 0;
}


