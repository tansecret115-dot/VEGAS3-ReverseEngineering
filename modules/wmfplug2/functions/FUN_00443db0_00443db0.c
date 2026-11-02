/* Module: wmfplug2.dll
   Function: FUN_00443db0
   Address: 00443db0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00443db0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  LPCVOID pvVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  SIZE_T dwBytes;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  code *pcVar10;
  int *piVar11;
  undefined4 *puVar12;
  code *pcVar13;
  int *piVar14;
  undefined4 *puVar15;
  
  if ((param_2 == (undefined4 *)0x0) || (param_3 == 0)) {
    return 0x80070057;
  }
  *param_2 = 0x42c;
  param_2[1] = *(undefined4 *)(param_3 + 4);
  param_2[2] = *(undefined4 *)(param_3 + 8);
  wcsncpy((wchar_t *)(param_2 + 5),(wchar_t *)(param_3 + 0x14),0x104);
  wcsncpy((wchar_t *)(param_2 + 0x87),(wchar_t *)(param_3 + 0x21c),0x104);
  pcVar10 = GlobalHandle_exref;
  pcVar13 = GlobalUnlock_exref;
  iVar8 = param_2[0x109];
  if (*(int *)(param_3 + 0x424) == 0) {
    if (iVar8 != 0) {
      if (*(LPCVOID *)(iVar8 + 0x16) != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(*(LPCVOID *)(iVar8 + 0x16));
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x109] + 0x16));
        GlobalFree(pvVar3);
      }
      if (*(LPCVOID *)(param_2[0x109] + 0x3e) != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x109] + 0x3e));
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x109] + 0x3e));
        GlobalFree(pvVar3);
      }
      pvVar3 = GlobalHandle((LPCVOID)param_2[0x109]);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle((LPCVOID)param_2[0x109]);
      GlobalFree(pvVar3);
      param_2[0x109] = 0;
    }
  }
  else {
    if (iVar8 == 0) {
      pvVar3 = GlobalAlloc(0x42,0x42);
      pvVar4 = GlobalLock(pvVar3);
      param_2[0x109] = pvVar4;
      if (pvVar4 == (LPVOID)0x0) {
        return 0x8007000e;
      }
    }
    puVar12 = *(undefined4 **)(param_3 + 0x424);
    puVar15 = (undefined4 *)param_2[0x109];
    *puVar15 = *puVar12;
    puVar15[1] = puVar12[1];
    puVar15[2] = puVar12[2];
    puVar15[3] = puVar12[3];
    *(undefined2 *)(puVar15 + 4) = *(undefined2 *)(puVar12 + 4);
    *(undefined4 *)(param_2[0x109] + 0x12) = *(undefined4 *)(*(int *)(param_3 + 0x424) + 0x12);
    if (*(LPCVOID *)(param_2[0x109] + 0x16) != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x109] + 0x16));
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x109] + 0x16));
      GlobalFree(pvVar3);
      *(undefined4 *)(param_2[0x109] + 0x16) = 0;
    }
    psVar9 = *(short **)(*(int *)(param_3 + 0x424) + 0x16);
    if (psVar9 != (short *)0x0) {
      if (((*psVar9 == 3) || (*psVar9 == 1)) || (dwBytes = (ushort)psVar9[8] + 0x12, dwBytes < 0x12)
         ) {
        dwBytes = 0x12;
      }
      pvVar3 = GlobalAlloc(0x42,dwBytes);
      pvVar4 = GlobalLock(pvVar3);
      *(LPVOID *)(param_2[0x109] + 0x16) = pvVar4;
      if (*(undefined4 **)(param_2[0x109] + 0x16) == (undefined4 *)0x0) {
        return 0x8007000e;
      }
      psVar9 = *(short **)(*(int *)(param_3 + 0x424) + 0x16);
      if ((*psVar9 == 3) || (*psVar9 == 1)) {
        uVar6 = 0x10;
      }
      else {
        uVar6 = (ushort)psVar9[8] + 0x12;
      }
      puVar12 = *(undefined4 **)(param_2[0x109] + 0x16);
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar12 = *(undefined4 *)psVar9;
        psVar9 = psVar9 + 2;
        puVar12 = puVar12 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)puVar12 = (char)*psVar9;
        psVar9 = (short *)((int)psVar9 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
    }
    puVar12 = (undefined4 *)(*(int *)(param_3 + 0x424) + 0x1a);
    puVar15 = (undefined4 *)(param_2[0x109] + 0x1a);
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar15 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar15 = puVar15 + 1;
    }
    uVar6 = *(uint *)(*(int *)(param_3 + 0x424) + 0x3a);
    if ((uVar6 == 0) || (*(int *)(*(int *)(param_3 + 0x424) + 0x3e) == 0)) {
      if (*(LPCVOID *)(param_2[0x109] + 0x3e) != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x109] + 0x3e));
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x109] + 0x3e));
        GlobalFree(pvVar3);
      }
      *(undefined4 *)(param_2[0x109] + 0x3e) = 0;
      *(undefined4 *)(param_2[0x109] + 0x3a) = 0;
      pcVar10 = GlobalHandle_exref;
      pcVar13 = GlobalUnlock_exref;
    }
    else {
      if (*(uint *)(param_2[0x109] + 0x3a) < uVar6) {
        pvVar1 = *(LPCVOID *)(param_2[0x109] + 0x3e);
        if (pvVar1 != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle(pvVar1);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x109] + 0x3e));
          GlobalFree(pvVar3);
        }
        pvVar3 = GlobalAlloc(0x42,*(SIZE_T *)(*(int *)(param_3 + 0x424) + 0x3a));
        pvVar4 = GlobalLock(pvVar3);
        *(LPVOID *)(param_2[0x109] + 0x3e) = pvVar4;
        if (*(int *)(param_2[0x109] + 0x3e) != 0) {
          *(undefined4 *)(param_2[0x109] + 0x3a) = *(undefined4 *)(*(int *)(param_3 + 0x424) + 0x3a)
          ;
        }
      }
      pcVar10 = GlobalHandle_exref;
      pcVar13 = GlobalUnlock_exref;
      if (*(undefined4 **)(param_2[0x109] + 0x3e) != (undefined4 *)0x0) {
        uVar6 = *(uint *)(*(int *)(param_3 + 0x424) + 0x3a);
        puVar12 = *(undefined4 **)(*(int *)(param_3 + 0x424) + 0x3e);
        puVar15 = *(undefined4 **)(param_2[0x109] + 0x3e);
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar15 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar6 = uVar6 & 3; pcVar10 = GlobalHandle_exref, pcVar13 = GlobalUnlock_exref,
            uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar15 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
      }
    }
  }
  piVar11 = (int *)param_2[0x10a];
  if (*(int *)(param_3 + 0x428) == 0) {
    if (piVar11 != (int *)0x0) {
      if (*piVar11 != 0) {
        uVar5 = (*pcVar10)(*piVar11);
        (*pcVar13)(uVar5);
        pvVar3 = (HGLOBAL)(*pcVar10)(*(undefined4 *)param_2[0x10a]);
        GlobalFree(pvVar3);
      }
      if (*(int *)(param_2[0x10a] + 0x48) != 0) {
        uVar5 = (*pcVar10)(*(int *)(param_2[0x10a] + 0x48));
        (*pcVar13)(uVar5);
        pvVar3 = (HGLOBAL)(*pcVar10)(*(undefined4 *)(param_2[0x10a] + 0x48));
        GlobalFree(pvVar3);
      }
      if (*(int *)(param_2[0x10a] + 0x94) != 0) {
        uVar5 = (*pcVar10)(*(int *)(param_2[0x10a] + 0x94));
        (*pcVar13)(uVar5);
        pvVar3 = (HGLOBAL)(*pcVar10)(*(undefined4 *)(param_2[0x10a] + 0x94));
        GlobalFree(pvVar3);
      }
      uVar5 = (*pcVar10)(param_2[0x10a]);
      (*pcVar13)(uVar5);
      pvVar3 = (HGLOBAL)(*pcVar10)(param_2[0x10a]);
      GlobalFree(pvVar3);
      param_2[0x10a] = 0;
    }
  }
  else {
    if (piVar11 == (int *)0x0) {
      pvVar3 = GlobalAlloc(0x42,0x98);
      pvVar4 = GlobalLock(pvVar3);
      param_2[0x10a] = pvVar4;
      if (pvVar4 == (LPVOID)0x0) {
        return 0x8007000e;
      }
    }
    if (*(int *)param_2[0x10a] != 0) {
      uVar5 = (*pcVar10)(*(int *)param_2[0x10a]);
      (*pcVar13)(uVar5);
      pvVar3 = (HGLOBAL)(*pcVar10)(*(undefined4 *)param_2[0x10a]);
      GlobalFree(pvVar3);
    }
    *(undefined4 *)param_2[0x10a] = 0;
    piVar11 = (int *)**(int **)(param_3 + 0x428);
    if (piVar11 != (int *)0x0) {
      if (piVar11[4] == 3) {
        iVar8 = 0xc;
      }
      else {
        iVar8 = piVar11[8] << 2;
      }
      pvVar3 = GlobalAlloc(0x42,*piVar11 + iVar8);
      pvVar4 = GlobalLock(pvVar3);
      *(LPVOID *)param_2[0x10a] = pvVar4;
      piVar11 = (int *)**(undefined4 **)(param_3 + 0x428);
      if (piVar11[4] == 3) {
        iVar8 = 0xc;
      }
      else {
        iVar8 = piVar11[8] << 2;
      }
      iVar2 = *piVar11;
      piVar14 = *(int **)param_2[0x10a];
      for (uVar6 = (uint)(iVar2 + iVar8) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *piVar14 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar14 = piVar14 + 1;
      }
      for (uVar6 = iVar2 + iVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)piVar14 = (char)*piVar11;
        piVar11 = (int *)((int)piVar11 + 1);
        piVar14 = (int *)((int)piVar14 + 1);
      }
      if (*(int *)param_2[0x10a] == 0) {
        if (param_2[0x109] != 0) {
          pvVar1 = *(LPCVOID *)(param_2[0x109] + 0x16);
          if (pvVar1 != (LPCVOID)0x0) {
            pvVar3 = GlobalHandle(pvVar1);
            GlobalUnlock(pvVar3);
            pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x109] + 0x16));
            GlobalFree(pvVar3);
            *(undefined4 *)(param_2[0x109] + 0x16) = 0;
          }
          if (*(LPCVOID *)(param_2[0x109] + 0x3e) != (LPCVOID)0x0) {
            pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x109] + 0x3e));
            GlobalUnlock(pvVar3);
            pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x109] + 0x3e));
            GlobalFree(pvVar3);
            *(undefined4 *)(param_2[0x109] + 0x3e) = 0;
          }
        }
        return 0x8007000e;
      }
    }
    *(undefined4 *)(param_2[0x10a] + 4) = *(undefined4 *)(*(int *)(param_3 + 0x428) + 4);
    puVar12 = (undefined4 *)(*(int *)(param_3 + 0x428) + 8);
    puVar15 = (undefined4 *)(param_2[0x10a] + 8);
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar15 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar15 = puVar15 + 1;
    }
    if (*(LPCVOID *)(param_2[0x10a] + 0x48) != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x10a] + 0x48));
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x10a] + 0x48));
      GlobalFree(pvVar3);
    }
    *(undefined4 *)(param_2[0x10a] + 0x48) = 0;
    piVar11 = *(int **)(*(int *)(param_3 + 0x428) + 0x48);
    if (piVar11 != (int *)0x0) {
      if (piVar11[4] == 3) {
        iVar8 = 0xc;
      }
      else {
        iVar8 = piVar11[8] << 2;
      }
      pvVar3 = GlobalAlloc(0x42,iVar8 + *piVar11);
      pvVar4 = GlobalLock(pvVar3);
      *(LPVOID *)(param_2[0x10a] + 0x48) = pvVar4;
      piVar11 = *(int **)(*(int *)(param_3 + 0x428) + 0x48);
      if (piVar11[4] == 3) {
        iVar8 = 0xc;
      }
      else {
        iVar8 = piVar11[8] << 2;
      }
      iVar2 = *piVar11;
      piVar14 = *(int **)(param_2[0x10a] + 0x48);
      for (uVar6 = (uint)(iVar8 + iVar2) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *piVar14 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar14 = piVar14 + 1;
      }
      for (uVar6 = iVar8 + iVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)piVar14 = (char)*piVar11;
        piVar11 = (int *)((int)piVar11 + 1);
        piVar14 = (int *)((int)piVar14 + 1);
      }
      if (*(int *)(param_2[0x10a] + 0x48) == 0) {
        if (param_2[0x109] != 0) {
          pvVar1 = *(LPCVOID *)(param_2[0x109] + 0x16);
          if (pvVar1 != (LPCVOID)0x0) {
            pvVar3 = GlobalHandle(pvVar1);
            GlobalUnlock(pvVar3);
            pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x109] + 0x16));
            GlobalFree(pvVar3);
            *(undefined4 *)(param_2[0x109] + 0x16) = 0;
          }
          if (*(LPCVOID *)(param_2[0x109] + 0x3e) != (LPCVOID)0x0) {
            pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x109] + 0x3e));
            GlobalUnlock(pvVar3);
            pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x109] + 0x3e));
            GlobalFree(pvVar3);
            *(undefined4 *)(param_2[0x109] + 0x3e) = 0;
          }
        }
        if (*(LPCVOID *)param_2[0x10a] != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle(*(LPCVOID *)param_2[0x10a]);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(*(LPCVOID *)param_2[0x10a]);
          GlobalFree(pvVar3);
        }
        *(undefined4 *)param_2[0x10a] = 0;
        return 0x8007000e;
      }
    }
    *(undefined4 *)(param_2[0x10a] + 0x4c) = *(undefined4 *)(*(int *)(param_3 + 0x428) + 0x4c);
    puVar12 = (undefined4 *)(*(int *)(param_3 + 0x428) + 0x50);
    puVar15 = (undefined4 *)(param_2[0x10a] + 0x50);
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar15 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar15 = puVar15 + 1;
    }
    uVar6 = *(uint *)(*(int *)(param_3 + 0x428) + 0x90);
    if ((uVar6 == 0) || (*(int *)(*(int *)(param_3 + 0x428) + 0x94) == 0)) {
      if (*(LPCVOID *)(param_2[0x10a] + 0x94) != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x10a] + 0x94));
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x10a] + 0x94));
        GlobalFree(pvVar3);
      }
      *(undefined4 *)(param_2[0x10a] + 0x94) = 0;
      *(undefined4 *)(param_2[0x10a] + 0x90) = 0;
      return 0;
    }
    if (*(uint *)(param_2[0x10a] + 0x90) < uVar6) {
      pvVar1 = *(LPCVOID *)(param_2[0x10a] + 0x94);
      if (pvVar1 != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(pvVar1);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)(param_2[0x10a] + 0x94));
        GlobalFree(pvVar3);
      }
      pvVar3 = GlobalAlloc(0x42,*(SIZE_T *)(*(int *)(param_3 + 0x428) + 0x90));
      pvVar4 = GlobalLock(pvVar3);
      *(LPVOID *)(param_2[0x10a] + 0x94) = pvVar4;
      if (*(int *)(param_2[0x10a] + 0x94) != 0) {
        *(undefined4 *)(param_2[0x10a] + 0x90) = *(undefined4 *)(*(int *)(param_3 + 0x428) + 0x90);
      }
    }
    if (*(undefined4 **)(param_2[0x10a] + 0x94) != (undefined4 *)0x0) {
      uVar6 = *(uint *)(*(int *)(param_3 + 0x428) + 0x90);
      puVar12 = *(undefined4 **)(*(int *)(param_3 + 0x428) + 0x94);
      puVar15 = *(undefined4 **)(param_2[0x10a] + 0x94);
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar15 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar15 = puVar15 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar15 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      return 0;
    }
  }
  return 0;
}


