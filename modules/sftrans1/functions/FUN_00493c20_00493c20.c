/* Module: sftrans1.dll
   Function: FUN_00493c20
   Address: 00493c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00493c20(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  iVar1 = ftol();
  iVar1 = iVar1 + param_4;
  if (iVar1 < param_4) {
    *param_3 = param_4;
    return 1;
  }
  if (param_5 < iVar1) {
    iVar1 = param_5;
  }
  *param_3 = iVar1;
  return 1;
}


