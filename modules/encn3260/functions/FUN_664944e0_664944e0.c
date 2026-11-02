/* Module: encn3260.dll
   Function: FUN_664944e0
   Address: 664944e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664944e0(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x15);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x15) = 0;
  }
  *(int **)(param_1 + 0x15) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  (**(code **)(**(int **)(param_1 + 0x15) + 0x1c))(*(int **)(param_1 + 0x15),0);
  return 0;
}


