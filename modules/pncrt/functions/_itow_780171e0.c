/* Module: pncrt.dll
   Function: _itow
   Address: 780171e0
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _itow(int _Value,wchar_t *_Dest,int _Radix)

{
  char local_14 [20];
  
                    /* 0x171e0  319  _itow */
  _itoa(_Value,local_14,_Radix);
  MultiByteToWideChar(0,1,local_14,-1,_Dest,0x14);
  return _Dest;
}


