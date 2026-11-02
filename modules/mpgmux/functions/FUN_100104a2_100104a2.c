/* Module: mpgmux.dll
   Function: FUN_100104a2
   Address: 100104a2
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD __cdecl FUN_100104a2(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1001b640) &&
     ((*(byte *)((&DAT_1001b540)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10010211(param_1);
    DVar1 = FUN_10010507(param_1,param_2,param_3);
    FUN_10010270(param_1);
    return DVar1;
  }
  pDVar2 = FUN_1000ff9f();
  *pDVar2 = 9;
  pDVar2 = FUN_1000ffa8();
  *pDVar2 = 0;
  return 0xffffffff;
}


