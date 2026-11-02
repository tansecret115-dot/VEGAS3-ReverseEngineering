/* Module: vidcap30.exe
   Function: FUN_00405a90
   Address: 00405a90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405a90(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00405210(*(undefined4 *)(param_1 + 8));
    FUN_00417990(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 0;
}


