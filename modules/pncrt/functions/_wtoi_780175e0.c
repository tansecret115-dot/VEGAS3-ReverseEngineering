/* Module: pncrt.dll
   Function: _wtoi
   Address: 780175e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _wtoi(wchar_t *_Str)

{
  long lVar1;
  CHAR local_14 [20];
  
                    /* 0x175e0  566  _wtoi
                       0x175e0  568  _wtol */
  WideCharToMultiByte(0,0,_Str,-1,local_14,0x14,(LPCSTR)0x0,(LPBOOL)0x0);
  lVar1 = atol(local_14);
  return lVar1;
}


