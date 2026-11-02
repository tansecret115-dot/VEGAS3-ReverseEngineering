/* Module: sfppack1.dll
   Function: FUN_5cdff3c7
   Address: 5cdff3c7
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_5cdff3c7(int param_1)

{
  if (((0 < *(int *)(param_1 + 0x38)) && (0 < *(int *)(param_1 + 0x40))) &&
     (0 < *(int *)(param_1 + 0x44))) {
    return (uint)(*(int *)(param_1 + 0x4c) == 0);
  }
  return 0x80040212;
}


