/* Module: aifplug.dll
   Function: FUN_5fbd6910
   Address: 5fbd6910
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbd6910(int *param_1)

{
  int iVar1;
  
  InterlockedDecrement(param_1 + 0x85);
  iVar1 = param_1[0x85];
  if (iVar1 == 0) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x54))(1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


