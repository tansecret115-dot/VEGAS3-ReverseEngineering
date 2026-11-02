/* Module: pncrt.dll
   Function: wcsftime
   Address: 7802e6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl wcsftime(wchar_t *_Buf,size_t _SizeInWords,wchar_t *_Format,tm *_Tm)

{
  size_t sVar1;
  char *_Buf_00;
  char *_Dest;
  size_t sVar2;
  
                    /* 0x2e6c0  751  wcsftime */
  sVar2 = 0;
  sVar1 = wcslen(_Format);
  _Buf_00 = malloc(_SizeInWords * 2);
  if (_Buf_00 == (char *)0x0) {
    return 0;
  }
  sVar1 = (sVar1 + 1) * 2;
  _Dest = malloc(sVar1);
  if (_Dest != (char *)0x0) {
    sVar1 = wcstombs(_Dest,_Format,sVar1);
    if (sVar1 != 0xffffffff) {
      sVar1 = strftime(_Buf_00,_SizeInWords * 2,_Dest,_Tm);
      if (sVar1 != 0) {
        sVar2 = mbstowcs(_Buf,_Buf_00,_SizeInWords);
        if (sVar2 == 0xffffffff) {
          sVar2 = 0;
        }
      }
    }
  }
  free(_Buf_00);
  free(_Dest);
  return sVar2;
}


