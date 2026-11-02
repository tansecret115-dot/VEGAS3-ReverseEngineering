/* Module: vegas30.exe
   Function: FUN_00409560
   Address: 00409560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409560(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  piVar1 = *(int **)(param_1 + 0x4c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0x4c) = param_2;
  return 0;
}


