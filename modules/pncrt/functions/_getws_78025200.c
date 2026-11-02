/* Module: pncrt.dll
   Function: _getws
   Address: 78025200
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _getws(wchar_t *_String)

{
  void *this;
  uint uVar1;
  void *this_00;
  void *extraout_ECX;
  void *extraout_ECX_00;
  wchar_t *pwVar2;
  
                    /* 0x25200  270  _getws */
  FUN_780094e0(0,0x7803f7f8);
  uVar1 = FUN_78026a80(this_00,(FILE *)&_iob);
  pwVar2 = _String;
  this = extraout_ECX;
  do {
    if ((uVar1 & 0xffff) == 10) {
LAB_78025252:
      *pwVar2 = L'\0';
      FUN_78009550(0,0x7803f7f8);
      return _String;
    }
    if ((uVar1 & 0xffff) == 0xffff) {
      if (pwVar2 == _String) {
        FUN_78009550(0,0x7803f7f8);
        return (wchar_t *)0x0;
      }
      goto LAB_78025252;
    }
    *pwVar2 = (wchar_t)uVar1;
    pwVar2 = pwVar2 + 1;
    uVar1 = FUN_78026a80(this,(FILE *)&_iob);
    this = extraout_ECX_00;
  } while( true );
}


