/* Module: pncrt.dll
   Function: _onexit
   Address: 78021d30
   Source: Ghidra pseudocode (Stage 10 batch) */


_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  size_t sVar1;
  void *pvVar2;
  
                    /* 0x21d30  400  _onexit */
  FUN_78008cf0();
  sVar1 = _msize(DAT_78042730);
  if (sVar1 < (uint)((int)DAT_7804272c + (4 - (int)DAT_78042730))) {
    sVar1 = _msize(DAT_78042730);
    pvVar2 = realloc(DAT_78042730,sVar1 + 0x10);
    if (pvVar2 == (void *)0x0) {
      FUN_78008d00();
      return (_onexit_t)0x0;
    }
    DAT_7804272c = (undefined4 *)((int)pvVar2 + ((int)DAT_7804272c - (int)DAT_78042730 >> 2) * 4);
    DAT_78042730 = pvVar2;
  }
  *DAT_7804272c = _Func;
  DAT_7804272c = DAT_7804272c + 1;
  FUN_78008d00();
  return _Func;
}


