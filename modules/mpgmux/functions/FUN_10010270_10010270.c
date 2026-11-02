/* Module: mpgmux.dll
   Function: FUN_10010270
   Address: 10010270
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10010270(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1001b540)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}


