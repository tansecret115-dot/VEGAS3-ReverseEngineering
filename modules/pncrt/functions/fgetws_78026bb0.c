/* Module: pncrt.dll
   Function: fgetws
   Address: 78026bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl fgetws(wchar_t *_Dst,int _SizeInWords,FILE *_File)

{
  uint uVar1;
  void *extraout_ECX;
  void *this;
  void *extraout_ECX_00;
  int iVar2;
  wchar_t *pwVar3;
  
                    /* 0x26bb0  606  fgetws */
  if (_SizeInWords < 1) {
    return (wchar_t *)0x0;
  }
  FUN_780094a0((uint)_File);
  iVar2 = _SizeInWords + -1;
  this = extraout_ECX;
  pwVar3 = _Dst;
  if (iVar2 != 0) {
    while( true ) {
      uVar1 = FUN_78026a80(this,_File);
      if ((uVar1 & 0xffff) == 0xffff) break;
      *pwVar3 = (wchar_t)uVar1;
      pwVar3 = pwVar3 + 1;
      if (((wchar_t)uVar1 == L'\n') || (iVar2 = iVar2 + -1, this = extraout_ECX_00, iVar2 == 0))
      goto LAB_78026c00;
    }
    if (pwVar3 == _Dst) {
      FUN_78009510((uint)_File);
      return (wchar_t *)0x0;
    }
  }
LAB_78026c00:
  *pwVar3 = L'\0';
  FUN_78009510((uint)_File);
  return _Dst;
}


