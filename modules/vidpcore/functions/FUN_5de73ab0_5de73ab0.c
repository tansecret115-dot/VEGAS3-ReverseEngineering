/* Module: vidpcore.dll
   Function: FUN_5de73ab0
   Address: 5de73ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de73ab0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x230);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x230) = 0;
  }
  return 0;
}


