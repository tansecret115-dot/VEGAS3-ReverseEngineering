/* Module: pncrt.dll
   Function: FUN_7800ce50
   Address: 7800ce50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_7800ce50(void)

{
  LPCSTR lpMultiByteStr;
  int iVar1;
  wchar_t *lpWideCharStr;
  int *piVar2;
  
  lpMultiByteStr = (LPCSTR)*_environ;
  piVar2 = _environ;
  if (lpMultiByteStr == (LPCSTR)0x0) {
    return 0;
  }
  while (((iVar1 = MultiByteToWideChar(1,0,lpMultiByteStr,-1,(LPWSTR)0x0,0), iVar1 != 0 &&
          (lpWideCharStr = malloc(iVar1 * 2), lpWideCharStr != (wchar_t *)0x0)) &&
         (iVar1 = MultiByteToWideChar(1,0,(LPCSTR)*piVar2,-1,lpWideCharStr,iVar1), iVar1 != 0))) {
    FUN_7800e170(lpWideCharStr,0);
    lpMultiByteStr = (LPCSTR)piVar2[1];
    piVar2 = piVar2 + 1;
    if (lpMultiByteStr == (LPCSTR)0x0) {
      return 0;
    }
  }
  return 0xffffffff;
}


