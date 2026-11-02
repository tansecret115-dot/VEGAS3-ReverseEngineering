/* Module: pncrt.dll
   Function: seh_longjmp_unwind
   Address: 7800cd85
   Source: Ghidra pseudocode (Stage 10 batch) */


/* seh_longjmp_unwind */

void __cdecl seh_longjmp_unwind(int param_1)

{
                    /* 0xcd85  429  _seh_longjmp_unwind */
  local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}


