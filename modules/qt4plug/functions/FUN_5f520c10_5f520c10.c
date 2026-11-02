/* Module: qt4plug.dll
   Function: FUN_5f520c10
   Address: 5f520c10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f520ca2) */
/* WARNING: Removing unreachable block (ram,0x5f520ca8) */
/* WARNING: Removing unreachable block (ram,0x5f520cb3) */
/* WARNING: Removing unreachable block (ram,0x5f52105e) */
/* WARNING: Removing unreachable block (ram,0x5f521085) */
/* WARNING: Removing unreachable block (ram,0x5f52108a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5f520c10(int *param_1)

{
  double *pdVar1;
  double dVar2;
  int *piVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  HWND pHVar7;
  WPARAM WVar8;
  LRESULT LVar9;
  int iVar10;
  LRESULT LVar11;
  uint uVar12;
  undefined4 *puVar13;
  bool bVar14;
  UINT UVar15;
  uchar *puVar16;
  char *pcVar17;
  LPARAM LVar18;
  WPARAM local_ac;
  uint uStack_a8;
  int iStack_9c;
  int iStack_98;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  UINT UStack_70;
  uint uStack_5c;
  UINT UStack_54;
  undefined4 auStack_50 [11];
  uint uStack_24;
  uint uStack_20;
  
  if ((((param_1[10] == 0) || (param_1[0xc] == 0)) || (param_1[4] == 0)) || (param_1[0x13] == 0)) {
    return 0;
  }
  local_ac = 0;
  iVar6 = FUN_5f5782f0();
  if ((iVar6 != 0) && (sVar5 = FUN_5f5781b0(), sVar5 == 0)) {
    local_ac = FUN_5f5782f0();
  }
  WVar8 = 0;
  LVar18 = 0;
  UVar15 = 0xf1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  pHVar7 = GetDlgItem((HWND)param_1[4],0x7d9);
  SendMessageA(pHVar7,UVar15,WVar8,LVar18);
  uStack_5c = 0x200;
  puVar13 = auStack_50;
  for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  iStack_98 = 0x72707a61;
  UStack_54 = 0x14;
  UStack_70 = 0;
  uStack_a8 = 1;
  if (local_ac != 0) {
    iVar6 = FUN_5f5782f0();
    if ((iVar6 != 0) && (sVar5 = FUN_5f5781b0(), sVar5 == 0)) {
      iStack_98 = 0x617a7072;
    }
    iVar6 = FUN_5f5782f0();
    if ((iVar6 != 0) && (sVar5 = FUN_5f5781b0(), sVar5 == 0)) {
      UStack_54 = (uStack_80 & 0xff0000 | uStack_80 >> 0x10) >> 8 |
                  (uStack_80 << 0x10 | uStack_80 & 0xff00) << 8;
      uStack_5c = (uStack_88 & 0xff0000 | uStack_88 >> 0x10) >> 8 |
                  (uStack_88 << 0x10 | uStack_88 & 0xff00) << 8;
    }
    iVar6 = FUN_5f5782f0();
    if ((iVar6 == 0) || ((iStack_98 != 0x53565131 && (iStack_98 != 0x53565133)))) {
      iVar6 = FUN_5f5782f0();
      if ((iVar6 != 0) &&
         ((sVar5 = FUN_5f5781b0(), sVar5 == 0 &&
          (UStack_70 = (uStack_88 >> 0x10 & 0xfc | uStack_88 & 0xff00) >> 2 |
                       (uStack_88 & 0xff) << 0xe, UStack_70 != 0)))) {
        uStack_a8 = 3;
      }
    }
    else {
      sVar5 = FUN_5f5781b0();
      if (sVar5 == 0) {
        uStack_a8 = (uStack_84 & 0xff0000 | uStack_84 >> 0x10) >> 8 |
                    (uStack_84 << 0x10 | uStack_84 & 0xff00) << 8;
        UStack_70 = (uStack_80 & 0xff0000 | uStack_80 >> 0x10) >> 8 |
                    (uStack_80 << 0x10 | uStack_80 & 0xff00) << 8;
      }
    }
  }
  pHVar7 = GetDlgItem((HWND)param_1[4],0x3e9);
  WVar8 = FUN_5f521470(pHVar7,iStack_98);
  SendMessageA(pHVar7,0x14e,WVar8,0);
  LVar9 = SendMessageA(pHVar7,0x150,WVar8,0);
  FUN_5f5808e0();
  param_1[0x1d] = 0;
  iVar6 = param_1[0xc];
  bVar14 = false;
  if ((iVar6 != 0) && (piVar3 = *(int **)(iVar6 + 0x428), piVar3 != (int *)0x0)) {
    iVar10 = piVar3[0x12];
    if ((iVar10 != 0) || (iVar10 = *piVar3, iVar10 != 0)) {
      bVar14 = *(short *)(iVar10 + 0xe) == 0x20;
    }
    dVar2 = *(double *)(piVar3 + 0x18);
    *(double *)(param_1 + 0x14) = dVar2;
    if ((dVar2 < _DAT_5f596c38) || (_DAT_5f596c40 < dVar2)) {
      iVar10 = *(int *)(iVar6 + 0x428);
      param_1[0x14] = *(int *)(iVar10 + 0x18);
      param_1[0x15] = *(int *)(iVar10 + 0x1c);
    }
    if ((*(double *)(param_1 + 0x14) < _DAT_5f596c38) ||
       (_DAT_5f596c40 < *(double *)(param_1 + 0x14))) {
      param_1[0x14] = 0;
      param_1[0x15] = 0x402e0000;
    }
    piVar3 = *(int **)(iVar6 + 0x428);
    pdVar1 = (double *)(piVar3 + 0x1a);
    uStack_88 = *(uint *)pdVar1;
    uStack_84 = piVar3[0x1b];
    if ((*pdVar1 < _DAT_5f596c48) || (_DAT_5f596c50 < *pdVar1)) {
      uStack_88 = piVar3[8];
      uStack_84 = piVar3[9];
    }
    if (((double)CONCAT44(uStack_84,uStack_88) < _DAT_5f596c48) ||
       (_DAT_5f596c50 < (double)CONCAT44(uStack_84,uStack_88))) {
      uStack_88 = 0;
      uStack_84 = 0x3ff00000;
    }
    iStack_9c = piVar3[0x17];
    iVar6 = piVar3[0x12];
    uVar12 = 0;
    iVar10 = 0;
    if (iVar6 != 0) {
      iVar10 = *(int *)(iVar6 + 8);
      uVar12 = *(uint *)(iVar6 + 4);
    }
    iVar6 = *piVar3;
    if (((iVar6 != 0) && (*(int *)(iVar6 + 8) == 0)) && (*(int *)(iVar6 + 4) == 0)) {
      iVar10 = 0;
      uVar12 = 0;
    }
    param_1[0x16] = iVar10 << 0x10 | uVar12 & 0xffff;
  }
  LVar18 = 0;
  uVar12 = (uint)bVar14;
  UVar15 = 0xf1;
  param_1[0x1c] = uStack_20 >> 5 & 1;
  pHVar7 = GetDlgItem((HWND)param_1[4],0x7e8);
  SendMessageA(pHVar7,UVar15,uVar12,LVar18);
  uVar12 = uStack_24 >> 10 & 1;
  param_1[0x1b] = uVar12;
  if ((uVar12 == 0) || (uStack_5c == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  LVar18 = 0;
  uVar12 = (uint)bVar4;
  UVar15 = 0xf1;
  pHVar7 = GetDlgItem((HWND)param_1[4],0x3f0);
  SendMessageA(pHVar7,UVar15,uVar12,LVar18);
  if ((int)UStack_54 < 0) {
    UStack_54 = 0;
  }
  else if (0x7fff < (int)UStack_54) {
    UStack_54 = 0x7fff;
  }
  SetDlgItemInt((HWND)param_1[4],0x3f1,UStack_54,0);
  FUN_5f521710(param_1,*(int *)(LVar9 * 0x2c + 6 + DAT_5f5a3ed4));
  FUN_5f521aa0(param_1,iStack_98,(int)auStack_50,uStack_a8,UStack_70);
  LVar18 = 0;
  WVar8 = 0;
  UVar15 = 0x60e;
  pHVar7 = GetDlgItem((HWND)param_1[4],0x3eb);
  SendMessageA(pHVar7,UVar15,WVar8,LVar18);
  LVar18 = 1000;
  WVar8 = 0;
  UVar15 = 0x60f;
  pHVar7 = GetDlgItem((HWND)param_1[4],0x3eb);
  SendMessageA(pHVar7,UVar15,WVar8,LVar18);
  LVar18 = ftol();
  WVar8 = 1;
  UVar15 = 0x610;
  pHVar7 = GetDlgItem((HWND)param_1[4],0x3eb);
  SendMessageA(pHVar7,UVar15,WVar8,LVar18);
  pcVar17 = "%.1z %%";
  pHVar7 = GetDlgItem((HWND)param_1[4],0x7e9);
  FUN_5f52e2c0(pHVar7,(uchar *)pcVar17);
  WVar8 = FUN_5f5214e0((double)CONCAT44(uStack_84,uStack_88));
  if (WVar8 == 0xffffffff) {
    puVar16 = "%.3f";
    pHVar7 = GetDlgItem((HWND)param_1[4],0x437);
    FUN_5f52e2c0(pHVar7,puVar16);
  }
  else {
    LVar18 = 0;
    UVar15 = 0x14e;
    pHVar7 = GetDlgItem((HWND)param_1[4],0x437);
    SendMessageA(pHVar7,UVar15,WVar8,LVar18);
  }
  pHVar7 = GetDlgItem((HWND)param_1[4],0x436);
  SendMessageA(pHVar7,0x14e,0,0);
  LVar9 = SendMessageA(pHVar7,0x146,0,0);
  local_ac = 0;
  if (0 < LVar9) {
    do {
      LVar11 = SendMessageA(pHVar7,0x150,local_ac,0);
      if (LVar11 == iStack_9c) {
        SendMessageA(pHVar7,0x14e,local_ac,0);
        break;
      }
      local_ac = local_ac + 1;
    } while ((int)local_ac < LVar9);
  }
  FUN_5f522e70((int)param_1);
  FUN_5f522ff0(param_1,0);
  FUN_5f5230c0(param_1,0);
  (**(code **)(*param_1 + 0x54))(0);
  return 1;
}


