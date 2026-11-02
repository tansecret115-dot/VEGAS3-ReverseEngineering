/* Module: pncrt.dll
   Function: _mbsnextc
   Address: 780214a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _mbsnextc(uchar *_Str)

{
  int iVar1;
  
                    /* 0x214a0  379  _mbsnextc */
  iVar1 = 0;
  if ((*(byte *)((int)&_mbctype + *_Str + 1) & 4) != 0) {
    iVar1 = (uint)*_Str << 8;
    _Str = _Str + 1;
  }
  return (uint)*_Str + iVar1;
}


