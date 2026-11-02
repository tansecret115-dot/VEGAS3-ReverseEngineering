/* Module: pncrt.dll
   Function: tolower
   Address: 78010930
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl tolower(int _C)

{
  bool bVar1;
  
                    /* 0x10930  733  tolower */
  if (DAT_78042438 == 0) {
    if ((0x40 < _C) && (_C < 0x5b)) {
      return _C + 0x20;
    }
  }
  else {
    InterlockedIncrement(&__unguarded_readlc_active);
    bVar1 = __setlc_active != 0;
    if (bVar1) {
      InterlockedDecrement(&__unguarded_readlc_active);
      _lock(0x13);
    }
    _C = FUN_780109c0(_C);
    if (bVar1) {
      _unlock(0x13);
      return _C;
    }
    InterlockedDecrement(&__unguarded_readlc_active);
  }
  return _C;
}


