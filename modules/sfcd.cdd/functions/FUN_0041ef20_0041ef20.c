/* Module: sfcd.cdd
   Function: FUN_0041ef20
   Address: 0041ef20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041ef20(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0x80004003;
  }
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  iVar1 = *param_2;
  *param_1 = iVar1 * 0x1194;
  iVar1 = iVar1 * 0x1194 + param_2[1] * 0x4b;
  *param_1 = iVar1;
  *param_1 = param_2[2] + iVar1;
  return 0;
}


