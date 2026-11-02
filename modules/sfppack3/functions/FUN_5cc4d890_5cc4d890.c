/* Module: sfppack3.dll
   Function: FUN_5cc4d890
   Address: 5cc4d890
   Source: Ghidra pseudocode (Stage 10 batch) */


LPWSTR FUN_5cc4d890(int param_1,LPCSTR param_2)

{
  int iVar1;
  LPWSTR lpWideCharStr;
  int iVar2;
  
  iVar1 = lstrlenA(param_2);
  lpWideCharStr = (LPWSTR)FUN_5cc4d810(param_1,(iVar1 + 1) * 2);
  if (lpWideCharStr == (LPWSTR)0x0) {
    return (LPWSTR)&DAT_5cc985ec;
  }
  iVar2 = MultiByteToWideChar(0,1,param_2,-1,lpWideCharStr,iVar1 + 1);
  lpWideCharStr[iVar1] = L'\0';
  if ((iVar2 < 1) || (iVar2 == 1)) {
    *lpWideCharStr = L'\0';
  }
  return lpWideCharStr;
}


