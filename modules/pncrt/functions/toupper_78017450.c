/* Module: pncrt.dll
   Function: toupper
   Address: 78017450
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl toupper(int _C)

{
  bool bVar1;
  
                    /* 0x17450  734  toupper */
  if (DAT_78042438 == 0) {
    if ((0x60 < _C) && (_C < 0x7b)) {
      return _C + -0x20;
    }
  }
  else {
    InterlockedIncrement(&__unguarded_readlc_active);
    bVar1 = __setlc_active != 0;
    if (bVar1) {
      InterlockedDecrement(&__unguarded_readlc_active);
      _lock(0x13);
    }
    _C = FUN_780174e0(_C);
    if (bVar1) {
      _unlock(0x13);
      return _C;
    }
    InterlockedDecrement(&__unguarded_readlc_active);
  }
  return _C;
}


