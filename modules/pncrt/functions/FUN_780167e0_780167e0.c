/* Module: pncrt.dll
   Function: FUN_780167e0
   Address: 780167e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_780167e0(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Size;
  uchar *lpMultiByteStr;
  int iVar1;
  int *piVar2;
  
  lpWideCharStr = (LPCWSTR)*_wenviron;
  piVar2 = _wenviron;
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  while (((_Size = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0),
          _Size != 0 && (lpMultiByteStr = malloc(_Size), lpMultiByteStr != (uchar *)0x0)) &&
         (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*piVar2,-1,(LPSTR)lpMultiByteStr,_Size,
                                      (LPCSTR)0x0,(LPBOOL)0x0), iVar1 != 0))) {
    FUN_78016860(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)piVar2[1];
    piVar2 = piVar2 + 1;
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
  }
  return 0xffffffff;
}


