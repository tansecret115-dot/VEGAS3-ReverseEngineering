/* Module: vegas30k.dll
   Function: FUN_01145500
   Address: 01145500
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_01145500(int param_1,HWND param_2,UINT param_3,int *param_4,int param_5)

{
  byte bVar1;
  int *piVar2;
  undefined4 *dwNewLong;
  HWND pHVar3;
  HWND hWnd;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  WPARAM *pWVar10;
  tagPOINT *ptVar11;
  bool bVar12;
  bool bVar13;
  uint local_7c;
  undefined4 local_78;
  LONG local_74;
  LONG local_70;
  undefined4 local_6c;
  undefined4 local_68;
  tagPOINT local_64;
  int local_5c;
  int local_58;
  WPARAM local_54 [4];
  int local_44;
  undefined4 *local_40;
  undefined4 local_34 [6];
  int *local_1c;
  undefined *local_14;
  WPARAM local_10;
  LPARAM LStack_c;
  LPARAM LStack_8;
  LPARAM LStack_4;
  
  if (param_2 == (HWND)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)GetWindowLongA(param_2,-0x15);
  }
  switch(param_3) {
  case 1:
    pHVar3 = *(HWND *)(param_1 + 0x10);
    uVar5 = *(uint *)(param_1 + 0x4e0) & 4;
    if (pHVar3 != (HWND)0x0) {
      SendMessageA(pHVar3,0x402,0x9c66,*(uint *)(param_1 + 0x4e0) >> 1 & 1);
      ShowWindow(pHVar3,uVar5 >> 2);
      return 0;
    }
    dwNewLong = calloc(1,0x1c);
    pHVar3 = (HWND)_SfCreateToolbarEmpty_16
                             (DAT_0120e5c8,*(undefined4 *)(param_1 + 4),uVar5 << 0x1a | 0x4600094e,
                              param_4);
    *(HWND *)(param_1 + 0x10) = pHVar3;
    SetWindowLongA(pHVar3,-0x15,(LONG)dwNewLong);
    SendMessageA(pHVar3,0x454,0,1);
    hWnd = (HWND)SendMessageA(pHVar3,0x423,0,0);
    dwNewLong[6] = hWnd;
    uVar5 = GetWindowLongA(hWnd,-0x10);
    SetWindowLongA((HWND)dwNewLong[6],-0x10,uVar5 | 1);
    local_34[1] = *(undefined4 *)(param_1 + 0x2c);
    puVar9 = local_34;
    for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    uVar5 = *(uint *)(param_1 + 0x4e0);
    local_34[0] = *(undefined4 *)(param_1 + 4);
    piVar2 = *(int **)(param_1 + 0x3c);
    local_34[2] = 0x20;
    if ((uVar5 & 0x8000) == 0) {
      if ((uVar5 & 0x80000) == 0) {
        local_14 = &DAT_012072b8;
        local_10 = 0xe;
      }
      else {
        local_14 = &DAT_012075f0;
        local_10 = 10;
      }
    }
    else {
      local_14 = &DAT_012073d0;
      local_10 = 0xc;
    }
    local_1c = piVar2;
    if ((uVar5 & 8) == 0) {
      local_14 = &DAT_01207560;
      local_10 = 7;
      if ((uVar5 & 0x20) != 0) {
        pWVar10 = local_54;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pWVar10 = 0;
          pWVar10 = pWVar10 + 1;
        }
        local_54[0] = 0x40f;
        (**(code **)(*piVar2 + 0xc))(piVar2,local_54);
        if (local_44 == 0) {
          local_14 = &DAT_012074c0;
          local_10 = 8;
        }
      }
    }
    SendMessageA(*(HWND *)(param_1 + 8),0x4e,*(WPARAM *)(param_1 + 0x2c),(LPARAM)local_34);
    SendMessageA(pHVar3,0x414,local_10,(LPARAM)local_14);
    SendMessageA(pHVar3,0x402,0x9c66,*(uint *)(param_1 + 0x4e0) >> 1 & 1);
    SendMessageA(pHVar3,0x430,0,LStack_c);
    SendMessageA(pHVar3,0x434,0,LStack_8);
    SendMessageA(pHVar3,0x436,0,LStack_4);
    SendMessageA(pHVar3,0x421,0,0);
    dwNewLong[4] = LStack_c;
    dwNewLong[2] = local_10;
    dwNewLong[3] = LStack_8;
    dwNewLong[5] = LStack_4;
    _SfGetToolbarSize_8(pHVar3,&local_78);
    *dwNewLong = local_78;
    dwNewLong[1] = local_74;
    return 0;
  case 2:
    SendMessageA(param_2,0x430,0,0);
    SendMessageA(param_2,0x434,0,0);
    SendMessageA(param_2,0x436,0,0);
    free(piVar2);
    *(undefined4 *)(param_1 + 0x10) = 0;
  default:
    return 0;
  case 5:
    piVar4 = (int *)_SfGetUIFontSize_4(100);
    local_64.x = ((int)(short)param_5 - *(int *)(param_1 + 0xc24)) - *piVar2;
    if (local_64.x < *piVar4 * 0x19) {
      local_64.x = *piVar4 * 0x19;
    }
    local_5c = local_64.x + (short)param_5;
    local_64.y = ((*(int *)(param_1 + 0x4c8) - *(int *)(param_1 + 0xc1c)) - piVar2[1]) / 2;
    local_58 = local_64.y + piVar2[1];
    FUN_010528a0(param_2,&local_78);
    iVar6 = 0x10;
    bVar12 = false;
    iVar7 = 0;
    bVar13 = true;
    pbVar8 = (byte *)&local_78;
    ptVar11 = &local_64;
    break;
  case 0x4e:
    if (*(int *)(param_5 + 8) != -0x2c6) {
      uVar5 = DefWindowProcA(*(HWND *)(param_1 + 4),param_3,(WPARAM)param_4,param_5);
      return uVar5;
    }
    SendMessageA(param_2,0x433,*(WPARAM *)(param_5 + 0xc),(LPARAM)&local_64);
    MapWindowPoints(param_2,(HWND)0x0,&local_64,2);
    local_78 = 0x14;
    local_70 = local_64.y;
    local_6c = local_5c;
    pWVar10 = local_54;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pWVar10 = 0;
      pWVar10 = pWVar10 + 1;
    }
    local_40 = &local_78;
    local_54[0] = *(WPARAM *)(param_1 + 4);
    local_74 = local_64.x;
    local_54[3] = local_64.x;
    local_54[1] = *(WPARAM *)(param_1 + 0x2c);
    local_68 = local_58;
    local_54[2] = 0xe;
    local_44 = local_58;
    SendMessageA(*(HWND *)(param_1 + 8),0x4e,local_54[1],(LPARAM)local_54);
    return 0;
  }
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar1 = (byte)ptVar11->x;
    bVar12 = *pbVar8 < bVar1;
    bVar13 = *pbVar8 == bVar1;
    pbVar8 = pbVar8 + 1;
    ptVar11 = (tagPOINT *)((int)&ptVar11->x + 1);
  } while (bVar13);
  if (!bVar13) {
    iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
  }
  if (iVar7 != 0) {
    *param_4 = local_64.x;
    param_4[1] = local_64.y;
    param_4[2] = local_5c;
    param_4[3] = local_58;
  }
  local_7c = (uint)(iVar7 != 0);
  *(LONG *)(param_1 + 0x4cc) = local_64.x;
  *(LONG *)(param_1 + 0x4d0) = local_64.y;
  *(int *)(param_1 + 0x4d4) = local_5c;
  *(int *)(param_1 + 0x4d8) = local_58;
  return local_7c;
}


