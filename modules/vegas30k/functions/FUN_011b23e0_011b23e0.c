/* Module: vegas30k.dll
   Function: FUN_011b23e0
   Address: 011b23e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011b23e0(int param_1)

{
  int *piVar1;
  
  FUN_011b1f70();
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 0;
}


