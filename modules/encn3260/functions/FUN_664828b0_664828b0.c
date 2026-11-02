/* Module: encn3260.dll
   Function: FUN_664828b0
   Address: 664828b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664828b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 == (int *)0x0) {
    return 0x80040009;
  }
  *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + -1;
  (**(code **)(*piVar1 + 0x48))(piVar1,param_2);
  if (*(short *)(param_1 + 0x4a) == 0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x40))(*(int **)(param_1 + 0x24));
  }
  return 0;
}


