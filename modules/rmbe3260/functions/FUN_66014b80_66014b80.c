/* Module: rmbe3260.dll
   Function: FUN_66014b80
   Address: 66014b80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66014b80(int *param_1)

{
  int iVar1;
  
  if (param_1[9] == 0) {
    return -0x7ffbfda8;
  }
  iVar1 = (**(code **)(*param_1 + 0x4c))(param_1);
  if (-1 < iVar1) {
    param_1[9] = 0;
  }
  return iVar1;
}


