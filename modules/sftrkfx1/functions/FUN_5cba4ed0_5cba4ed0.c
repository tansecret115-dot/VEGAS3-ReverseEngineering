/* Module: sftrkfx1.dll
   Function: FUN_5cba4ed0
   Address: 5cba4ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba4ed0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 == (int *)0x0) {
    return 0x8000ffff;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,*(int *)(param_1 + 0x14),0);
  }
  (**(code **)(**(int **)(param_1 + 0x30) + 8))(*(int **)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  return 0;
}


