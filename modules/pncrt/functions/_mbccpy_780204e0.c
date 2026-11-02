/* Module: pncrt.dll
   Function: _mbccpy
   Address: 780204e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _mbccpy(uchar *_Dst,uchar *_Src)

{
                    /* 0x204e0  342  _mbccpy */
  *_Dst = *_Src;
  if ((*(byte *)((int)&_mbctype + *_Src + 1) & 4) != 0) {
    _Dst[1] = _Src[1];
  }
  return;
}


