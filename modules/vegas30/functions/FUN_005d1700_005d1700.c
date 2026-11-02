/* Module: vegas30.exe
   Function: FUN_005d1700
   Address: 005d1700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d1700(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x244) == 0) {
    iVar1 = 0;
    if (*(int **)(param_1 + 0x234) != (int *)0x0) {
      iVar1 = **(int **)(param_1 + 0x234);
    }
  }
  else {
    iVar1 = FUN_005d0420(param_1);
  }
  if (param_3 == 0) {
    if (param_2 < 0) {
      return 0;
    }
    iVar1 = iVar1 + -1;
  }
  else if (param_2 < 1) {
    return 0;
  }
  if (iVar1 <= param_2) {
    return 0;
  }
  return 1;
}


