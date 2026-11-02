/* Module: mpegin.dll
   Function: FUN_10011bcb
   Address: 10011bcb
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10011bcb(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_10011c47();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_1001b4d0;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_10011c3e();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x1001b4d4);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x1001b638);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_10011c3e();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_10011c3e();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_10011c3e();
  *pDVar1 = 0x16;
  return;
}


