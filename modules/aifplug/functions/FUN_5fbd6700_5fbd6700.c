/* Module: aifplug.dll
   Function: FUN_5fbd6700
   Address: 5fbd6700
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbd6700(int *param_1)

{
  int iVar1;
  
  InterlockedDecrement(param_1 + 4);
  iVar1 = param_1[4];
  if (iVar1 == 0) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x80))(1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


