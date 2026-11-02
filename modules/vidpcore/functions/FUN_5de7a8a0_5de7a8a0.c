/* Module: vidpcore.dll
   Function: FUN_5de7a8a0
   Address: 5de7a8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de7a8a0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x210);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  if (*(int *)(param_1 + 0x21c) != 0) {
    FUN_5ded17e0(*(int *)(param_1 + 0x21c));
  }
  return 0;
}


