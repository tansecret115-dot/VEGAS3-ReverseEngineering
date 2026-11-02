/* Module: pncrt.dll
   Function: _ui64tow
   Address: 780172e0
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _ui64tow(ulonglong _Val,wchar_t *_DstBuf,int _Radix)

{
  char local_50 [80];
  
                    /* 0x172e0  482  _ui64tow */
  _ui64toa(_Val,local_50,_Radix);
  MultiByteToWideChar(0,1,local_50,-1,_DstBuf,0x50);
  return _DstBuf;
}


