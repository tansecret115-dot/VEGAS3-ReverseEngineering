/* Module: sfxpfx2.dll
   Function: FUN_5c8ca647
   Address: 5c8ca647
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_5c8ca647(int param_1)

{
  if (((0 < *(int *)(param_1 + 0x38)) && (0 < *(int *)(param_1 + 0x40))) &&
     (0 < *(int *)(param_1 + 0x44))) {
    return (uint)(*(int *)(param_1 + 0x4c) == 0);
  }
  return 0x80040212;
}


