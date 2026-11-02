/* Module: vidcap30.exe
   Function: FUN_00523700
   Address: 00523700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00523700(undefined4 *param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  short sVar2;
  ushort uVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  int iVar6;
  LPCSTR lpString2;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  LPCVOID pMem;
  int *piVar10;
  char *pcVar11;
  CHAR *pCVar12;
  uint uVar13;
  undefined4 *puVar14;
  CHAR *pCVar15;
  HANDLE local_570;
  HANDLE local_56c;
  HANDLE local_568;
  undefined4 *local_564;
  LPVOID local_560;
  LPVOID local_55c;
  LPVOID local_558;
  LPVOID local_554;
  uint local_550;
  uint local_54c;
  int local_548;
  uint local_544;
  int local_540;
  int local_53c;
  int local_538;
  int local_534;
  int local_530;
  undefined4 local_52c;
  int local_528;
  int local_524;
  undefined4 *local_520;
  uint local_51c;
  CHAR local_518 [524];
  CHAR local_30c [260];
  undefined1 local_208 [260];
  CHAR local_104 [260];
  
  pMem = (LPCVOID)0x0;
  local_55c = (LPVOID)0x0;
  local_560 = (LPVOID)0x0;
  local_56c = (HANDLE)0x0;
  local_568 = (HANDLE)0x0;
  local_570 = (HANDLE)0x0;
  local_548 = 1;
  local_540 = 1;
  local_51c = (uint)(ushort)local_51c;
  pvVar4 = GlobalAlloc(2,0x5000);
  pvVar5 = GlobalLock(pvVar4);
  local_554 = pvVar5;
  if (pvVar5 != (LPVOID)0x0) {
    pvVar4 = GlobalAlloc(2,0x5000);
    local_55c = GlobalLock(pvVar4);
    if (local_55c != (LPVOID)0x0) {
      pvVar4 = GlobalAlloc(2,0x5000);
      local_560 = GlobalLock(pvVar4);
      if (local_560 != (LPVOID)0x0) {
        pvVar4 = GlobalAlloc(2,0x5000);
        local_558 = GlobalLock(pvVar4);
        pMem = local_558;
        if ((local_558 != (LPVOID)0x0) &&
           (WNetOpenEnumA(2,1,0,(LPNETRESOURCEA)0x0,&local_568), pMem = local_558,
           local_568 != (HANDLE)0x0)) {
          FUN_00523b50(param_2,0,local_104);
          FUN_00523b50(param_2,1,local_208);
          while (((iVar6 = FUN_005233c0(local_568,&local_54c,pvVar5), local_534 = iVar6,
                  iVar6 == 0xea || (iVar6 == 0x103)) || (pMem = local_558, iVar6 == 0))) {
            uVar13 = 0;
            if (local_54c != 0) {
              piVar10 = (int *)((int)pvVar5 + 0x14);
              do {
                pcVar9 = lstrcmpiA_exref;
                lpString2 = (LPCSTR)*piVar10;
                if (lpString2 == (LPCSTR)0x0) {
                  lpString2 = (LPCSTR)piVar10[2];
                }
                local_540 = lstrcmpiA(local_104,lpString2);
                if (local_540 == 0) {
                  if (local_570 != (HANDLE)0x0) {
                    WNetCloseEnum(local_570);
                  }
                  WNetOpenEnumA(2,1,0,(LPNETRESOURCEA)(piVar10 + -5),&local_570);
                  if (local_570 != (HANDLE)0x0) goto LAB_00523882;
                }
                uVar13 = uVar13 + 1;
                piVar10 = piVar10 + 8;
                pvVar5 = local_554;
              } while (uVar13 < local_54c);
            }
LAB_00523a7d:
            pMem = local_558;
            if ((iVar6 == 0x103) || (local_540 == 0)) break;
          }
        }
      }
    }
  }
  if (local_56c != (HANDLE)0x0) {
    WNetCloseEnum(local_56c);
  }
  if (local_570 != (HANDLE)0x0) {
    WNetCloseEnum(local_570);
  }
  if (local_568 != (HANDLE)0x0) {
    WNetCloseEnum(local_568);
  }
  if (pMem != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(pMem);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pMem);
    GlobalFree(pvVar4);
  }
  pvVar5 = local_560;
  if (local_560 != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(local_560);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pvVar5);
    GlobalFree(pvVar4);
  }
  pvVar5 = local_55c;
  if (local_55c != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(local_55c);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pvVar5);
    GlobalFree(pvVar4);
  }
  pvVar5 = local_554;
  if (local_554 == (LPCVOID)0x0) {
    return *param_1;
  }
  pvVar4 = GlobalHandle(local_554);
  GlobalUnlock(pvVar4);
  pvVar4 = GlobalHandle(pvVar5);
  GlobalFree(pvVar4);
  return *param_1;
LAB_00523882:
  pvVar1 = local_55c;
  iVar7 = FUN_005233c0(local_570,&local_544,local_55c);
  local_53c = iVar7;
  if (((iVar7 == 0xea) || (iVar7 == 0x103)) || (pvVar5 = local_554, iVar6 = local_534, iVar7 == 0))
  {
    uVar13 = 0;
    if (local_544 != 0) {
      piVar10 = (int *)((int)pvVar1 + 0x14);
      do {
        iVar6 = *piVar10;
        if (iVar6 == 0) {
          iVar6 = piVar10[2];
        }
        local_548 = (*pcVar9)(local_208,iVar6);
        if (local_548 == 0) {
          if (local_56c != (HANDLE)0x0) {
            WNetCloseEnum(local_56c);
          }
          WNetOpenEnumA(2,1,0,(LPNETRESOURCEA)(piVar10 + -5),&local_56c);
          if (local_56c != (HANDLE)0x0) goto LAB_0052391c;
        }
        uVar13 = uVar13 + 1;
        piVar10 = piVar10 + 8;
      } while (uVar13 < local_544);
    }
    goto LAB_00523a61;
  }
  goto LAB_00523a7d;
  while( true ) {
    uVar13 = 0;
    if (local_550 != 0) {
      puVar14 = (undefined4 *)((int)pvVar5 + 0x14);
      do {
        pcVar11 = (char *)*puVar14;
        if (pcVar11 == (char *)0x0) {
          pcVar11 = (char *)puVar14[2];
        }
        if ((*pcVar11 == '\\') && (pcVar11[1] == '\\')) {
          pcVar11 = pcVar11 + 2;
        }
        local_564 = puVar14;
        FUN_0049ecb0(pcVar11);
        if (puVar14[1] == 0) {
          iVar6 = wsprintfA(local_30c,"%s\t",pcVar11);
          sVar2 = (short)iVar6;
        }
        else {
          iVar6 = wsprintfA(local_30c,"%s\t%s",pcVar11,puVar14[1]);
          sVar2 = (short)iVar6;
        }
        uVar3 = sVar2 + 1;
        local_51c = CONCAT22(local_51c._2_2_,uVar3);
        pCVar12 = local_30c;
        pCVar15 = local_518;
        for (uVar8 = (uint)(uVar3 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pCVar15 = *(undefined4 *)pCVar12;
          pCVar12 = pCVar12 + 4;
          pCVar15 = pCVar15 + 4;
        }
        local_528 = *(int *)(local_530 + 4) + 6;
        for (uVar8 = uVar3 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pCVar15 = *pCVar12;
          pCVar12 = pCVar12 + 1;
          pCVar15 = pCVar15 + 1;
        }
        local_52c = 0x1f0000;
        local_524 = local_528;
        local_520 = calloc(1,4);
        *local_520 = 0xc;
        _SfList_AllocAndInsertItem_20(param_1,&local_52c,uVar3 + 0x17,0xffffffff,0);
        uVar13 = uVar13 + 1;
        puVar14 = local_564 + 8;
        iVar7 = local_53c;
        local_564 = puVar14;
      } while (uVar13 < local_550);
    }
    pcVar9 = lstrcmpiA_exref;
    if (local_538 == 0x103) break;
LAB_0052391c:
    pvVar5 = local_560;
    local_538 = FUN_005233c0(local_56c,&local_550,local_560);
    if (((local_538 != 0xea) && (local_538 != 0x103)) && (pcVar9 = lstrcmpiA_exref, local_538 != 0))
    break;
  }
LAB_00523a61:
  pvVar5 = local_554;
  iVar6 = local_534;
  if ((iVar7 == 0x103) || (local_548 == 0)) goto LAB_00523a7d;
  goto LAB_00523882;
}


