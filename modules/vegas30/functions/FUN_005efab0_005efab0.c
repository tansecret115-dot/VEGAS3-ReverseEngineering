/* Module: vegas30.exe
   Function: FUN_005efab0
   Address: 005efab0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005efab0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1] + -1;
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x24))(1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


