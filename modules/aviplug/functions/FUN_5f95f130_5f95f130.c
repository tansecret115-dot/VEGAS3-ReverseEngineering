/* Module: aviplug.dll
   Function: FUN_5f95f130
   Address: 5f95f130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f95f130(int *param_1,int param_2)

{
  int iVar1;
  
  do {
    iVar1 = *param_1;
    param_1 = param_1 + 1;
    if (iVar1 == param_2) {
      return 1;
    }
  } while (*param_1 != 0);
  return 0;
}


