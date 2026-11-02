/* Module: pncrt.dll
   Function: _sleep
   Address: 780181a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _sleep(ulong _Duration)

{
                    /* 0x181a0  439  _sleep */
  if (_Duration == 0) {
    _Duration = 1;
  }
  Sleep(_Duration);
  return;
}


