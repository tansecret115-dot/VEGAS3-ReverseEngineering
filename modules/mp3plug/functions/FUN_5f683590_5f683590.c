/* Module: mp3plug.dll
   Function: FUN_5f683590
   Address: 5f683590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f683590(LPCSTR param_1,undefined4 *param_2)

{
  char cVar1;
  HANDLE hFile;
  LPCVOID pMem;
  BOOL BVar2;
  HGLOBAL pvVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  CHAR *pCVar7;
  DWORD local_404;
  CHAR local_400 [4];
  undefined1 local_3fc;
  undefined1 local_3e2;
  
  if (param_2[1] != 0) {
    hFile = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      pMem = (LPCVOID)FUN_5f6820b0(param_2);
      SetFilePointer(hFile,0,(PLONG)0x0,2);
      uVar4 = 0xffffffff;
      pcVar6 = &DAT_5f73c080;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      BVar2 = WriteFile(hFile,&DAT_5f73c080,~uVar4 - 1,&local_404,(LPOVERLAPPED)0x0);
      if (BVar2 != 0) {
        pCVar7 = local_400;
        for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
          pCVar7[0] = '\0';
          pCVar7[1] = '\0';
          pCVar7[2] = '\0';
          pCVar7[3] = '\0';
          pCVar7 = pCVar7 + 4;
        }
        lstrcpyA(local_400,(LPCSTR)((int)pMem + 8));
        local_3e2 = 0;
        iVar5 = FUN_5f683760(hFile,local_400,0x1e);
        if (iVar5 != 0) {
          pCVar7 = local_400;
          for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
            pCVar7[0] = '\0';
            pCVar7[1] = '\0';
            pCVar7[2] = '\0';
            pCVar7[3] = '\0';
            pCVar7 = pCVar7 + 4;
          }
          lstrcpyA(local_400,(LPCSTR)((int)pMem + 0x107));
          local_3e2 = 0;
          iVar5 = FUN_5f683760(hFile,local_400,0x1e);
          if (iVar5 != 0) {
            pCVar7 = local_400;
            for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
              pCVar7[0] = '\0';
              pCVar7[1] = '\0';
              pCVar7[2] = '\0';
              pCVar7[3] = '\0';
              pCVar7 = pCVar7 + 4;
            }
            lstrcpyA(local_400,(LPCSTR)((int)pMem + 0x305));
            local_3e2 = 0;
            iVar5 = FUN_5f683760(hFile,local_400,0x1e);
            if (iVar5 != 0) {
              pCVar7 = local_400;
              for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
                pCVar7[0] = '\0';
                pCVar7[1] = '\0';
                pCVar7[2] = '\0';
                pCVar7[3] = '\0';
                pCVar7 = pCVar7 + 4;
              }
              lstrcpyA(local_400,(LPCSTR)((int)pMem + 0x404));
              local_3fc = 0;
              iVar5 = FUN_5f683760(hFile,local_400,4);
              if (iVar5 != 0) {
                pCVar7 = local_400;
                for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
                  pCVar7[0] = '\0';
                  pCVar7[1] = '\0';
                  pCVar7[2] = '\0';
                  pCVar7[3] = '\0';
                  pCVar7 = pCVar7 + 4;
                }
                lstrcpyA(local_400,(LPCSTR)((int)pMem + 0x409));
                local_3e2 = 0;
                iVar5 = FUN_5f683760(hFile,local_400,0x1e);
                if (iVar5 != 0) {
                  WriteFile(hFile,(LPCVOID)((int)pMem + 0x809),1,&local_404,(LPOVERLAPPED)0x0);
                }
              }
            }
          }
        }
      }
      if (pMem != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(pMem);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pMem);
        GlobalFree(pvVar3);
      }
      CloseHandle(hFile);
    }
  }
  return;
}


