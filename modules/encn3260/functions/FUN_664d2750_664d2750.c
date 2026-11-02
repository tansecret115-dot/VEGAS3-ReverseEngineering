/* Module: encn3260.dll
   Function: FUN_664d2750
   Address: 664d2750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664d2750(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  return 0;
}


