/* Module: pncrt.dll
   Function: _ultow
   Address: 78017260
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _ultow(ulong _Value,wchar_t *_Dest,int _Radix)

{
  char local_28 [40];
  
                    /* 0x17260  484  _ultow */
  _ultoa(_Value,local_28,_Radix);
  MultiByteToWideChar(0,1,local_28,-1,_Dest,0x28);
  return _Dest;
}


