/* Module: wmfplug2.dll
   Function: FUN_00445d10
   Address: 00445d10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00445d10(int *param_1)

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


