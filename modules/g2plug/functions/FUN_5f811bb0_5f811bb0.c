/* Module: g2plug.dll
   Function: FUN_5f811bb0
   Address: 5f811bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f811bb0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 == (int *)0x0) {
    return 0x8000ffff;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    (**(code **)(*piVar1 + 0x68))(piVar1,*(int *)(param_1 + 0x34));
  }
  (**(code **)(**(int **)(param_1 + 0x2c) + 8))(*(int **)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return 0;
}


