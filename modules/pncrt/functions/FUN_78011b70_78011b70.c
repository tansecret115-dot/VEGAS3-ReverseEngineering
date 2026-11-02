/* Module: pncrt.dll
   Function: FUN_78011b70
   Address: 78011b70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78011b70(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)((&__pioinfo)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}


