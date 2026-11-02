/* Module: vegas30k.dll
   Function: FUN_0104bab0
   Address: 0104bab0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0104bab0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0xc] + -1;
  param_1[0xc] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x98))(1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


