/* Module: mpegin.dll
   Function: FUN_10012acc
   Address: 10012acc
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10012acc(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1001da60) &&
     ((*(byte *)((&DAT_1001d960)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10014b6c(param_1);
    iVar1 = FUN_10012b31(param_1,param_2,param_3);
    FUN_10014bcb(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10011c3e();
  *pDVar2 = 9;
  pDVar2 = FUN_10011c47();
  *pDVar2 = 0;
  return -1;
}


