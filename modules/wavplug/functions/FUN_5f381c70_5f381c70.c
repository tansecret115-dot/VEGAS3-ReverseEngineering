/* Module: wavplug.dll
   Function: FUN_5f381c70
   Address: 5f381c70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f381c70(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2] + -1;
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x3c))(1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


