/* Module: g2plug.dll
   Function: FUN_5f8016b0
   Address: 5f8016b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f8016b0(int *param_1)

{
  int iVar1;
  
  InterlockedDecrement(param_1 + 1);
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x3c))(1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


