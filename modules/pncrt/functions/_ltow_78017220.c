/* Module: pncrt.dll
   Function: _ltow
   Address: 78017220
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _ltow(long _Value,wchar_t *_Dest,int _Radix)

{
  char local_28 [40];
  
                    /* 0x17220  337  _ltow */
  _ltoa(_Value,local_28,_Radix);
  MultiByteToWideChar(0,1,local_28,-1,_Dest,0x28);
  return _Dest;
}


