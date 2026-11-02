/* Module: encn3260.dll
   Function: FUN_66490910
   Address: 66490910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66490910(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x36);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x36) = 0;
  }
  *(int **)(param_1 + 0x36) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  return 0;
}


