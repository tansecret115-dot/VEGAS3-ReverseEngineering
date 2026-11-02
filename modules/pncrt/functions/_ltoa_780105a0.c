/* Module: pncrt.dll
   Function: _ltoa
   Address: 780105a0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _ltoa(long _Value,char *_Dest,int _Radix)

{
                    /* 0x105a0  336  _ltoa */
  if ((_Radix == 10) && (_Value < 0)) {
    FUN_78010530(_Value,_Dest,10,1);
    return _Dest;
  }
  FUN_78010530(_Value,_Dest,_Radix,0);
  return _Dest;
}


