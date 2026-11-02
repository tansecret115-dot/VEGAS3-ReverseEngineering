/* Module: mpgmux.dll
   Function: FUN_1001251d
   Address: 1001251d
   Source: Ghidra pseudocode (Stage 10 batch) */


byte __cdecl FUN_1001251d(uint param_1)

{
  if (DAT_1001b640 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_1001b540)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}


