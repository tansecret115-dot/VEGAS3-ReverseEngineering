/* Module: pncrt.dll
   Function: _ultoa
   Address: 780105f0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _ultoa(ulong _Val,char *_Dstbuf,int _Radix)

{
                    /* 0x105f0  483  _ultoa */
  FUN_78010530(_Val,_Dstbuf,_Radix,0);
  return _Dstbuf;
}


