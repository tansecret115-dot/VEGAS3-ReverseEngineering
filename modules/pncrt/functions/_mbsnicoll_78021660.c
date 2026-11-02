/* Module: pncrt.dll
   Function: _mbsnicoll
   Address: 78021660
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _mbsnicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  LPCSTR _LpString1;
  LPCSTR _LpString2;
  int iVar1;
  int unaff_EDI;
  
                    /* 0x21660  381  _mbsnicoll */
  if (_MaxCount == 0) {
    return 0;
  }
  _LpString1 = (LPCSTR)_mbsnbcnt(_Str1,_MaxCount);
  _LpString2 = (LPCSTR)_mbsnbcnt(_Str2,_MaxCount);
  iVar1 = __crtCompareStringA(DAT_78042404,(LPCWSTR)0x1,(DWORD)_Str1,_LpString1,(int)_Str2,
                              _LpString2,DAT_78042400,unaff_EDI);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}


