/* Module: pncrt.dll
   Function: _i64tow
   Address: 780172a0
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _i64tow(longlong _Val,wchar_t *_DstBuf,int _Radix)

{
  char local_50 [80];
  
                    /* 0x172a0  280  _i64tow */
  _i64toa(_Val,local_50,_Radix);
  MultiByteToWideChar(0,1,local_50,-1,_DstBuf,0x50);
  return _DstBuf;
}


