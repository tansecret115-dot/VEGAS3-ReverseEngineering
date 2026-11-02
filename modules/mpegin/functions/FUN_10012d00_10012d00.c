/* Module: mpegin.dll
   Function: FUN_10012d00
   Address: 10012d00
   Source: Ghidra pseudocode (Stage 10 batch) */


byte __cdecl FUN_10012d00(uint param_1)

{
  if (DAT_1001da60 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_1001d960)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}


