/* Module: pncrt.dll
   Function: _lock
   Address: 78009400
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _lock(int _File)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
                    /* 0x9400  327  _lock */
  if ((&DAT_7803d188)[_File] == 0) {
    lpCriticalSection = malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      _amsg_exit(0x11);
    }
    _lock(0x11);
    if ((&DAT_7803d188)[_File] == 0) {
      InitializeCriticalSection(lpCriticalSection);
      (&DAT_7803d188)[_File] = lpCriticalSection;
    }
    else {
      free(lpCriticalSection);
    }
    _unlock(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_7803d188)[_File]);
  return;
}


