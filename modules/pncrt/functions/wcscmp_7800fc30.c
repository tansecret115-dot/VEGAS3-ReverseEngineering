/* Module: pncrt.dll
   Function: wcscmp
   Address: 7800fc30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl wcscmp(wchar_t *_Str1,wchar_t *_Str2)

{
  wchar_t wVar1;
  int iVar2;
  
                    /* 0xfc30  747  wcscmp */
  wVar1 = *_Str2;
  iVar2 = (uint)(ushort)*_Str1 - (uint)(ushort)wVar1;
  while ((iVar2 == 0 && (wVar1 != L'\0'))) {
    wVar1 = _Str2[1];
    _Str2 = _Str2 + 1;
    _Str1 = _Str1 + 1;
    iVar2 = (uint)(ushort)*_Str1 - (uint)(ushort)wVar1;
  }
  if (-1 < iVar2) {
    if (0 < iVar2) {
      iVar2 = 1;
    }
    return iVar2;
  }
  return -1;
}


