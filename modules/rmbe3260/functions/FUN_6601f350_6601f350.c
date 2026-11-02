/* Module: rmbe3260.dll
   Function: FUN_6601f350
   Address: 6601f350
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6601f350(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_3;
  if (param_3 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  *param_3 = 0;
  param_3 = (undefined4 *)0x0;
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&param_3,0);
  if (-1 < iVar2) {
    *puVar1 = param_3;
  }
  return iVar2;
}


