/* Module: vegas30.exe
   Function: FUN_005b7c00
   Address: 005b7c00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005b7c00(undefined4 param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  undefined1 local_ac [36];
  CHAR local_88 [136];
  
  iVar1 = FUN_005b51e0(param_1,local_ac);
  if (-1 < iVar1) {
    lstrcpynA(param_2,local_88,param_3);
    param_2[param_3 + -1] = '\0';
    return iVar1;
  }
  return iVar1;
}


