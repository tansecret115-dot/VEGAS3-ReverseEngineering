/* Module: pncrt.dll
   Function: FUN_780267d0
   Address: 780267d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_780267d0(int param_1)

{
  wchar_t *pwVar1;
  ulong _Value;
  wchar_t *_Dest;
  int _Radix;
  
  _Dest = &DAT_78042610;
  if (param_1 != 0) {
    _Dest = &DAT_78042630;
  }
  wcscpy(_Dest,L"\\");
  pwVar1 = _Dest + 1;
  if ((*_Dest != L'\\') && (*_Dest != L'/')) {
    *pwVar1 = L'\\';
    pwVar1 = _Dest + 2;
  }
  if (param_1 == 0) {
    *pwVar1 = L's';
  }
  else {
    *pwVar1 = L't';
  }
  pwVar1 = pwVar1 + 1;
  _Radix = 0x20;
  _Value = getpid();
  _ultow(_Value,pwVar1,_Radix);
  wcscat(_Dest,L".");
  return;
}


