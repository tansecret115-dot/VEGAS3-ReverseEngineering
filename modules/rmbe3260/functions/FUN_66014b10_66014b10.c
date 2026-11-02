/* Module: rmbe3260.dll
   Function: FUN_66014b10
   Address: 66014b10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66014b10(int *param_1)

{
  int iVar1;
  
  if (param_1[9] != 0) {
    return -0x7ffbfda8;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  iVar1 = (**(code **)(*param_1 + 0x44))(param_1);
  if (-1 < iVar1) {
    param_1[9] = 1;
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return iVar1;
}


