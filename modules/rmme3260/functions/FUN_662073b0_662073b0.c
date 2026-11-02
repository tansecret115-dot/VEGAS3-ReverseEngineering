/* Module: rmme3260.dll
   Function: FUN_662073b0
   Address: 662073b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662073b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(param_1 + -0x10);
  (**(code **)(*(int *)(param_1 + -0x10) + 0x54))(piVar1);
  thunk_FUN_662500b0((int *)(param_1 + 0x60));
  piVar2 = *(int **)(param_1 + 0x50);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x4c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  FUN_66206ef0((int *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x5c) = 0;
  (**(code **)(*piVar1 + 0x24))(piVar1);
  return;
}


