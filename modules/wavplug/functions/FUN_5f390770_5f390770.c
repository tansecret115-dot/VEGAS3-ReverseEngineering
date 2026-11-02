/* Module: wavplug.dll
   Function: FUN_5f390770
   Address: 5f390770
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f390770(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2] + -1;
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x80))(1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


