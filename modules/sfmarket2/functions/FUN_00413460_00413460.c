/* Module: sfmarket2.dll
   Function: FUN_00413460
   Address: 00413460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00413460(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x50);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return 0;
}


