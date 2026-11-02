/* Module: aviplug.dll
   Function: FUN_5f959450
   Address: 5f959450
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f959450(int *param_1)

{
  int iVar1;
  
  InterlockedDecrement(param_1 + 1);
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x70))(1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


