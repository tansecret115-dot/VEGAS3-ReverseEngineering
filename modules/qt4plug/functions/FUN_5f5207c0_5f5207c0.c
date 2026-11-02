/* Module: qt4plug.dll
   Function: FUN_5f5207c0
   Address: 5f5207c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f5207c0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 == (int *)0x0) {
    return 0x8000ffff;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    (**(code **)(*piVar1 + 0x68))(piVar1,*(int *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_5f5780f0();
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  (**(code **)(**(int **)(param_1 + 0x28) + 8))(*(int **)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0;
}


