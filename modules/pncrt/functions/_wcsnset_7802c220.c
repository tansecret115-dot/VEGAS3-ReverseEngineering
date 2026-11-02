/* Module: pncrt.dll
   Function: _wcsnset
   Address: 7802c220
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount)

{
  wchar_t *pwVar1;
  
  pwVar1 = _Str;
  for (; (_MaxCount != 0 && (_MaxCount = _MaxCount - 1, *_Str != L'\0')); _Str = _Str + 1) {
    *_Str = _Val;
  }
  return pwVar1;
}


