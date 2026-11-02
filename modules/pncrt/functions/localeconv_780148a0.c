/* Module: pncrt.dll
   Function: localeconv
   Address: 780148a0
   Source: Ghidra pseudocode (Stage 10 batch) */


lconv * __cdecl localeconv(void)

{
                    /* 0x148a0  662  localeconv */
  return (lconv *)PTR_PTR_78040460;
}


