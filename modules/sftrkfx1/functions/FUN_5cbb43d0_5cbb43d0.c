/* Module: sftrkfx1.dll
   Function: FUN_5cbb43d0
   Address: 5cbb43d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cbb43d0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 == (int *)0x0) {
    return 0x8000ffff;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    (**(code **)(*piVar1 + 0x18))(piVar1,*(int *)(param_1 + 0x14),0);
  }
  (**(code **)(**(int **)(param_1 + 0x2c) + 8))(*(int **)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return 0;
}


