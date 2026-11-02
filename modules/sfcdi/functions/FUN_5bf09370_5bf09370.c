/* Module: sfcdi.dll
   Function: FUN_5bf09370
   Address: 5bf09370
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCSTR FUN_5bf09370(LPCSTR param_1,int *param_2)

{
  byte *pbVar1;
  int *piVar2;
  HANDLE hFile;
  LPCSTR pCVar3;
  HGLOBAL pvVar4;
  byte *lpBuffer;
  uint uVar5;
  uint uVar6;
  LONG local_10;
  int local_c;
  uint local_8;
  uint local_4;
  
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return (LPCSTR)0x8004e007;
  }
  local_10 = 0;
  pCVar3 = (LPCSTR)SetFilePointer(hFile,0,&local_10,2);
  local_10 = 0;
  SetFilePointer(hFile,0,&local_10,0);
  ReadFile(hFile,&local_c,0xc,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (param_1 == (LPCSTR)0xc) {
    if ((LPCSTR)0xb < pCVar3) {
      pCVar3 = pCVar3 + -0xc;
    }
    pvVar4 = GlobalAlloc(0x42,(SIZE_T)pCVar3);
    lpBuffer = GlobalLock(pvVar4);
    if (lpBuffer == (byte *)0x0) {
      pCVar3 = (LPCSTR)0x8007000e;
    }
    else {
      ReadFile(hFile,lpBuffer,(DWORD)pCVar3,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
      if (param_1 == pCVar3) {
        uVar6 = (uint)pCVar3 / 0x7c;
        if ((uint)pCVar3 % 0x7c == 0) {
          if (uVar6 == local_8) {
            if (local_c == 0x102) {
              uVar5 = FUN_5bf0e1c0(0,lpBuffer,(int)pCVar3);
              piVar2 = param_2;
              pbVar1 = lpBuffer;
              pCVar3 = param_1;
              if (uVar5 == local_4) {
                for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                  pCVar3 = (LPCSTR)FUN_5bf2ade0(piVar2,(int *)pbVar1,0x7c,-1,(int *)0x0);
                  pbVar1 = pbVar1 + 0x7c;
                }
              }
              else {
                pCVar3 = (LPCSTR)0x8004e008;
              }
            }
            else {
              pCVar3 = (LPCSTR)0x8004e008;
            }
          }
          else {
            pCVar3 = (LPCSTR)0x8004e008;
          }
        }
        else {
          pCVar3 = (LPCSTR)0x8004e008;
        }
      }
      else {
        pCVar3 = (LPCSTR)0x8004e008;
      }
    }
    if (lpBuffer != (byte *)0x0) {
      pvVar4 = GlobalHandle(lpBuffer);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(lpBuffer);
      GlobalFree(pvVar4);
    }
    CloseHandle(hFile);
    return pCVar3;
  }
  CloseHandle(hFile);
  return (LPCSTR)0x8004e008;
}


