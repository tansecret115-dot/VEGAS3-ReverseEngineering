/* Module: mcplug.dll
   Function: FUN_0040c720
   Address: 0040c720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040c720(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 == (int *)0x0) {
    return 0x8000ffff;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    (**(code **)(*piVar1 + 0x68))(piVar1,*(int *)(param_1 + 0x44));
  }
  (**(code **)(**(int **)(param_1 + 0x40) + 8))(*(int **)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  return 0;
}


