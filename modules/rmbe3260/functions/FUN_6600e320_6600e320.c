/* Module: rmbe3260.dll
   Function: FUN_6600e320
   Address: 6600e320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600e320(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(int **)(param_1 + 0x10) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  return 0;
}


