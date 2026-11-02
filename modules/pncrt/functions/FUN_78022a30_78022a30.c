/* Module: pncrt.dll
   Function: FUN_78022a30
   Address: 78022a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_78022a30(wchar_t *param_1)

{
  size_t sVar1;
  wchar_t *_Dest;
  int iVar2;
  uchar *lpMultiByteStr;
  
  sVar1 = wcslen(param_1);
  _Dest = malloc(sVar1 * 2 + 2);
  if (_Dest == (wchar_t *)0x0) {
    return 0xffffffff;
  }
  wcscpy(_Dest,param_1);
  iVar2 = FUN_7800e170(_Dest,1);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  if (_environ != 0) {
    sVar1 = WideCharToMultiByte(1,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (sVar1 == 0) {
      return 0xffffffff;
    }
    lpMultiByteStr = malloc(sVar1);
    if (lpMultiByteStr == (uchar *)0x0) {
      return 0xffffffff;
    }
    iVar2 = WideCharToMultiByte(1,0,param_1,-1,(LPSTR)lpMultiByteStr,sVar1,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_78016860(lpMultiByteStr,0);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
  }
  return 0;
}


