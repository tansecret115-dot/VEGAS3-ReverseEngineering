/* Module: pncrt.dll
   Function: wcscspn
   Address: 7802d1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl wcscspn(wchar_t *_Str,wchar_t *_Control)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  
                    /* 0x2d1a0  750  wcscspn */
  pwVar1 = _Str;
  if (*_Str != L'\0') {
    do {
      if (*_Control != L'\0') {
        pwVar3 = _Control;
        wVar2 = *_Control;
        do {
          if (wVar2 == *pwVar1) goto LAB_7802d1de;
          wVar2 = pwVar3[1];
          pwVar3 = pwVar3 + 1;
        } while (wVar2 != L'\0');
      }
      pwVar1 = pwVar1 + 1;
    } while (*pwVar1 != L'\0');
  }
LAB_7802d1de:
  return (int)pwVar1 - (int)_Str >> 1;
}


