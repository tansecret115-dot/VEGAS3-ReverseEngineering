/* Module: vidcap30.exe
   Function: FUN_0048fbc0
   Address: 0048fbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0048fbc0(int param_1,undefined4 param_2,wchar_t *param_3)

{
  size_t _Size;
  undefined4 uVar1;
  size_t sVar2;
  LPSTR lpMultiByteStr;
  
  uVar1 = 0x80004005;
  if (*(int *)(param_1 + 0x34) != 0) {
    sVar2 = wcslen(param_3);
    _Size = sVar2 * 2 + 2;
    lpMultiByteStr = calloc(1,_Size);
    if ((param_3 == (wchar_t *)0x0) || (*param_3 != L'\0')) {
      WideCharToMultiByte(0,0,param_3,-1,lpMultiByteStr,_Size,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (lpMultiByteStr != (LPSTR)0x0) {
      *lpMultiByteStr = '\0';
    }
    lpMultiByteStr[sVar2 * 2 + 1] = '\0';
    uVar1 = _SfSetMetricString_12(*(undefined4 *)(param_1 + 0x34),param_2,lpMultiByteStr);
    free(lpMultiByteStr);
  }
  return uVar1;
}


