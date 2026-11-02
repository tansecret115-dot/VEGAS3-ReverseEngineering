/* Module: sfpaplug.dll
   Function: FUN_0040bb50
   Address: 0040bb50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040bb50(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x21c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0x21c) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


