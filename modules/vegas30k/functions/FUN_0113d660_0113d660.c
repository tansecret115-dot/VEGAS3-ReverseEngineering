/* Module: vegas30k.dll
   Function: FUN_0113d660
   Address: 0113d660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0113d660(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + -0x20);
  if (piVar1 != param_2) {
    (**(code **)(*param_2 + 4))(param_2);
    *(int **)(param_1 + -0x20) = param_2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  return 0;
}


