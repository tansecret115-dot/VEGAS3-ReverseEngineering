/* Module: qt4plug.dll
   Function: FUN_5f5800a0
   Address: 5f5800a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f5800a0(void)

{
  char cVar1;
  bool bVar2;
  HMODULE hModule;
  DWORD DVar3;
  UINT UVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  HMODULE pHVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  CHAR local_104 [260];
  
  bVar2 = false;
  if (DAT_5f5c9684 == (HMODULE)0x0) {
    pHVar8 = (HMODULE)0x0;
    hModule = GetModuleHandleA(s_QuickTime_qts_5f5a3e2c);
    if ((hModule == (HMODULE)0x0) ||
       (DVar3 = GetModuleFileNameA(hModule,local_104,0x104), DVar3 == 0)) {
      UVar4 = GetSystemDirectoryA(local_104,0x104);
      if (UVar4 != 0) {
        uVar5 = 0xffffffff;
        pcVar9 = &DAT_5f5a3e28;
        do {
          pcVar11 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar11 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar6 = -1;
        pcVar9 = local_104;
        do {
          pcVar10 = pcVar9;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar10 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar1 != '\0');
        pcVar9 = pcVar11 + -uVar5;
        pcVar11 = pcVar10 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar9 = s_QuickTime_qts_5f5a3e2c;
        do {
          pcVar11 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar11 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar6 = -1;
        pcVar9 = local_104;
        do {
          pcVar10 = pcVar9;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar10 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar1 != '\0');
        pcVar9 = pcVar11 + -uVar5;
        pcVar11 = pcVar10 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
        pHVar8 = LoadLibraryA(local_104);
      }
    }
    else {
      pHVar8 = LoadLibraryA(local_104);
    }
    if (pHVar8 == (HMODULE)0x0) {
      DAT_5f5c9684 = pHVar8;
      return;
    }
    bVar2 = true;
    DAT_5f5c9684 = pHVar8;
  }
  PTR_LAB_5f5a3dd8 = GetProcAddress(DAT_5f5c9684,s__CallComponentFunctionWithStorag_5f5a3e04);
  if ((((FARPROC)PTR_LAB_5f5a3dd8 != (FARPROC)0x0) &&
      (PTR_LAB_5f5a3dd4 = GetProcAddress(DAT_5f5c9684,s__CallComponent_5f5a3df4),
      (FARPROC)PTR_LAB_5f5a3dd4 != (FARPROC)0x0)) &&
     (PTR_LAB_5f5a3dd0 = GetProcAddress(DAT_5f5c9684,s_theQuickTimeDispatcher_5f5a3ddc),
     (FARPROC)PTR_LAB_5f5a3dd0 != (FARPROC)0x0)) {
    PTR_FUN_5f5a3dcc = (undefined *)0x0;
  }
  if (bVar2) {
    FreeLibrary(DAT_5f5c9684);
    DAT_5f5c9684 = (HMODULE)0x0;
  }
  return;
}


