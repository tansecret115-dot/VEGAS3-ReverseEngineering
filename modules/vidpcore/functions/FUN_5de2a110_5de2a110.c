/* Module: vidpcore.dll
   Function: FUN_5de2a110
   Address: 5de2a110
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5de2a110(undefined4 *param_1,int *param_2)

{
  SIZE_T *pSVar1;
  char cVar2;
  int *piVar3;
  HGLOBAL pvVar4;
  wchar_t *_Dest;
  int iVar5;
  LPVOID pvVar6;
  LPCSTR lpMultiByteStr;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint unaff_EBP;
  char *pcVar10;
  int *piVar11;
  CHAR *pCVar12;
  char *pcVar13;
  int *piVar14;
  LPCSTR pCVar15;
  SIZE_T SVar16;
  bool bVar17;
  undefined4 local_18 [3];
  int *local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  *(undefined1 *)((int)param_1 + 0x17) = 1;
  param_1[0xf] = 1;
  param_1[0x10] = 1;
  uVar7 = 0xffffffff;
  *param_1 = 100;
  param_1[4] = 400;
  *(undefined1 *)(param_1 + 6) = 7;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  param_1[0x19] = 0x3f800000;
  param_1[0x1a] = 0x3f800000;
  pcVar10 = "Arial";
  do {
    pcVar13 = pcVar10;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar13 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar13;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  pcVar10 = pcVar13 + -uVar7;
  pcVar13 = (char *)(param_1 + 7);
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar13 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar13 = pcVar13 + 1;
  }
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x18] = 0x3f800000;
  param_1[0x1b] = DAT_5df180b0;
  param_1[0x1c] = DAT_5df180b4;
  param_1[0x1d] = DAT_5df180b8;
  param_1[0x1e] = DAT_5df180bc;
  local_4 = DAT_5df1ac54;
  local_c = _DAT_5df1ac4c;
  local_8 = DAT_5df1ac50;
  if ((LPCVOID)param_1[0x20] != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle((LPCVOID)param_1[0x20]);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle((LPCVOID)param_1[0x20]);
    GlobalFree(pvVar4);
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  pvVar4 = GlobalAlloc(0x40,10);
  _Dest = GlobalLock(pvVar4);
  pSVar1 = param_1 + 0x1f;
  param_1[0x20] = _Dest;
  *pSVar1 = 5;
  wcsncpy(_Dest,(wchar_t *)&local_c,5);
  if ((LPCVOID)param_1[0x20] != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle((LPCVOID)param_1[0x20]);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle((LPCVOID)param_1[0x20]);
    GlobalFree(pvVar4);
    *pSVar1 = 0;
    param_1[0x20] = 0;
  }
  *pSVar1 = 0;
  local_18[0] = 0;
  iVar5 = (**(code **)(*param_2 + 0xc))(param_2,param_1,0x7c,local_18);
  piVar3 = local_c;
  if (unaff_EBP < 0x7c) {
LAB_5de2a370:
    if (unaff_EBP - 0x6c < 5) {
      param_1[0x1b] = DAT_5df180b0;
      param_1[0x1c] = DAT_5df180b4;
      param_1[0x1d] = DAT_5df180b8;
      param_1[0x1e] = DAT_5df180bc;
      goto LAB_5de2a4d4;
    }
    SVar16 = param_1[0x1b];
    uVar7 = unaff_EBP - 0x70;
    *pSVar1 = SVar16;
    if (SVar16 != 0) {
      pvVar4 = GlobalAlloc(0x40,SVar16);
      lpMultiByteStr = GlobalLock(pvVar4);
      pCVar12 = (CHAR *)(param_1 + 0x1c);
      pCVar15 = lpMultiByteStr;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pCVar15 = *(undefined4 *)pCVar12;
        pCVar12 = pCVar12 + 4;
        pCVar15 = pCVar15 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pCVar15 = *pCVar12;
        pCVar12 = pCVar12 + 1;
        pCVar15 = pCVar15 + 1;
      }
      if (SVar16 - uVar7 != 0) {
        iVar5 = (**(code **)(*local_c + 0xc))(local_c,lpMultiByteStr + uVar7,SVar16 - uVar7,0);
      }
      SVar16 = *pSVar1;
      iVar9 = 0;
      if (0 < (int)SVar16) {
        do {
          if (lpMultiByteStr[iVar9] == '\0') {
            SVar16 = iVar9 + 1;
            break;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)SVar16);
      }
      if ((LPCVOID)param_1[0x20] != (LPCVOID)0x0) {
        pvVar4 = GlobalHandle((LPCVOID)param_1[0x20]);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle((LPCVOID)param_1[0x20]);
        GlobalFree(pvVar4);
        *pSVar1 = 0;
        param_1[0x20] = 0;
      }
      if (0 < (int)SVar16) {
        pvVar4 = GlobalAlloc(0x40,SVar16 * 2);
        pvVar6 = GlobalLock(pvVar4);
        param_1[0x20] = pvVar6;
      }
      *pSVar1 = SVar16;
      MultiByteToWideChar(0,0,lpMultiByteStr,SVar16,(LPWSTR)param_1[0x20],SVar16);
      *(undefined2 *)(param_1[0x20] + -2 + SVar16 * 2) = 0;
      pvVar4 = GlobalHandle(lpMultiByteStr);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(lpMultiByteStr);
      GlobalFree(pvVar4);
    }
    param_1[0x1b] = DAT_5df180b0;
    param_1[0x1c] = DAT_5df180b4;
    param_1[0x1d] = DAT_5df180b8;
    param_1[0x1e] = DAT_5df180bc;
  }
  else {
    iVar9 = 4;
    bVar17 = true;
    piVar11 = &DAT_5df180b0;
    piVar14 = param_1 + 0x1b;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar17 = *piVar11 == *piVar14;
      piVar11 = piVar11 + 1;
      piVar14 = piVar14 + 1;
    } while (bVar17);
    if (!bVar17) goto LAB_5de2a370;
    if ((iVar5 < 0) || (iVar5 = (**(code **)(*local_c + 0xc))(local_c,pSVar1,4,0), iVar5 < 0))
    goto LAB_5de2a4d4;
    SVar16 = *pSVar1;
    if (0 < (int)SVar16) {
      if ((LPCVOID)param_1[0x20] != (LPCVOID)0x0) {
        pvVar4 = GlobalHandle((LPCVOID)param_1[0x20]);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle((LPCVOID)param_1[0x20]);
        GlobalFree(pvVar4);
        *pSVar1 = 0;
        param_1[0x20] = 0;
      }
      if (0 < (int)SVar16) {
        pvVar4 = GlobalAlloc(0x40,SVar16 * 2);
        pvVar6 = GlobalLock(pvVar4);
        param_1[0x20] = pvVar6;
      }
      *pSVar1 = SVar16;
      if (param_1[0x20] == 0) {
        iVar5 = -0x7ff8fff2;
        goto LAB_5de2a4d4;
      }
    }
    if (0 < (int)*pSVar1) {
      iVar5 = (**(code **)(*piVar3 + 0xc))(piVar3,param_1[0x20],*pSVar1 * 2,0);
    }
  }
  if (-1 < iVar5) {
    return 0;
  }
LAB_5de2a4d4:
  if ((LPCVOID)param_1[0x20] != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle((LPCVOID)param_1[0x20]);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle((LPCVOID)param_1[0x20]);
    GlobalFree(pvVar4);
    *pSVar1 = 0;
    param_1[0x20] = 0;
  }
  *pSVar1 = 0;
  return iVar5;
}


