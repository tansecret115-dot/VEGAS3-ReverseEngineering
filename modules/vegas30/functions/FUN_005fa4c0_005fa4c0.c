/* Module: vegas30.exe
   Function: FUN_005fa4c0
   Address: 005fa4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005fa4c0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3] + -1;
  param_1[3] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x38))(1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


