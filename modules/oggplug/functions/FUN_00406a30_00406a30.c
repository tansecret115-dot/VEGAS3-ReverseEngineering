/* Module: oggplug.dll
   Function: FUN_00406a30
   Address: 00406a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00406a30(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 == (int *)0x0) {
    return 0x8000ffff;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    (**(code **)(*piVar1 + 0x68))(piVar1,*(int *)(param_1 + 0x30));
  }
  (**(code **)(**(int **)(param_1 + 0x28) + 8))(*(int **)(param_1 + 0x28));
  piVar1 = *(int **)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return 0;
}


