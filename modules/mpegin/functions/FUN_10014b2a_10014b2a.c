/* Module: mpegin.dll
   Function: FUN_10014b2a
   Address: 10014b2a
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10014b2a(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_1001da60) &&
     ((*(byte *)((&DAT_1001d960)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_1001d960)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10011c3e();
  *pDVar1 = 9;
  pDVar1 = FUN_10011c47();
  *pDVar1 = 0;
  return 0xffffffff;
}


