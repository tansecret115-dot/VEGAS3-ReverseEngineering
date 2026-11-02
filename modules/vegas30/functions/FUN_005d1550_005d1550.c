/* Module: vegas30.exe
   Function: FUN_005d1550
   Address: 005d1550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d1550(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x244) == 0) {
    if (*(int **)(param_1 + 0x234) == (int *)0x0) {
      return 1;
    }
    iVar1 = **(int **)(param_1 + 0x234);
  }
  else {
    iVar1 = FUN_005d0420(param_1);
  }
  if (iVar1 < 0x20) {
    return 1;
  }
  return 0;
}


