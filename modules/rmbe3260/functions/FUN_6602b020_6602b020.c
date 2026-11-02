/* Module: rmbe3260.dll
   Function: FUN_6602b020
   Address: 6602b020
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6602b020(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(void **)(param_1 + 0x4c) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(void **)(param_1 + 0x54) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(void **)(param_1 + 0x5c) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x5c));
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  return;
}


