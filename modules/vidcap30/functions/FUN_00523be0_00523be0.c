/* Module: vidcap30.exe
   Function: FUN_00523be0
   Address: 00523be0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00523be0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  LPVOID pMem;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  HGLOBAL pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  LPCSTR pCVar10;
  uint uVar11;
  int *piVar12;
  undefined4 *puVar13;
  char *pcVar14;
  CHAR *pCVar15;
  int iVar16;
  CHAR *pCVar17;
  LPCVOID local_68c;
  LPCVOID local_688;
  LPCVOID local_684;
  HANDLE local_680;
  HANDLE local_67c;
  HANDLE local_678;
  HANDLE local_674;
  undefined4 *local_670;
  LPVOID local_66c;
  uint local_668;
  int local_664;
  int local_660;
  uint local_65c;
  uint local_658;
  uint local_654;
  uint local_650;
  uint local_64c;
  int local_648;
  int local_644;
  int local_640;
  int local_63c;
  int local_638;
  int local_634;
  uint local_630;
  int local_62c;
  int local_628;
  undefined4 *local_624;
  uint local_620;
  CHAR local_61c [524];
  CHAR local_410 [260];
  CHAR local_30c [260];
  CHAR local_208 [260];
  CHAR local_104 [260];
  
  local_684 = (LPCVOID)0x0;
  local_68c = (LPCVOID)0x0;
  local_688 = (LPCVOID)0x0;
  local_678 = (HANDLE)0x0;
  local_674 = (HANDLE)0x0;
  local_680 = (HANDLE)0x0;
  local_67c = (HANDLE)0x0;
  local_620 = (uint)(ushort)local_620;
  pvVar5 = GlobalAlloc(2,0x5000);
  local_66c = GlobalLock(pvVar5);
  if (local_66c != (LPVOID)0x0) {
    pvVar5 = GlobalAlloc(2,0x5000);
    local_684 = GlobalLock(pvVar5);
    if (local_684 != (LPVOID)0x0) {
      pvVar5 = GlobalAlloc(2,0x5000);
      local_68c = GlobalLock(pvVar5);
      if (local_68c != (LPVOID)0x0) {
        pvVar5 = GlobalAlloc(2,0x5000);
        local_688 = GlobalLock(pvVar5);
        if (local_688 != (LPVOID)0x0) {
          iVar16 = 1;
          WNetOpenEnumA(2,1,0,(LPNETRESOURCEA)0x0,&local_674);
          if (local_674 != (HANDLE)0x0) {
            FUN_00523b50(param_2,0,local_104);
            FUN_00523b50(param_2,1,local_208);
            FUN_00523b50(param_2,2,local_30c);
            local_664 = 1;
            local_660 = 1;
            while (((local_644 = FUN_005233c0(local_674,&local_650,local_66c), local_644 == 0xea ||
                    (local_644 == 0x103)) || (local_644 == 0))) {
              uVar11 = 0;
              if (local_650 != 0) {
                piVar12 = (int *)((int)local_66c + 0x14);
                do {
                  pCVar10 = (LPCSTR)*piVar12;
                  if (pCVar10 == (LPCSTR)0x0) {
                    pCVar10 = (LPCSTR)piVar12[2];
                  }
                  iVar16 = lstrcmpiA(local_104,pCVar10);
                  local_640 = iVar16;
                  if (iVar16 == 0) {
                    if (local_680 != (HANDLE)0x0) {
                      WNetCloseEnum(local_680);
                    }
                    WNetOpenEnumA(2,1,0,(LPNETRESOURCEA)(piVar12 + -5),&local_680);
                    iVar7 = local_660;
                    if (local_680 != (HANDLE)0x0) goto LAB_00523d7c;
                  }
                  uVar11 = uVar11 + 1;
                  piVar12 = piVar12 + 8;
                } while (uVar11 < local_650);
              }
LAB_005240b8:
              if ((local_644 == 0x103) || (iVar16 == 0)) break;
            }
          }
        }
      }
    }
  }
  if (local_678 != (HANDLE)0x0) {
    WNetCloseEnum(local_678);
  }
  if (local_67c != (HANDLE)0x0) {
    WNetCloseEnum(local_67c);
  }
  if (local_680 != (HANDLE)0x0) {
    WNetCloseEnum(local_680);
  }
  if (local_674 != (HANDLE)0x0) {
    WNetCloseEnum(local_674);
  }
  if (local_688 != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(local_688);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(local_688);
    GlobalFree(pvVar5);
  }
  if (local_68c != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(local_68c);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(local_68c);
    GlobalFree(pvVar5);
  }
  if (local_684 != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(local_684);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(local_684);
    GlobalFree(pvVar5);
  }
  pMem = local_66c;
  if (local_66c != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(local_66c);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(pMem);
    GlobalFree(pvVar5);
    return *param_1;
  }
  return *param_1;
LAB_00523d7c:
  iVar6 = FUN_005233c0(local_680,&local_65c,local_684);
  local_648 = iVar6;
  if (((iVar6 != 0xea) && (iVar6 != 0x103)) && (iVar16 = local_640, iVar6 != 0)) goto LAB_005240b8;
  uVar11 = 0;
  local_668 = 0;
  uVar2 = local_668;
  if (local_65c != 0) {
    piVar12 = (int *)((int)local_684 + 0x14);
    do {
      pCVar10 = (LPCSTR)*piVar12;
      if (pCVar10 == (LPCSTR)0x0) {
        pCVar10 = (LPCSTR)piVar12[2];
      }
      iVar7 = lstrcmpiA(local_208,pCVar10);
      local_660 = iVar7;
      if (iVar7 == 0) {
        if (local_67c != (HANDLE)0x0) {
          WNetCloseEnum(local_67c);
        }
        WNetOpenEnumA(2,1,0,(LPNETRESOURCEA)(piVar12 + -5),&local_67c);
        iVar16 = local_664;
        if (local_67c != (HANDLE)0x0) goto LAB_00523e30;
      }
      uVar11 = uVar11 + 1;
      piVar12 = piVar12 + 8;
      uVar2 = uVar11;
    } while (uVar11 < local_65c);
  }
LAB_005240a2:
  local_668 = uVar2;
  iVar16 = local_640;
  if ((iVar6 == 0x103) || (iVar7 == 0)) goto LAB_005240b8;
  goto LAB_00523d7c;
LAB_00523e30:
  local_668 = uVar11;
  iVar8 = FUN_005233c0(local_67c,&local_658,local_68c);
  local_638 = iVar8;
  if (((iVar8 == 0xea) || (iVar8 == 0x103)) ||
     (iVar6 = local_648, iVar7 = local_660, uVar2 = local_668, iVar8 == 0)) {
    uVar11 = 0;
    if (local_658 != 0) {
      puVar13 = (undefined4 *)((int)local_68c + 0x14);
      do {
        pcVar9 = (char *)*puVar13;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = *(char **)(local_668 * 0x20 + 0x1c + (int)local_68c);
        }
        if ((*pcVar9 == '\\') && (pcVar9[1] == '\\')) {
          pcVar9 = pcVar9 + 2;
        }
        iVar16 = lstrcmpiA(local_30c,pcVar9);
        local_664 = iVar16;
        if (iVar16 == 0) {
          if (local_678 != (HANDLE)0x0) {
            WNetCloseEnum(local_678);
          }
          WNetOpenEnumA(2,1,0,(LPNETRESOURCEA)(puVar13 + -5),&local_678);
          if (local_678 != (HANDLE)0x0) goto LAB_00523ef2;
        }
        uVar11 = uVar11 + 1;
        puVar13 = puVar13 + 8;
      } while (uVar11 < local_658);
    }
    goto LAB_0052408a;
  }
  goto LAB_005240a2;
  while( true ) {
    local_654 = 0;
    if (local_64c != 0) {
      local_670 = (undefined4 *)((int)local_688 + 0x14);
      do {
        pcVar9 = (char *)*local_670;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = (char *)local_670[2];
        }
        pcVar14 = pcVar9;
        if ((*pcVar9 == '\\') && (pcVar9[1] == '\\')) {
          pcVar14 = pcVar9 + 2;
          cVar1 = *pcVar14;
          pCVar10 = pcVar14;
          while ((cVar1 != '\0' && (cVar1 != '\\'))) {
            pCVar10 = CharNextA(pCVar10);
            cVar1 = *pCVar10;
          }
          if (*pCVar10 == '\\') {
            pcVar14 = pCVar10 + 1;
          }
        }
        puVar13 = local_670;
        FUN_0049ecb0(pcVar14);
        if (puVar13[1] == 0) {
          iVar16 = wsprintfA(local_410,"%s\t",pcVar9);
          sVar3 = (short)iVar16;
        }
        else {
          iVar16 = wsprintfA(local_410,"%s\t%s",pcVar14,puVar13[1]);
          sVar3 = (short)iVar16;
        }
        uVar4 = sVar3 + 1;
        local_620 = CONCAT22(local_620._2_2_,uVar4);
        pCVar15 = local_410;
        pCVar17 = local_61c;
        for (uVar11 = (uint)(uVar4 >> 2); uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pCVar17 = *(undefined4 *)pCVar15;
          pCVar15 = pCVar15 + 4;
          pCVar17 = pCVar17 + 4;
        }
        for (uVar11 = uVar4 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pCVar17 = *pCVar15;
          pCVar15 = pCVar15 + 1;
          pCVar17 = pCVar17 + 1;
        }
        local_630 = 0x190000;
        iVar16 = FUN_0049ed10(pcVar9);
        if (iVar16 != 0) {
          local_630 = local_630 | 0x20000;
        }
        local_62c = *(int *)(local_63c + 4) + 10;
        local_628 = local_62c;
        local_624 = calloc(1,4);
        *local_624 = 0xd;
        _SfList_AllocAndInsertItem_20(param_1,&local_630,uVar4 + 0x17,0xffffffff,0);
        local_654 = local_654 + 1;
        local_670 = local_670 + 8;
      } while (local_654 < local_64c);
    }
    iVar8 = local_638;
    iVar16 = local_664;
    if (local_634 == 0x103) break;
LAB_00523ef2:
    local_634 = FUN_005233c0(local_678,&local_64c,local_688);
    if (((local_634 != 0xea) && (local_634 != 0x103)) &&
       (iVar8 = local_638, iVar16 = local_664, local_634 != 0)) break;
  }
LAB_0052408a:
  iVar6 = local_648;
  iVar7 = local_660;
  uVar2 = local_668;
  if ((iVar8 == 0x103) || (uVar11 = local_668, iVar16 == 0)) goto LAB_005240a2;
  goto LAB_00523e30;
}


