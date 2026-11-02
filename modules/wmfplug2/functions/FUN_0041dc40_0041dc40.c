/* Module: wmfplug2.dll
   Function: FUN_0041dc40
   Address: 0041dc40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041dc40(HKEY param_1,LPSTR param_2,int param_3)

{
  HKEY hKey;
  LPSTR pCVar1;
  int iVar2;
  LSTATUS LVar3;
  LPCWSTR lpWideCharStr;
  DWORD local_4;
  
  hKey = param_1;
  local_4 = 0;
  LVar3 = RegQueryValueExA(param_1,"Name",(LPDWORD)0x0,(LPDWORD)&param_1,(LPBYTE)0x0,&local_4);
  if ((LVar3 == 0) && (param_1 == (HKEY)0x3)) {
    lpWideCharStr = calloc(1,local_4 * 2);
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0x8007000e;
    }
    LVar3 = RegQueryValueExA(hKey,"Name",(LPDWORD)0x0,(LPDWORD)&param_1,(LPBYTE)lpWideCharStr,
                             &local_4);
    iVar2 = param_3;
    pCVar1 = param_2;
    if (LVar3 == 0) {
      if (*lpWideCharStr == L'\0') {
        if (param_2 != (LPSTR)0x0) {
          *param_2 = '\0';
        }
      }
      else {
        WideCharToMultiByte(0,0,lpWideCharStr,-1,param_2,param_3,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      pCVar1[iVar2 + -1] = '\0';
      free(lpWideCharStr);
      return 0;
    }
    free(lpWideCharStr);
  }
  return 0x80004005;
}


