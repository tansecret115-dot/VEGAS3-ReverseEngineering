/* Module: sfppack1.dll
   Function: FUN_5cdd4ec0
   Address: 5cdd4ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdd4ec0(int param_1)

{
  if (*(int *)(param_1 + 0x38) < 1) {
    *(undefined4 *)(param_1 + 0x38) = 1;
    return 0;
  }
  if (20000 < *(int *)(param_1 + 0x38)) {
    *(undefined4 *)(param_1 + 0x38) = 20000;
    return 0;
  }
  return 1;
}


