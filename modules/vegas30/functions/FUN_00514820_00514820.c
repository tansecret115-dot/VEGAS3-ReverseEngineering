/* Module: vegas30.exe
   Function: FUN_00514820
   Address: 00514820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00514820(int *param_1)

{
  int iVar1;
  HWND hWnd;
  HCURSOR hCursor;
  HCURSOR pHVar2;
  HMENU hMenu;
  LPCSTR pCVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  HMENU hMenu_00;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float10 fVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int *piVar14;
  undefined4 uVar15;
  float local_c0;
  int local_b8;
  int local_b4;
  undefined4 *local_b0;
  HCURSOR local_ac;
  tagPOINT local_a8;
  undefined1 local_a0 [4];
  undefined1 local_9c [24];
  double local_84;
  undefined1 local_5c [64];
  float local_1c;
  float local_18;
  
  hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
  local_ac = hCursor;
  pHVar2 = GetCursor();
  if (pHVar2 != hCursor) {
    local_ac = SetCursor(hCursor);
  }
  hMenu = CreatePopupMenu();
  GetCursorPos(&local_a8);
  local_a8.y = local_a8.y + 4;
  iVar1 = *(int *)(*param_1 + 0x98);
  pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x69a0);
  AppendMenuA(hMenu,0,0x4b0,pCVar3);
  pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x69a5);
  AppendMenuA(hMenu,0,0x4b4,pCVar3);
  local_b8 = 1;
  local_b4 = 1;
  hMenu_00 = (HMENU)0x0;
  local_c0 = 1.0;
  local_b0 = DAT_0064b138;
  pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x69a3);
  AppendMenuA(hMenu,0,0x4b2,pCVar3);
  pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x69a4);
  AppendMenuA(hMenu,0,0x4b3,pCVar3);
  if ((*(uint *)(iVar1 + 4) & 0x1000) == 0) {
    pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x69a2);
    AppendMenuA(hMenu,0,0x4b5,pCVar3);
    pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x69a7);
    AppendMenuA(hMenu,0,0x4b1,pCVar3);
    puVar9 = local_b0;
    piVar14 = &local_b8;
    uVar15 = 0;
    puVar13 = local_9c;
    puVar12 = local_a0;
    uVar5 = FUN_005ba4b0(local_b0,0);
    FUN_005ba670(puVar9,uVar5,puVar12,puVar13,piVar14,uVar15);
    if (local_b4 != 0) {
      local_c0 = ((float)local_b8 * (float)local_84) /
                 ((float)local_b4 * (float)*(double *)(iVar1 + 0x80));
    }
  }
  else {
    pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x69a2);
    AppendMenuA(hMenu,0,0x4b1,pCVar3);
    pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x69a7);
    AppendMenuA(hMenu,0,0x4b6,pCVar3);
    iVar4 = FUN_005c8bb0(*(undefined4 *)(iVar1 + 0x90),*(undefined4 *)(iVar1 + 0x88),
                         *(undefined4 *)(iVar1 + 0x8c));
    if (-1 < iVar4) {
      piVar14 = *(int **)(*(int *)(iVar1 + 0x90) + 0x24);
      if (piVar14 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar14;
      }
      if (iVar8 + -1 < iVar4) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(piVar14[2] + iVar4 * 4);
      }
      if (local_b4 != 0) {
        local_c0 = (float)(local_b8 / local_b4);
      }
      if ((iVar4 != 0) &&
         (FUN_005c9630(local_b0,iVar4,local_a0,local_9c,&local_b8,0), local_b4 != 0)) {
        local_c0 = ((float)local_b8 * (float)local_84) /
                   ((float)local_b4 * (float)*(double *)(iVar1 + 0x80));
      }
    }
    hMenu_00 = CreatePopupMenu();
    uVar6 = *(uint *)(iVar1 + 4);
    pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x69a9);
    AppendMenuA(hMenu_00,(-(uint)((uVar6 & 0x1e0000) != 0) & 0xfffffff8) + 8,0x4b7,pCVar3);
    uVar6 = *(uint *)(iVar1 + 4);
    pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x69aa);
    AppendMenuA(hMenu_00,(-(uint)((uVar6 & 0x1e0000) != 0x20000) & 0xfffffff8) + 8,0x4b8,pCVar3);
    uVar6 = *(uint *)(iVar1 + 4);
    pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x69ab);
    AppendMenuA(hMenu_00,(-(uint)((uVar6 & 0x1e0000) != 0x40000) & 0xfffffff8) + 8,0x4b9,pCVar3);
    uVar6 = *(uint *)(iVar1 + 4);
    pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x69ac);
    AppendMenuA(hMenu_00,(-(uint)((uVar6 & 0x1e0000) != 0x60000) & 0xfffffff8) + 8,0x4ba,pCVar3);
    uVar6 = *(uint *)(iVar1 + 4);
    pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x69ad);
    AppendMenuA(hMenu_00,(-(uint)((uVar6 & 0x1e0000) != 0x80000) & 0xfffffff8) + 8,0x4bb,pCVar3);
    pCVar3 = (LPCSTR)_SfGetString_8(DAT_00647204,0x69a8);
    AppendMenuA(hMenu,0x10,(UINT_PTR)hMenu_00,pCVar3);
  }
  uVar6 = TrackPopupMenu(hMenu,0x182,local_a8.x,local_a8.y,0,(HWND)param_1[1],(RECT *)0x0);
  if (hMenu != (HMENU)0x0) {
    DestroyMenu(hMenu);
  }
  if (hMenu_00 != (HMENU)0x0) {
    DestroyMenu(hMenu_00);
  }
  if (uVar6 == 0) goto LAB_0051505a;
  iVar4 = FUN_0050bd90(*param_1,0,0,0);
  if (iVar4 < 0) {
    return;
  }
  iVar4 = FUN_0050bfb0(*param_1);
  if (iVar4 < 0) {
    return;
  }
  FUN_005b83b0(DAT_0064b138,1);
  iVar4 = 0;
  iVar8 = 0;
  if (uVar6 < 0x4b7) {
    iVar7 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),
                         *(undefined4 *)(iVar1 + 0x9c));
    param_1[0x34] = iVar7;
    FUN_0050db20(local_5c,iVar1,*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),0,0,0,0,
                 0,0);
    iVar7 = *(int *)(iVar1 + 0x9c);
    if (iVar7 == 0) {
      iVar4 = FUN_00522a00(0);
      iVar4 = *(int *)(iVar4 + 4) * param_1[0x34] + *(int *)(iVar4 + 8);
    }
    else if (iVar7 == 1) {
      iVar8 = FUN_00522a00(1);
      iVar8 = *(int *)(iVar8 + 4) * param_1[0x34] + *(int *)(iVar8 + 8);
      FUN_0050db20(param_1 + 6,iVar1,*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),
                   *(undefined4 *)(iVar1 + 0x9c),0,0,0,0,0);
    }
    else if (iVar7 == 2) {
      iVar8 = FUN_00522a00(2);
      iVar8 = *(int *)(iVar8 + 4) * param_1[0x34] + *(int *)(iVar8 + 8);
      FUN_0050db20(param_1 + 6,iVar1,*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),
                   *(undefined4 *)(iVar1 + 0x9c),0,0,0,0,0);
    }
    FUN_0053eb20(*(undefined4 *)(*param_1 + 0x90));
  }
  switch(uVar6) {
  case 0x4b0:
    iVar7 = *(int *)(iVar1 + 0x9c);
    if (iVar7 == 0) {
      puVar9 = (undefined4 *)(iVar1 + 0x24);
      puVar10 = (undefined4 *)(iVar4 + 0x18);
      for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    else if (iVar7 == 1) {
      FUN_0050c7d0(iVar8);
    }
    else if (iVar7 == 2) {
      FUN_0050c820(iVar8);
    }
    break;
  case 0x4b1:
    iVar8 = iVar1 + 0x24;
    fVar11 = (float10)FUN_005a5ff0(iVar8);
    if ((float10)_DAT_00610f20 <= fVar11) {
      fVar11 = (float10)FUN_005a5ff0(iVar8);
    }
    else {
      fVar11 = (float10)FUN_005a5ff0(iVar8);
      fVar11 = -fVar11;
    }
    if ((float10)_DAT_0061a3b8 < fVar11) {
      fVar11 = (float10)FUN_005a5f80(iVar8);
      local_b0 = (undefined4 *)(float)fVar11;
      fVar11 = (float10)FUN_005a5ff0(iVar8);
      iVar8 = *(int *)(iVar1 + 0x9c);
      if (iVar8 == 0) {
        FUN_005a64b0(iVar4 + 0x18,(float)((float10)(float)local_b0 / fVar11));
      }
      else if ((0 < iVar8) && (iVar8 < 3)) {
        FUN_005a64b0(param_1 + 6,(float)((float10)(float)local_b0 / fVar11));
        FUN_0050e180(param_1 + 6,iVar1,*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),
                     *(undefined4 *)(iVar1 + 0x9c));
      }
    }
    break;
  case 0x4b2:
    iVar8 = *(int *)(iVar1 + 0x9c);
    if (iVar8 == 0) {
      FUN_005a60f0(iVar4 + 0x18);
    }
    else if ((0 < iVar8) && (iVar8 < 3)) {
      FUN_005a60f0(param_1 + 6);
      FUN_0050e180(param_1 + 6,iVar1,*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),
                   *(undefined4 *)(iVar1 + 0x9c));
    }
    break;
  case 0x4b3:
    iVar8 = *(int *)(iVar1 + 0x9c);
    if (iVar8 == 0) {
      FUN_005a60c0(iVar4 + 0x18);
    }
    else if ((0 < iVar8) && (iVar8 < 3)) {
      FUN_005a60c0(param_1 + 6);
      FUN_0050e180(param_1 + 6,iVar1,*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),
                   *(undefined4 *)(iVar1 + 0x9c));
    }
    break;
  case 0x4b4:
    iVar8 = *(int *)(iVar1 + 0x9c);
    if (iVar8 == 0) {
      FUN_005a65a0(iVar4 + 0x18,iVar1 + 0x24);
    }
    else if ((0 < iVar8) && (iVar8 < 3)) {
      FUN_005a6090(param_1 + 6,local_1c - (float)param_1[0x16],local_18 - (float)param_1[0x17]);
      FUN_0050e180(param_1 + 6,iVar1,*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),
                   *(undefined4 *)(iVar1 + 0x9c));
    }
    break;
  case 0x4b5:
  case 0x4b6:
    iVar8 = *(int *)(iVar1 + 0x9c);
    if (iVar8 == 0) {
      FUN_005a64b0(iVar4 + 0x18,local_c0);
    }
    else if ((0 < iVar8) && (iVar8 < 3)) {
      FUN_005a64b0(param_1 + 6,local_c0);
      FUN_0050e180(param_1 + 6,iVar1,*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),
                   *(undefined4 *)(iVar1 + 0x9c));
    }
    break;
  case 0x4b7:
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffe1ffff;
    break;
  case 0x4b8:
    uVar6 = *(uint *)(iVar1 + 4) & 0xffe3ffff | 0x20000;
    goto LAB_00514fdd;
  case 0x4b9:
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffe5ffff | 0x40000;
    break;
  case 0x4ba:
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffe7ffff | 0x60000;
    break;
  case 0x4bb:
    uVar6 = *(uint *)(iVar1 + 4) & 0xffe9ffff | 0x80000;
LAB_00514fdd:
    *(uint *)(iVar1 + 4) = uVar6;
  }
  InvalidateRect((HWND)param_1[1],(RECT *)0x0,0);
  InvalidateRect(*(HWND *)(*(int *)(*param_1 + 0x90) + 4),(RECT *)0x0,0);
  if (((*(byte *)(*param_1 + 0x154) & 1) != 0) &&
     (hWnd = *(HWND *)(*param_1 + 0x168), hWnd != (HWND)0x0)) {
    InvalidateRect(hWnd,(RECT *)0x0,0);
  }
  FUN_005b84d0(DAT_0064b138,1);
  *(uint *)*DAT_0064b138 = *(uint *)*DAT_0064b138 | 0x10;
  DAT_0064767c = DAT_0064767c | 0x800;
  FUN_0050c010(*param_1,0);
LAB_0051505a:
  if (local_ac != (HCURSOR)0x0) {
    SetCursor(local_ac);
  }
  return;
}


