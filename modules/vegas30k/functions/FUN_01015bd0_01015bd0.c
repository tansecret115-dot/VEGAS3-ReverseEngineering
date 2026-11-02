/* Module: vegas30k.dll
   Function: FUN_01015bd0
   Address: 01015bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01015bd0(HANDLE param_1,LPVOID param_2,undefined4 param_3,int param_4)

{
  SIZE_T dwBytes;
  LPSTR lpMultiByteStr;
  LPVOID pvVar1;
  BOOL BVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  int iVar5;
  LPCWSTR lpWideCharStr;
  int iVar6;
  
  pvVar1 = param_2;
  BVar2 = ReadFile(param_1,param_2,0x20,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if ((BVar2 == 0) || (param_2 != (LPVOID)0x20)) {
    return -0x7ffb1ff8;
  }
  iVar5 = *(int *)((int)pvVar1 + 0x1c);
  if (iVar5 != 0) {
    dwBytes = iVar5 + 1;
    pvVar3 = GlobalAlloc(0x42,dwBytes);
    pvVar4 = GlobalLock(pvVar3);
    *(LPVOID *)((int)pvVar1 + 0x20) = pvVar4;
    if (pvVar4 == (LPVOID)0x0) {
      return -0x7ff8fff2;
    }
    if (param_4 == 0x10000) {
      iVar5 = riff_ReadData(param_1,pvVar4,*(undefined4 *)((int)pvVar1 + 0x1c));
      if (iVar5 < 0) {
        return iVar5;
      }
    }
    else {
      pvVar3 = GlobalAlloc(0x42,dwBytes * 2);
      lpWideCharStr = GlobalLock(pvVar3);
      if (lpWideCharStr == (LPCWSTR)0x0) {
        return -0x7ff8fff2;
      }
      iVar6 = riff_ReadData(param_1,lpWideCharStr,iVar5 * 2);
      if (iVar6 < 0) {
        return iVar6;
      }
      lpMultiByteStr = *(LPSTR *)((int)pvVar1 + 0x20);
      if (*lpWideCharStr == L'\0') {
        if (lpMultiByteStr != (LPSTR)0x0) {
          *lpMultiByteStr = '\0';
        }
      }
      else {
        WideCharToMultiByte(0,0,lpWideCharStr,-1,lpMultiByteStr,dwBytes,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      lpMultiByteStr[iVar5] = '\0';
      pvVar3 = GlobalHandle(lpWideCharStr);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(lpWideCharStr);
      GlobalFree(pvVar3);
    }
  }
  return 0;
}


