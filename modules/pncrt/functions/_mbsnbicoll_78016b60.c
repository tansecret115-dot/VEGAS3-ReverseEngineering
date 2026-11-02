/* Module: pncrt.dll
   Function: _mbsnbicoll
   Address: 78016b60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  int unaff_retaddr;
  
                    /* 0x16b60  372  _mbsnbicoll */
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = __crtCompareStringA(DAT_78042404,(LPCWSTR)0x1,(DWORD)_Str1,(LPCSTR)_MaxCount,(int)_Str2,
                              (LPCSTR)_MaxCount,DAT_78042400,unaff_retaddr);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}


