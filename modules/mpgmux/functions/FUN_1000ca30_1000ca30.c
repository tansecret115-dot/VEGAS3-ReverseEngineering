/* Module: mpgmux.dll
   Function: FUN_1000ca30
   Address: 1000ca30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000ca30(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1001b640) &&
     ((*(byte *)((&DAT_1001b540)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10010211(param_1);
    uVar1 = FUN_1000ca8d(param_1);
    FUN_10010270(param_1);
    return uVar1;
  }
  pDVar2 = FUN_1000ff9f();
  *pDVar2 = 9;
  pDVar2 = FUN_1000ffa8();
  *pDVar2 = 0;
  return 0xffffffff;
}


