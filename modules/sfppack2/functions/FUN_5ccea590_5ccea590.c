/* Module: sfppack2.dll
   Function: FUN_5ccea590
   Address: 5ccea590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccea590(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x544);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x544) = 0;
  }
  if (param_2 != (int *)0x0) {
    *(int **)(param_1 + 0x544) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


