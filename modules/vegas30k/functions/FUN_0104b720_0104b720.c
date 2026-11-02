/* Module: vegas30k.dll
   Function: FUN_0104b720
   Address: 0104b720
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0104b720(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[4] + -1;
  param_1[4] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x24))(1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


