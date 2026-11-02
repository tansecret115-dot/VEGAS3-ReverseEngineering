/* Module: vegas30k.dll
   Function: _SfGetPrintFromWideString@8
   Address: 010c4950
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR _SfGetPrintFromWideString_8(undefined4 param_1,wchar_t *param_2)

{
  size_t sVar1;
  LPSTR lpMultiByteStr;
  int iVar2;
  int iVar3;
  
                    /* 0xc4950  975  _SfGetPrintFromWideString@8 */
  sVar1 = wcslen(param_2);
  iVar3 = sVar1 * 2;
  lpMultiByteStr = (LPSTR)_SfGetStringBuffer_8(param_1,iVar3);
  if (lpMultiByteStr == (LPSTR)0x0) {
    return &DAT_0128eb74;
  }
  if ((param_2 == (wchar_t *)0x0) || (*param_2 != L'\0')) {
    iVar2 = WideCharToMultiByte(0,0,param_2,-1,lpMultiByteStr,iVar3 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else {
    *lpMultiByteStr = '\0';
    iVar2 = 1;
  }
  lpMultiByteStr[iVar3] = '\0';
  if ((iVar2 < 1) || (iVar2 == 1)) {
    *lpMultiByteStr = '\0';
  }
  return lpMultiByteStr;
}


