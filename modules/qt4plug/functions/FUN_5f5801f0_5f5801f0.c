/* Module: qt4plug.dll
   Function: FUN_5f5801f0
   Address: 5f5801f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f5801f0(void)

{
  char cVar1;
  HANDLE hHandle;
  undefined1 *puVar2;
  HMODULE hModule;
  DWORD DVar3;
  UINT UVar4;
  undefined2 uVar6;
  BOOL BVar5;
  uint uVar7;
  int iVar8;
  uint uVar9;
  HMODULE hModule_00;
  char *pcVar10;
  undefined1 *puVar11;
  char *pcVar12;
  char *pcVar13;
  CHAR local_104 [260];
  
  hHandle = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,s_QTMLInitTermMutex_5f5a3e3c);
  if (hHandle != (HANDLE)0x0) {
    WaitForSingleObject(hHandle,0xffffffff);
  }
  if (0 < (int)DAT_5f5c9680) {
    puVar2 = DAT_5f5c9680 + 1;
    puVar11 = (undefined1 *)0x0;
    DAT_5f5c9680 = puVar2;
    goto LAB_5f58039e;
  }
  hModule_00 = (HMODULE)0x0;
  hModule = GetModuleHandleA(s_QuickTime_qts_5f5a3e2c);
  if (hModule == (HMODULE)0x0) {
LAB_5f58025f:
    UVar4 = GetSystemDirectoryA(local_104,0x104);
    if (UVar4 != 0) {
      uVar7 = 0xffffffff;
      pcVar10 = &DAT_5f5a3e28;
      do {
        pcVar13 = pcVar10;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar8 = -1;
      pcVar10 = local_104;
      do {
        pcVar12 = pcVar10;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar12 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      pcVar10 = pcVar13 + -uVar7;
      pcVar13 = pcVar12 + -1;
      for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar10 = s_QuickTime_qts_5f5a3e2c;
      do {
        pcVar13 = pcVar10;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar8 = -1;
      pcVar10 = local_104;
      do {
        pcVar12 = pcVar10;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar12 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      pcVar10 = pcVar13 + -uVar7;
      pcVar13 = pcVar12 + -1;
      for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar13 = pcVar13 + 1;
      }
      hModule_00 = LoadLibraryA(local_104);
    }
  }
  else {
    DVar3 = GetModuleFileNameA(hModule,local_104,0x104);
    if (DVar3 == 0) goto LAB_5f58025f;
    hModule_00 = LoadLibraryA(local_104);
  }
  DAT_5f5c9684 = hModule_00;
  if (hModule_00 == (HMODULE)0x0) {
    GetLastError();
    puVar11 = (undefined1 *)0xfffff7d3;
  }
  else {
    PTR_LAB_5f5a3dd8 = GetProcAddress(hModule_00,s__CallComponentFunctionWithStorag_5f5a3e04);
    if ((FARPROC)PTR_LAB_5f5a3dd8 != (FARPROC)0x0) {
      PTR_LAB_5f5a3dd4 = GetProcAddress(DAT_5f5c9684,s__CallComponent_5f5a3df4);
      if ((FARPROC)PTR_LAB_5f5a3dd4 != (FARPROC)0x0) {
        PTR_LAB_5f5a3dd0 = GetProcAddress(DAT_5f5c9684,s_theQuickTimeDispatcher_5f5a3ddc);
        if ((FARPROC)PTR_LAB_5f5a3dd0 != (FARPROC)0x0) {
          PTR_FUN_5f5a3dcc = (undefined *)0x0;
          puVar2 = (undefined1 *)thunk_FUN_5f578f70();
          puVar11 = puVar2;
          if ((short)puVar2 == 0) {
            DAT_5f5c9680 = DAT_5f5c9680 + 1;
            goto LAB_5f58039e;
          }
          goto LAB_5f580366;
        }
      }
    }
    puVar11 = (undefined1 *)0xfffff7d2;
  }
LAB_5f580366:
  if (DAT_5f5c9684 != (HMODULE)0x0) {
    FreeLibrary(DAT_5f5c9684);
    DAT_5f5c9684 = (HMODULE)0x0;
  }
  puVar2 = &LAB_5f580050;
  PTR_FUN_5f5a3dcc = &LAB_5f5803c0;
  PTR_LAB_5f5a3dd4 = &LAB_5f580050;
  PTR_LAB_5f5a3dd8 = &LAB_5f580050;
  PTR_LAB_5f5a3dd0 = &LAB_5f580050;
LAB_5f58039e:
  uVar6 = (undefined2)((uint)puVar2 >> 0x10);
  if (hHandle != (HANDLE)0x0) {
    ReleaseMutex(hHandle);
    BVar5 = CloseHandle(hHandle);
    uVar6 = (short)((uint)BVar5 >> 0x10);
  }
  return CONCAT22(uVar6,(short)puVar11);
}


