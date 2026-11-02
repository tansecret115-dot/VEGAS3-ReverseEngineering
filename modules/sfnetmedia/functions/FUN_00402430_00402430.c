/* Module: sfnetmedia.dll
   Function: FUN_00402430
   Address: 00402430
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402430(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2] + -1;
  param_1[2] = iVar1;
  if ((iVar1 == 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x30))(1);
  }
  return iVar1;
}


