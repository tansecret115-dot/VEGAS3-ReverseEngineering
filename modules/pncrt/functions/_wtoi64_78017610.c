/* Module: pncrt.dll
   Function: _wtoi64
   Address: 78017610
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong __cdecl _wtoi64(wchar_t *_Str)

{
  longlong lVar1;
  CHAR local_50 [80];
  
                    /* 0x17610  567  _wtoi64 */
  WideCharToMultiByte(0,0,_Str,-1,local_50,0x14,(LPCSTR)0x0,(LPBOOL)0x0);
  lVar1 = _atoi64(local_50);
  return lVar1;
}


