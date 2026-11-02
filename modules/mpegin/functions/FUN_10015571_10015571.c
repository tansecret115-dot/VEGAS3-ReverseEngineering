/* Module: mpegin.dll
   Function: FUN_10015571
   Address: 10015571
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10015571(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1001da60) &&
     ((*(byte *)((&DAT_1001d960)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10014b6c(param_1);
    uVar1 = FUN_100155ce(param_1);
    FUN_10014bcb(param_1);
    return uVar1;
  }
  pDVar2 = FUN_10011c3e();
  *pDVar2 = 9;
  pDVar2 = FUN_10011c47();
  *pDVar2 = 0;
  return 0xffffffff;
}


