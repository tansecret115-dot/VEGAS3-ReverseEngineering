/* Module: pncrt.dll
   Function: _mbsicoll
   Address: 78020a90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _mbsicoll(uchar *_Str1,uchar *_Str2)

{
  int iVar1;
  int unaff_retaddr;
  
                    /* 0x20a90  362  _mbsicoll */
  iVar1 = __crtCompareStringA(DAT_78042404,(LPCWSTR)0x1,(DWORD)_Str1,(LPCSTR)0xffffffff,(int)_Str2,
                              (LPCSTR)0xffffffff,DAT_78042400,unaff_retaddr);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}


