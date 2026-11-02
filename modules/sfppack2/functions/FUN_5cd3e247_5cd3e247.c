/* Module: sfppack2.dll
   Function: FUN_5cd3e247
   Address: 5cd3e247
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_5cd3e247(int param_1)

{
  if (((0 < *(int *)(param_1 + 0x38)) && (0 < *(int *)(param_1 + 0x40))) &&
     (0 < *(int *)(param_1 + 0x44))) {
    return (uint)(*(int *)(param_1 + 0x4c) == 0);
  }
  return 0x80040212;
}


