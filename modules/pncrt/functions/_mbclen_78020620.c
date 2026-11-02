/* Module: pncrt.dll
   Function: _mbclen
   Address: 78020620
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl _mbclen(uchar *_Str)

{
                    /* 0x20620  345  _mbclen */
  return ((*(byte *)((int)&_mbctype + *_Str + 1) & 4) != 0) + 1;
}


