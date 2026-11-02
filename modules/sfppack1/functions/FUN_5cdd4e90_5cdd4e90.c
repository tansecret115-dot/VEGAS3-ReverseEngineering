/* Module: sfppack1.dll
   Function: FUN_5cdd4e90
   Address: 5cdd4e90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdd4e90(int param_1)

{
  if (*(int *)(param_1 + 0x34) < 1) {
    *(undefined4 *)(param_1 + 0x34) = 1;
    return 0;
  }
  if (1000 < *(int *)(param_1 + 0x34)) {
    *(undefined4 *)(param_1 + 0x34) = 1000;
    return 0;
  }
  return 1;
}


