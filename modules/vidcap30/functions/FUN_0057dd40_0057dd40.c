/* Module: vidcap30.exe
   Function: FUN_0057dd40
   Address: 0057dd40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0057dd40(int *param_1)

{
  int iVar1;
  
  if (param_1[6] == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x2c))();
    if (-1 < iVar1) {
      (**(code **)(*(int *)param_1[6] + 8))((int *)param_1[6]);
      param_1[6] = 0;
      return 0;
    }
  }
  return iVar1;
}


