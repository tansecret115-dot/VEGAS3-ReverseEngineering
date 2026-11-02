/* Module: vegas30.exe
   Function: FUN_005d1590
   Address: 005d1590
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_005d1590(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x244) != 0) {
    iVar1 = FUN_005d0420(param_1);
    return 0 < iVar1;
  }
  if (*(int **)(param_1 + 0x234) == (int *)0x0) {
    return false;
  }
  return 0 < **(int **)(param_1 + 0x234);
}


