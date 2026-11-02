/* Module: vegas30.exe
   Function: FUN_0050aa30
   Address: 0050aa30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050aa30(LPCSTR param_1,LPSTR param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = lstrlenA(param_1);
  if ((param_3 <= uVar1) && (4 < param_3)) {
    lstrcpynA(param_2,param_1,param_3 - 3);
    param_2[param_3 - 4] = '\0';
    builtin_memcpy(param_2 + param_3 + -4,"...",4);
    return 1;
  }
  lstrcpynA(param_2,param_1,param_3);
  param_2[param_3 - 1] = '\0';
  return 0;
}


