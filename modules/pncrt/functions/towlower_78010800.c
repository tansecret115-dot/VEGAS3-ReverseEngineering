/* Module: pncrt.dll
   Function: towlower
   Address: 78010800
   Source: Ghidra pseudocode (Stage 10 batch) */


wint_t __cdecl towlower(wint_t _C)

{
  bool bVar1;
  undefined2 in_stack_00000006;
  
                    /* 0x10800  735  towlower */
  if (_C == 0xffff) {
    return 0xffff;
  }
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
    __C = FUN_780108a0(__C);
    if (bVar1) {
      _unlock(0x13);
      return (wint_t)__C;
    }
    InterlockedDecrement(&__unguarded_readlc_active);
  }
  return (wint_t)__C;
}


