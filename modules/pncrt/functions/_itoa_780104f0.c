/* Module: pncrt.dll
   Function: _itoa
   Address: 780104f0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _itoa(int _Value,char *_Dest,int _Radix)

{
                    /* 0x104f0  318  _itoa */
  if ((_Radix == 10) && (_Value < 0)) {
    FUN_78010530(_Value,_Dest,10,1);
    return _Dest;
  }
  FUN_78010530(_Value,_Dest,_Radix,0);
  return _Dest;
}


