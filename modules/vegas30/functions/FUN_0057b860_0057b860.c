/* Module: vegas30.exe
   Function: FUN_0057b860
   Address: 0057b860
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0057b860(code *param_1,undefined4 param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  HGLOBAL pvVar3;
  int iVar4;
  uint uVar5;
  HANDLE hObject;
  uint uVar6;
  DWORD *pDVar7;
  SIZE_T dwBytes;
  DWORD *pMem;
  SIZE_T dwBytes_00;
  UINT uFlags;
  int local_128;
  int local_124;
  uint local_118;
  FARPROC local_114;
  undefined4 uStack_110;
  FARPROC local_10c;
  undefined1 auStack_108 [4];
  undefined1 auStack_104 [248];
  code *pcStack_c;
  undefined4 uStack_8;
  
  pMem = (DWORD *)0x0;
  local_128 = 0;
  hModule = LoadLibraryA("PSAPI.DLL");
  if (hModule == (HMODULE)0x0) {
    local_128 = -0x7fffbffb;
  }
  else {
    pFVar1 = GetProcAddress(hModule,"EnumProcesses");
    pFVar2 = GetProcAddress(hModule,"EnumProcessModules");
    local_114 = pFVar2;
    local_10c = GetProcAddress(hModule,"GetModuleFileNameExA");
    if (((pFVar1 == (FARPROC)0x0) || (pFVar2 == (FARPROC)0x0)) || (local_10c == (FARPROC)0x0)) {
LAB_0057ba16:
      local_128 = -0x7fffbffb;
    }
    else {
      dwBytes = 0x400;
      local_118 = 0;
      do {
        if (pMem == (DWORD *)0x0) {
          pvVar3 = GlobalAlloc(0x42,dwBytes);
        }
        else {
          dwBytes = dwBytes * 2;
          pvVar3 = GlobalHandle(pMem);
          GlobalUnlock(pvVar3);
          uFlags = 0x42;
          dwBytes_00 = dwBytes;
          pvVar3 = GlobalHandle(pMem);
          pvVar3 = GlobalReAlloc(pvVar3,dwBytes_00,uFlags);
        }
        pMem = GlobalLock(pvVar3);
        if (pMem == (DWORD *)0x0) {
          local_128 = -0x7ff8fff2;
          goto LAB_0057ba1e;
        }
        iVar4 = (*pFVar1)(pMem,dwBytes,&local_118);
        if (iVar4 == 0) goto LAB_0057ba16;
      } while (dwBytes == local_118);
      uVar5 = local_118 >> 2;
      local_124 = 0;
      uVar6 = uVar5;
      pDVar7 = pMem;
      if (uVar5 != 0) {
        do {
          hObject = OpenProcess(0x410,0,*pDVar7);
          if (hObject == (HANDLE)0x0) {
            auStack_104[0] = 0;
            uVar6 = (*param_1)(*pDVar7,auStack_104,param_2);
          }
          else {
            iVar4 = (*local_114)(hObject,&uStack_110,4,auStack_108);
            if (iVar4 != 0) {
              iVar4 = (*local_10c)(hObject,uStack_110,auStack_104,0x104);
              if (iVar4 == 0) {
                local_114 = (FARPROC)((uint)local_114 & 0xffffff00);
              }
              uVar6 = (*pcStack_c)(*pDVar7,&local_114,uStack_8);
            }
            CloseHandle(hObject);
          }
          if (uVar6 == 0) break;
          local_124 = local_124 + 1;
          pDVar7 = pDVar7 + 1;
        } while (local_124 < (int)uVar5);
      }
    }
LAB_0057ba1e:
    FreeLibrary(hModule);
    if (pMem != (DWORD *)0x0) {
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
    }
  }
  return -1 < local_128;
}


