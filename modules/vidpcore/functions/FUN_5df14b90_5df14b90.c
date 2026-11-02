/* Module: vidpcore.dll
   Function: FUN_5df14b90
   Address: 5df14b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df14b90(void)

{
  UINT uMode;
  HMODULE pHVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [18];
  
  if (DAT_5dff1acc == (HMODULE)0x0) {
    uMode = SetErrorMode(0x8000);
    pHVar1 = LoadLibraryA(s_KALIB32_5df426dc);
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
    DAT_5dff1acc = pHVar1;
    FUN_5df14aa0(local_48,0,0);
  }
  return 0;
}


