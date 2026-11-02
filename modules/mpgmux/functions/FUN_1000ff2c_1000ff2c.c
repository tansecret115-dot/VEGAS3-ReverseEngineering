/* Module: mpgmux.dll
   Function: FUN_1000ff2c
   Address: 1000ff2c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000ff2c(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_1000ffa8();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10019e60;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_1000ff9f();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10019e64);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10019fc8);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_1000ff9f();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_1000ff9f();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_1000ff9f();
  *pDVar1 = 0x16;
  return;
}


