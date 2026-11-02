/* Module: pncrt.dll
   Function: _unlock
   Address: 78009480
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _unlock(int _File)

{
                    /* 0x9480  489  _unlock */
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_7803d188)[_File]);
  return;
}


