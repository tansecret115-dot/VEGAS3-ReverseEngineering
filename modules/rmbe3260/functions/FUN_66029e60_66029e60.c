/* Module: rmbe3260.dll
   Function: FUN_66029e60
   Address: 66029e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66029e60(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(int **)(param_1 + 0x28) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1,*(undefined4 *)(param_1 + 0x28));
  }
  return 0;
}


