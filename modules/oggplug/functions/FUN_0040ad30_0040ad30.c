/* Module: oggplug.dll
   Function: FUN_0040ad30
   Address: 0040ad30
   Source: Ghidra pseudocode (Stage 10 batch) */


LPWSTR FUN_0040ad30(int param_1,LPCSTR param_2)

{
  int iVar1;
  LPWSTR lpWideCharStr;
  int iVar2;
  
  iVar1 = lstrlenA(param_2);
  lpWideCharStr = (LPWSTR)FUN_0040acb0(param_1,(iVar1 + 1) * 2);
  if (lpWideCharStr == (LPWSTR)0x0) {
    return (LPWSTR)&DAT_00510e6c;
  }
  iVar2 = MultiByteToWideChar(0,1,param_2,-1,lpWideCharStr,iVar1 + 1);
  lpWideCharStr[iVar1] = L'\0';
  if ((iVar2 < 1) || (iVar2 == 1)) {
    *lpWideCharStr = L'\0';
  }
  return lpWideCharStr;
}


