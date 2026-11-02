/* Module: vidpcore.dll
   Function: FUN_5de8d860
   Address: 5de8d860
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de8d860(int param_1)

{
  byte bVar1;
  HWND pHVar2;
  LRESULT LVar3;
  HGLOBAL pvVar4;
  wchar_t *_Str1;
  byte *pbVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  byte *pbVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  UINT UVar16;
  LPARAM LVar17;
  WPARAM WVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined *puStack_150;
  int **ppiStack_14c;
  undefined4 uStack_138;
  char acStack_134 [4];
  int *local_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  
  puVar20 = (undefined4 *)**(int **)(param_1 + 8);
  local_130 = (int *)0x0;
  if (puVar20 != (undefined4 *)0x0) {
    ppiStack_14c = &local_130;
    puStack_150 = &DAT_5df17c20;
    (**(code **)*puVar20)(puVar20);
  }
  puStack_150 = (undefined *)(param_1 + 0x4c);
  ppiStack_14c = (int **)0x84;
  (**(code **)(*local_130 + 0x20))(local_130);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x592);
  uStack_118 = 0;
  uStack_114 = 0x4b0;
  LVar3 = SendMessageA(pHVar2,0x45f,(WPARAM)&uStack_118,0);
  iVar8 = LVar3 + 1;
  if (((*(int *)(param_1 + 0xd8) == *(int *)(param_1 + 200)) && (iVar8 == *(int *)(param_1 + 0xd8)))
     && (iVar8 != 0)) {
    pvVar4 = GlobalAlloc(0x42,LVar3 + 3 + iVar8);
    _Str1 = GlobalLock(pvVar4);
    iStack_12c = iVar8 * 2;
    iStack_128 = 0;
    uStack_124 = 0x4b0;
    uStack_120 = 0;
    uStack_11c = 0;
    SendMessageA(pHVar2,0x45e,(WPARAM)&iStack_12c,(LPARAM)_Str1);
    iVar8 = wcscmp(_Str1,*(wchar_t **)(param_1 + 0xcc));
    if (_Str1 != (wchar_t *)0x0) {
      pvVar4 = GlobalHandle(_Str1);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(_Str1);
      GlobalFree(pvVar4);
    }
    if (iVar8 != 0) goto LAB_5de8d98b;
  }
  else {
LAB_5de8d98b:
    if (*(int *)(param_1 + 0xcc) != 0) {
      uStack_138 = (int *)0x0;
      iStack_128 = *(int *)(param_1 + 200) * 2;
      local_130 = (int *)0x0;
      uStack_124 = 0;
      if (iStack_128 < 1) {
        puVar20 = (undefined4 *)0x0;
        WVar18 = 0;
        UVar16 = 0xc;
      }
      else {
        puVar20 = &uStack_138;
        uStack_138 = &iStack_12c;
        WVar18 = 0x11;
        local_130 = (int *)&LAB_5de8dda0;
        UVar16 = 0x449;
      }
      acStack_134[0] = '\0';
      acStack_134[1] = '\0';
      acStack_134[2] = '\0';
      acStack_134[3] = '\0';
      iStack_12c = *(int *)(param_1 + 0xcc);
      SendMessageA(pHVar2,UVar16,WVar18,(LPARAM)puVar20);
      SendMessageA(pHVar2,0xb9,0,0);
    }
  }
  pcVar7 = GetDlgItem_exref;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x518);
  iVar8 = **(int **)(param_1 + 0xd0);
  WVar18 = SendMessageA(pHVar2,0x147,0,0);
  if (0 < iVar8) {
    if (WVar18 != 0xffffffff) {
      LVar3 = SendMessageA(pHVar2,0x150,WVar18,0);
      pbVar9 = (byte *)(param_1 + 0x68);
      pbVar5 = (byte *)(*(int *)(*(int *)(param_1 + 0xd0) + 4) * LVar3 + 0x1c +
                       *(int *)(*(int *)(param_1 + 0xd0) + 8));
      do {
        bVar1 = *pbVar5;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_5de8da78:
          iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_5de8da7d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_5de8da78;
        pbVar5 = pbVar5 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_5de8da7d:
      if (iVar6 == 0) goto LAB_5de8db9f;
    }
    WVar18 = 0;
    if (0 < iVar8) {
      do {
        LVar3 = SendMessageA(pHVar2,0x150,WVar18,0);
        pbVar9 = (byte *)(param_1 + 0x68);
        pbVar5 = (byte *)(*(int *)(*(int *)(param_1 + 0xd0) + 4) * LVar3 + 0x1c +
                         *(int *)(*(int *)(param_1 + 0xd0) + 8));
        do {
          bVar1 = *pbVar5;
          bVar10 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_5de8dad9:
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_5de8dade;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar10 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_5de8dad9;
          pbVar5 = pbVar5 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_5de8dade:
        if (iVar6 == 0) goto LAB_5de8db97;
        WVar18 = WVar18 + 1;
      } while ((int)WVar18 < iVar8);
    }
    uStack_138 = (int *)s_Arial_5df1ac58._0_4_;
    WVar18 = 0;
    acStack_134[0] = s_Arial_5df1ac58[4];
    acStack_134[1] = s_Arial_5df1ac58[5];
    if (0 < iVar8) {
      do {
        LVar3 = SendMessageA(pHVar2,0x150,WVar18,0);
        pbVar5 = (byte *)&uStack_138;
        pbVar9 = (byte *)(*(int *)(*(int *)(param_1 + 0xd0) + 4) * LVar3 + 0x1c +
                         *(int *)(*(int *)(param_1 + 0xd0) + 8));
        do {
          bVar1 = *pbVar9;
          bVar10 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_5de8db59:
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_5de8db5e;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar9[1];
          bVar10 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_5de8db59;
          pbVar9 = pbVar9 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_5de8db5e:
        if (iVar6 == 0) goto LAB_5de8db97;
        WVar18 = WVar18 + 1;
      } while ((int)WVar18 < iVar8);
    }
    WVar18 = 0;
LAB_5de8db97:
    SendMessageA(pHVar2,0x14e,WVar18,0);
    pcVar7 = GetDlgItem_exref;
  }
LAB_5de8db9f:
  if (*(int *)(param_1 + 0xd4) == 0) {
    CheckRadioButton(*(HWND *)(param_1 + 0x30),0x51c,0x51d,0x51d);
    iVar8 = param_1 + 0x90;
  }
  else {
    CheckRadioButton(*(HWND *)(param_1 + 0x30),0x51c,0x51d,0x51c);
    iVar8 = param_1 + 0xa0;
  }
  UVar16 = *(UINT *)(param_1 + 0x30);
  uVar19 = 0;
  LVar17 = 0x703;
  WVar18 = 0x499;
  pHVar2 = (HWND)(*pcVar7)();
  SendMessageA(pHVar2,UVar16,WVar18,LVar17);
  LVar17 = *(LPARAM *)(param_1 + 0x4c);
  pHVar2 = (HWND)(*pcVar7)(*(undefined4 *)(param_1 + 0x30),0x51b,uVar19,iVar8);
  SendMessageA(pHVar2,0x610,0,LVar17);
  SetDlgItemInt(*(HWND *)(param_1 + 0x30),0x51a,*(UINT *)(param_1 + 0x4c),1);
  UVar16 = *(UINT *)(param_1 + 0x30);
  LVar17 = 0x14e;
  WVar18 = 0x519;
  pHVar2 = (HWND)(*pcVar7)();
  SendMessageA(pHVar2,UVar16,WVar18,LVar17);
  uVar19 = *(undefined4 *)(param_1 + 0x88);
  UVar16 = *(UINT *)(param_1 + 0x30);
  uVar15 = 0;
  LVar17 = 0x14e;
  WVar18 = 0x496;
  pHVar2 = (HWND)(*pcVar7)();
  SendMessageA(pHVar2,UVar16,WVar18,LVar17);
  uVar12 = *(undefined4 *)(param_1 + 0x8c);
  UVar16 = *(UINT *)(param_1 + 0x30);
  uVar14 = 0;
  LVar17 = 0x14e;
  WVar18 = 0x495;
  pHVar2 = (HWND)(*pcVar7)();
  SendMessageA(pHVar2,UVar16,WVar18,LVar17);
  uVar19 = ftol(uVar12,uVar14,uVar19,uVar15);
  UVar16 = *(UINT *)(param_1 + 0x30);
  piVar13 = (int *)0x1;
  LVar17 = 0x610;
  WVar18 = 0x520;
  pHVar2 = (HWND)(*pcVar7)();
  SendMessageA(pHVar2,UVar16,WVar18,LVar17);
  uVar19 = ftol(piVar13,uVar19);
  UVar16 = *(UINT *)(param_1 + 0x30);
  uVar12 = 1;
  LVar17 = 0x610;
  WVar18 = 0x521;
  pHVar2 = (HWND)(*pcVar7)();
  SendMessageA(pHVar2,UVar16,WVar18,LVar17);
  FUN_5deb5050(&stack0xfffffeb8,&DAT_5df1f2f8,(double)*(float *)(param_1 + 0xb0),uVar12,uVar19);
  uVar19 = *(undefined4 *)(param_1 + 0x30);
  uVar11 = CONCAT44(&stack0xfffffeb8,0x569);
  uVar12 = (*pcVar7)();
  FUN_5deb6a10(uVar12,uVar19,uVar11);
  FUN_5deb5050(&puStack_150,&DAT_5df1f2f8,(double)*(float *)(param_1 + 0xb4));
  uVar19 = (*pcVar7)(*(undefined4 *)(param_1 + 0x30),0x56a,&puStack_150);
  FUN_5deb6a10(uVar19);
  if (piVar13 != (int *)0x0) {
    (**(code **)(*piVar13 + 8))();
  }
  return;
}


