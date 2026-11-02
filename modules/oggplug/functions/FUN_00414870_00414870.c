/* Module: oggplug.dll
   Function: FUN_00414870
   Address: 00414870
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00414870(uchar *param_1,int *param_2)

{
  SIZE_T dwBytes;
  LPCSTR lpString;
  uchar *hFile;
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  HGLOBAL pvVar5;
  int cchWideChar;
  int *pMem;
  uchar *local_20;
  int local_1c;
  DWORD local_18;
  SIZE_T local_14;
  int local_10;
  SIZE_T local_c;
  uint local_8;
  int local_4;
  
  hFile = param_1;
  if (param_1 == (uchar *)0xffffffff) {
    return 0x8004e007;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  local_8 = 0;
  local_4 = 0;
  SetFilePointer(param_1,4,(PLONG)0x0,0);
  BVar2 = ReadFile(hFile,&param_1,4,&local_18,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return 0x8004e008;
  }
  if (local_18 == 4) {
    BVar2 = ReadFile(hFile,&local_10,4,&local_18,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      return 0x8004e008;
    }
    if (local_10 == 0x5453494c) {
      SetFilePointer(hFile,8,(PLONG)0x0,0);
    }
    local_20 = param_1;
    uVar3 = FUN_00422bd0(hFile,0x4f464e49,(int *)&param_1,(int *)&local_20);
    if (-1 < (int)uVar3) {
      local_20 = param_1;
      uVar3 = FUN_004234b0(hFile,&local_8,(int *)&local_20);
      if (-1 < (int)uVar3) {
        pMem = (int *)0x0;
        local_14 = 0;
        local_1c = 0;
        if (0 < (int)local_8) {
          do {
            iVar1 = local_1c;
            lpString = *(LPCSTR *)(local_4 + 4 + local_1c * 8);
            if (lpString != (LPCSTR)0x0) {
              iVar4 = lstrlenA(lpString);
              cchWideChar = iVar4 + 1;
              dwBytes = iVar4 + 0xd + cchWideChar;
              local_c = dwBytes;
              if ((int)local_14 < (int)dwBytes) {
                if (pMem != (int *)0x0) {
                  pvVar5 = GlobalHandle(pMem);
                  GlobalUnlock(pvVar5);
                  pvVar5 = GlobalHandle(pMem);
                  GlobalFree(pvVar5);
                }
                local_14 = dwBytes;
                pvVar5 = GlobalAlloc(0x42,dwBytes);
                pMem = GlobalLock(pvVar5);
                if (pMem == (int *)0x0) {
                  return 0x8007000e;
                }
              }
              *pMem = 0xc;
              pMem[1] = *(int *)(local_4 + iVar1 * 8);
              pMem[2] = cchWideChar * 2;
              MultiByteToWideChar(0,1,*(LPCSTR *)(local_4 + 4 + local_1c * 8),-1,(LPWSTR)(pMem + 3),
                                  cchWideChar);
              *(WCHAR *)((int)(pMem + 3) + iVar4 * 2) = L'\0';
              uVar3 = FUN_00413db0(param_2,pMem,local_c,-1,(int *)0x0);
              if ((int)uVar3 < 0) {
                pvVar5 = GlobalHandle(pMem);
                GlobalUnlock(pvVar5);
                pvVar5 = GlobalHandle(pMem);
                GlobalFree(pvVar5);
                return 0x8007000e;
              }
            }
            local_1c = local_1c + 1;
          } while (local_1c < (int)local_8);
          if (pMem != (int *)0x0) {
            pvVar5 = GlobalHandle(pMem);
            GlobalUnlock(pvVar5);
            pvVar5 = GlobalHandle(pMem);
            GlobalFree(pvVar5);
          }
        }
        FUN_004230b0(&local_8);
      }
    }
    return uVar3;
  }
  return 0x8004e008;
}


