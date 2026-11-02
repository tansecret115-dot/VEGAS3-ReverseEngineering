/* Module: pncrt.dll
   Function: _mbsinc
   Address: 78020ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbsinc(uchar *_Ptr)

{
  uchar *puVar1;
  
                    /* 0x20ad0  363  _mbsinc */
  puVar1 = _Ptr + 1;
  if ((*(byte *)((int)&_mbctype + *_Ptr + 1) & 4) != 0) {
    puVar1 = _Ptr + 2;
  }
  return puVar1;
}


