/* Module: mpegin.dll
   Function: FUN_10014bcb
   Address: 10014bcb
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10014bcb(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1001d960)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}


