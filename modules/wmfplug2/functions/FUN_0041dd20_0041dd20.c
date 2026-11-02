/* Module: wmfplug2.dll
   Function: FUN_0041dd20
   Address: 0041dd20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041dd20(HKEY param_1,LPSTR param_2,DWORD *param_3)

{
  DWORD cbMultiByte;
  HKEY hKey;
  LPSTR lpMultiByteStr;
  LSTATUS LVar1;
  HGLOBAL hMem;
  LPCWSTR lpWideCharStr;
  DWORD local_4;
  
  hKey = param_1;
  local_4 = 0;
  LVar1 = RegQueryValueExA(param_1,"Description",(LPDWORD)0x0,(LPDWORD)&param_1,(LPBYTE)0x0,&local_4
                          );
  lpMultiByteStr = param_2;
  if ((LVar1 == 0) && (param_1 == (HKEY)0x3)) {
    if (param_2 == (LPSTR)0x0) {
      *param_3 = local_4;
      return 0;
    }
    hMem = GlobalAlloc(0x40,local_4 * 2);
    lpWideCharStr = GlobalLock(hMem);
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0x8007000e;
    }
    LVar1 = RegQueryValueExA(hKey,"Description",(LPDWORD)0x0,(LPDWORD)&param_1,(LPBYTE)lpWideCharStr
                             ,&local_4);
    if (LVar1 == 0) {
      cbMultiByte = *param_3;
      if (*lpWideCharStr == L'\0') {
        *lpMultiByteStr = '\0';
        lpMultiByteStr[cbMultiByte - 1] = '\0';
        return 0;
      }
      WideCharToMultiByte(0,0,lpWideCharStr,-1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
      lpMultiByteStr[cbMultiByte - 1] = '\0';
      return 0;
    }
  }
  return 0x80004005;
}


