/* Module: pncrt.dll
   Function: _i64toa
   Address: 78010610
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _i64toa(longlong _Val,char *_DstBuf,int _Radix)

{
                    /* 0x10610  279  _i64toa */
  if (((_Radix == 10) && (_Val < 0x100000000)) && (_Val < 0)) {
    FUN_78010660(_Val,_DstBuf,10,1);
    return _DstBuf;
  }
  FUN_78010660(_Val,_DstBuf,_Radix,0);
  return _DstBuf;
}


