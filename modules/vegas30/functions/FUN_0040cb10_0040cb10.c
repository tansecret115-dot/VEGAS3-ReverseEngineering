/* Module: vegas30.exe
   Function: FUN_0040cb10
   Address: 0040cb10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040cb10(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0040c740(*(undefined4 *)(param_1 + 8));
    FUN_004ec820(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return 0;
}


