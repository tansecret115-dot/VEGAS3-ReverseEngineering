/* Module: pncrt.dll
   Function: _ui64toa
   Address: 780106f0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _ui64toa(ulonglong _Val,char *_DstBuf,int _Radix)

{
                    /* 0x106f0  481  _ui64toa */
  FUN_78010660(_Val,_DstBuf,_Radix,0);
  return _DstBuf;
}


