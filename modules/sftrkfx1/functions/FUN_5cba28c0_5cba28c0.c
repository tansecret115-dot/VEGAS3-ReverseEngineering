/* Module: sftrkfx1.dll
   Function: FUN_5cba28c0
   Address: 5cba28c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cba28c0(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x2f4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x2f4) = 0;
  }
  if (param_2 != (int *)0x0) {
    *(int **)(param_1 + 0x2f4) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


