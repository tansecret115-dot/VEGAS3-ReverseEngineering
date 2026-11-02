/* Module: g2plug.dll
   Function: FUN_5f83c980
   Address: 5f83c980
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f83c980(int *param_1)

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


