/* Module: vegas30.exe
   Function: FUN_005a7cf0
   Address: 005a7cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a7cf0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_005a7a60(*(undefined4 *)(param_1 + 0x484),*(undefined4 *)(param_1 + 0x480));
  FUN_005a7a60(*(undefined4 *)(param_1 + 0x47c),*(undefined4 *)(param_1 + 0x478));
  return;
}


