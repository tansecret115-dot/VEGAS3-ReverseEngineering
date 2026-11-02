/* Module: vegas30.exe
   Function: FUN_00419e80
   Address: 00419e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00419e80(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x23c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1);
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x1c))(*(int **)(param_1 + 0x23c),0,0);
    *(undefined4 *)(param_1 + 0x244) = 0;
    (**(code **)(**(int **)(param_1 + 0x23c) + 8))(*(int **)(param_1 + 0x23c));
    (**(code **)(**(int **)(param_1 + 0x240) + 8))(*(int **)(param_1 + 0x240));
  }
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  return;
}


