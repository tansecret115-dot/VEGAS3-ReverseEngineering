/* Module: g2plug.dll
   Function: FUN_5f83ba70
   Address: 5f83ba70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f83ba70(int param_1,uint param_2,wchar_t *param_3)

{
  size_t _Size;
  uint uVar1;
  size_t sVar2;
  BYTE *lpMultiByteStr;
  
  uVar1 = 0x80004005;
  if (*(int *)(param_1 + 0x34) != 0) {
    sVar2 = wcslen(param_3);
    _Size = sVar2 * 2 + 2;
    lpMultiByteStr = calloc(1,_Size);
    if ((param_3 == (wchar_t *)0x0) || (*param_3 != L'\0')) {
      WideCharToMultiByte(0,0,param_3,-1,(LPSTR)lpMultiByteStr,_Size,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (lpMultiByteStr != (BYTE *)0x0) {
      *lpMultiByteStr = '\0';
    }
    lpMultiByteStr[sVar2 * 2 + 1] = '\0';
    uVar1 = FUN_5f863210(*(int *)(param_1 + 0x34),param_2,lpMultiByteStr);
    free(lpMultiByteStr);
  }
  return uVar1;
}


