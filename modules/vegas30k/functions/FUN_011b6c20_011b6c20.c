/* Module: vegas30k.dll
   Function: FUN_011b6c20
   Address: 011b6c20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011b6c20(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1] + -1;
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    if ((code *)param_1[4] != (code *)0x0) {
      (*(code *)param_1[4])();
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x68))(1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


