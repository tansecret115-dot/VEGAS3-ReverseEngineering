/* Module: wavplug.dll
   Function: FUN_5f38bde0
   Address: 5f38bde0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f38bde0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x85] + -1;
  param_1[0x85] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x54))(1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


