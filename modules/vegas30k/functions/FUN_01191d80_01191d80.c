/* Module: vegas30k.dll
   Function: FUN_01191d80
   Address: 01191d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01191d80(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0x10) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


