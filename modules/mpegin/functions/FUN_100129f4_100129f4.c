/* Module: mpegin.dll
   Function: FUN_100129f4
   Address: 100129f4
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD __cdecl FUN_100129f4(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1001da60) &&
     ((*(byte *)((&DAT_1001d960)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10014b6c(param_1);
    DVar1 = FUN_10012a59(param_1,param_2,param_3);
    FUN_10014bcb(param_1);
    return DVar1;
  }
  pDVar2 = FUN_10011c3e();
  *pDVar2 = 9;
  pDVar2 = FUN_10011c47();
  *pDVar2 = 0;
  return 0xffffffff;
}


