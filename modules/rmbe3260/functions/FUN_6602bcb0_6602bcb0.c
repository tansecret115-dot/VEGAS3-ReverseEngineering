/* Module: rmbe3260.dll
   Function: FUN_6602bcb0
   Address: 6602bcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6602bcb0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    *(int *)(param_1 + 0x3c) = param_2;
    *(int *)(param_1 + 0x48) = param_3;
    return 0;
  }
  return 0x80004003;
}


