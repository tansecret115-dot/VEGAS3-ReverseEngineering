/* Module: mpgmux.dll
   Function: FUN_1000cd00
   Address: 1000cd00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __cdecl FUN_1000cd00(uint param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  DWORD *pDVar1;
  undefined8 uVar2;
  
  if ((param_1 < DAT_1001b640) &&
     ((*(byte *)((&DAT_1001b540)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10010211(param_1);
    uVar2 = FUN_1000cd71(param_1,param_2,param_3,param_4);
    FUN_10010270(param_1);
    return uVar2;
  }
  pDVar1 = FUN_1000ff9f();
  *pDVar1 = 9;
  pDVar1 = FUN_1000ffa8();
  *pDVar1 = 0;
  return 0xffffffffffffffff;
}


