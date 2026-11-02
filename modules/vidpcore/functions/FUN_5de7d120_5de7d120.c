/* Module: vidpcore.dll
   Function: FUN_5de7d120
   Address: 5de7d120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de7d120(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1e8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  return 0;
}


