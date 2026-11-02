/* Module: pncrt.dll
   Function: towupper
   Address: 78010e10
   Source: Ghidra pseudocode (Stage 10 batch) */


wint_t __cdecl towupper(wint_t _C)

{
  uint uVar1;
  bool bVar2;
  undefined2 in_stack_00000006;
  
                    /* 0x10e10  736  towupper */
  if (DAT_78042438 == 0) {
    if ((0x60 < _C) && (_C < 0x7b)) {
      return _C - 0x20;
    }
  }
  else {
    InterlockedIncrement(&__unguarded_readlc_active);
    bVar2 = __setlc_active != 0;
    if (bVar2) {
      InterlockedDecrement(&__unguarded_readlc_active);
      _lock(0x13);
    }
    uVar1 = FUN_78010ea0(__C);
    _C = (wint_t)uVar1;
    if (bVar2) {
      _unlock(0x13);
      return _C;
    }
    InterlockedDecrement(&__unguarded_readlc_active);
  }
  return _C;
}


