/* Module: stl2plg.dll
   Function: FUN_00401090
   Address: 00401090
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401090(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1] + -1;
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x3c))(1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


