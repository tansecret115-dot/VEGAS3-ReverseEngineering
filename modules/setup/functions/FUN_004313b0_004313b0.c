/* Module: Setup.exe
   Function: FUN_004313b0
   Address: 004313b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004313b0(void)

{
  UINT UVar1;
  HMODULE pHVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_48 [18];
  
  pHVar2 = DAT_0044f3b0;
  if (DAT_0044f3b0 == (HMODULE)0x0) {
    UVar1 = SetErrorMode(0x8000);
    pHVar2 = LoadLibraryA(s_KALIB32_00446c00);
    UVar1 = SetErrorMode(UVar1);
    if ((int)pHVar2 < 0x21) {
      return CONCAT22((short)(UVar1 >> 0x10),0xffdd);
    }
    puVar4 = local_48;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_48[1] = 0x70400000;
    DAT_0044f3b0 = pHVar2;
    pHVar2 = (HMODULE)FUN_004312c0(local_48,0,0);
  }
  return (uint)pHVar2 & 0xffff0000;
}


