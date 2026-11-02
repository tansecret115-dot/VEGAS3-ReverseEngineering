/* Module: vegas30k.dll
   Function: SfFMMeta_fillSummaryFromFile
   Address: 0101b060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfFMMeta_fillSummaryFromFile(void *,struct tSFLIST *) */

long SfFMMeta_fillSummaryFromFile(void *param_1,tSFLIST *param_2)

{
  SIZE_T dwBytes;
  LPCSTR lpString;
  void *hFile;
  int iVar1;
  BOOL BVar2;
  int iVar3;
  HGLOBAL pvVar4;
  int cchWideChar;
  undefined4 *pMem;
  void *local_20;
  int local_1c;
  DWORD local_18;
  SIZE_T local_14;
  int local_10;
  SIZE_T local_c;
  int local_8;
  int local_4;
  
                    /* 0x1b060  392  ?SfFMMeta_fillSummaryFromFile@@YGJPAXPAUtSFLIST@@@Z */
  hFile = param_1;
  if (param_1 == (void *)0xffffffff) {
    return -0x7ffb1ff9;
  }
  if (param_2 == (tSFLIST *)0x0) {
    return 0;
  }
  local_8 = 0;
  local_4 = 0;
  SetFilePointer(param_1,4,(PLONG)0x0,0);
  BVar2 = ReadFile(hFile,&param_1,4,&local_18,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return -0x7ffb1ff8;
  }
  if (local_18 == 4) {
    BVar2 = ReadFile(hFile,&local_10,4,&local_18,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      return -0x7ffb1ff8;
    }
    if (local_10 == 0x5453494c) {
      SetFilePointer(hFile,8,(PLONG)0x0,0);
    }
    local_20 = param_1;
    iVar3 = riff_FindListChunk(hFile,0x4f464e49,&param_1,&local_20);
    if (-1 < iVar3) {
      local_20 = param_1;
      iVar3 = _SfSummary_Load_12(hFile,&local_8,&local_20);
      if (-1 < iVar3) {
        pMem = (undefined4 *)0x0;
        local_14 = 0;
        local_1c = 0;
        if (0 < local_8) {
          do {
            iVar1 = local_1c;
            lpString = *(LPCSTR *)(local_4 + 4 + local_1c * 8);
            if (lpString != (LPCSTR)0x0) {
              iVar3 = lstrlenA(lpString);
              cchWideChar = iVar3 + 1;
              dwBytes = iVar3 + 0xd + cchWideChar;
              local_c = dwBytes;
              if ((int)local_14 < (int)dwBytes) {
                if (pMem != (undefined4 *)0x0) {
                  pvVar4 = GlobalHandle(pMem);
                  GlobalUnlock(pvVar4);
                  pvVar4 = GlobalHandle(pMem);
                  GlobalFree(pvVar4);
                }
                local_14 = dwBytes;
                pvVar4 = GlobalAlloc(0x42,dwBytes);
                pMem = GlobalLock(pvVar4);
                if (pMem == (undefined4 *)0x0) {
                  return -0x7ff8fff2;
                }
              }
              *pMem = 0xc;
              pMem[1] = *(undefined4 *)(local_4 + iVar1 * 8);
              pMem[2] = cchWideChar * 2;
              MultiByteToWideChar(0,1,*(LPCSTR *)(local_4 + 4 + local_1c * 8),-1,(LPWSTR)(pMem + 3),
                                  cchWideChar);
              *(WCHAR *)((int)(pMem + 3) + iVar3 * 2) = L'\0';
              iVar3 = _SfList_AllocAndInsertItem_20(param_2,pMem,local_c,0xffffffff,0);
              if (iVar3 < 0) {
                pvVar4 = GlobalHandle(pMem);
                GlobalUnlock(pvVar4);
                pvVar4 = GlobalHandle(pMem);
                GlobalFree(pvVar4);
                return -0x7ff8fff2;
              }
            }
            local_1c = local_1c + 1;
          } while (local_1c < local_8);
          if (pMem != (undefined4 *)0x0) {
            pvVar4 = GlobalHandle(pMem);
            GlobalUnlock(pvVar4);
            pvVar4 = GlobalHandle(pMem);
            GlobalFree(pvVar4);
          }
        }
        _SfSummary_Free_4(&local_8);
      }
    }
    return iVar3;
  }
  return -0x7ffb1ff8;
}


