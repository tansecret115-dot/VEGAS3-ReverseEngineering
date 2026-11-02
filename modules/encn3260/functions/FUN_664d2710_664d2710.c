/* Module: encn3260.dll
   Function: FUN_664d2710
   Address: 664d2710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664d2710(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(int **)(param_1 + 0x10) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


