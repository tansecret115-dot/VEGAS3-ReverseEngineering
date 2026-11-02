/* Module: mpgmux.dll
   Function: FUN_100101cf
   Address: 100101cf
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_100101cf(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_1001b640) &&
     ((*(byte *)((&DAT_1001b540)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_1001b540)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1000ff9f();
  *pDVar1 = 9;
  pDVar1 = FUN_1000ffa8();
  *pDVar1 = 0;
  return 0xffffffff;
}


