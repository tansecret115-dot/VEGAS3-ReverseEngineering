/* Module: pncrt.dll
   Function: _tzset
   Address: 78015b70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _tzset(void)

{
                    /* 0x15b70  480  _tzset */
  _lock(0xb);
  FUN_78015b90();
  _unlock(0xb);
  return;
}


