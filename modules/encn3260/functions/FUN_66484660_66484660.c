/* Module: encn3260.dll
   Function: FUN_66484660
   Address: 66484660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66484660(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0x38) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  return 0;
}


