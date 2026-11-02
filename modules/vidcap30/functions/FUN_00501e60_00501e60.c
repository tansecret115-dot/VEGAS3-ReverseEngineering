/* Module: vidcap30.exe
   Function: FUN_00501e60
   Address: 00501e60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00501e60(int param_1,HDC param_2)

{
  int *piVar1;
  float fVar2;
  LONG *pLVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  DWORD color;
  HBRUSH pHVar6;
  HGDIOBJ pvVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  POINT *pPVar11;
  RECT *pRVar12;
  HPEN h;
  int iVar13;
  code *pcVar14;
  int local_e0;
  int *local_d8;
  COLORREF local_d4;
  int local_cc;
  tagRECT local_c8;
  RECT *local_b8;
  POINT local_b4;
  float local_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  HGDIOBJ local_9c;
  int local_98;
  int local_94;
  uint local_90;
  RECT *local_8c;
  RECT *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  POINT local_64;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  int *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  double local_40;
  int *local_38;
  int *local_34;
  RECT local_30;
  int local_20;
  uint local_1c;
  uint local_18;
  int *local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (param_1 == 0) {
    return 0;
  }
  color = GetSysColor(0xf);
  pHVar6 = CreateSolidBrush(color);
  pvVar7 = SelectObject(param_2,pHVar6);
  PatBlt(param_2,0,0,*(int *)(param_1 + 0x180) - *(int *)(param_1 + 0x178),
         *(int *)(param_1 + 0x184) - *(int *)(param_1 + 0x17c),0xf00021);
  pvVar7 = SelectObject(param_2,pvVar7);
  DeleteObject(pvVar7);
  if (*(int *)(param_1 + 0x134) != 0) {
    if (*(int *)(param_1 + 0x3a0) != 0) {
      iVar13 = *(int *)(param_1 + 0x1e0) - *(int *)(param_1 + 0x1d8);
      iVar8 = *(int *)(param_1 + 0x1e4) - *(int *)(param_1 + 0x1dc);
      BitBlt(param_2,(iVar13 + -0xe) / 2 + *(int *)(param_1 + 0x1d8),
             (iVar8 + -0xe) / 2 + *(int *)(param_1 + 0x1dc),iVar13,iVar8,*(HDC *)(param_1 + 0x39c),0
             ,0,0xcc0020);
    }
    local_c8.bottom = *(int *)(param_1 + 0x1e4) + 1;
    local_c8.left = *(int *)(param_1 + 0x1d8) + -1;
    local_c8.right = *(int *)(param_1 + 0x1e0) + 1;
    local_c8.top = *(int *)(param_1 + 0x1dc) + -1;
    DrawEdge(param_2,&local_c8,4,0xf);
  }
  if (*(int *)(param_1 + 0x3dc) != 0) {
    iVar13 = *(int *)(param_1 + 0x1f0) - *(int *)(param_1 + 0x1e8);
    iVar8 = *(int *)(param_1 + 500) - *(int *)(param_1 + 0x1ec);
    BitBlt(param_2,(iVar13 + -0xe) / 2 + *(int *)(param_1 + 0x1e8),
           (iVar8 + -0xe) / 2 + *(int *)(param_1 + 0x1ec),iVar13,iVar8,*(HDC *)(param_1 + 0x3d8),0,0
           ,0xcc0020);
  }
  local_14 = (int *)(param_1 + 0x1e8);
  local_c8.bottom = *(int *)(param_1 + 500) + 1;
  local_c8.left = *local_14 + -1;
  local_c8.right = *(int *)(param_1 + 0x1f0) + 1;
  local_c8.top = *(int *)(param_1 + 0x1ec) + -1;
  DrawEdge(param_2,&local_c8,4,0xf);
  iVar8 = *(int *)(param_1 + 0x194);
  iVar13 = *(int *)(param_1 + 0x18c);
  iVar9 = ftol();
  local_b4.y = *(LONG *)(param_1 + 0x15c);
  local_b4.x = *(LONG *)(param_1 + 0x158);
  local_a0 = (iVar8 - iVar13) - iVar9;
  local_ac = *(float *)(param_1 + 0x160);
  local_a8 = *(undefined4 *)(param_1 + 0x164);
  _SFDIBPIXEL_To_SFHSL_8();
  if (((_DAT_00589f10 == (double)CONCAT44(uStack_78,local_7c)) ||
      (_DAT_00589f10 == (double)CONCAT44(uStack_70,local_74))) ||
     (_DAT_00587ad0 == (double)CONCAT44(uStack_70,local_74))) {
    local_84 = *(undefined4 *)(param_1 + 0x148);
    local_80 = *(undefined4 *)(param_1 + 0x14c);
  }
  if ((_DAT_00589f10 == (double)CONCAT44(uStack_70,local_74)) ||
     (_DAT_00587ad0 == (double)CONCAT44(uStack_70,local_74))) {
    local_7c = *(undefined4 *)(param_1 + 0x150);
    uStack_78 = *(undefined4 *)(param_1 + 0x154);
  }
  iVar8 = *(int *)(param_1 + 0x188);
  local_38 = (int *)(param_1 + 0x188);
  if (iVar8 < *(int *)(param_1 + 400)) {
    do {
      iVar13 = *(int *)(param_1 + 0x18c);
      local_98 = iVar8;
      local_94 = iVar13;
      FUN_005000d0();
      if (*(int *)(param_1 + 0x138) == 0) {
        local_ac = (float)(double)CONCAT44(uStack_44,local_48);
      }
      else {
        local_84 = local_48;
        local_80 = uStack_44;
        _SFHSL_To_SFDIBPIXEL_8();
      }
      pPVar11 = &local_b4;
      if ((*(byte *)(param_1 + 4) & 1) != 0) {
        local_58 = local_a8;
        pPVar11 = &local_64;
        local_64.x = (LONG)(((float)local_b4.x + (float)local_b4.y + local_ac) * _DAT_0059a258);
        local_64.y = local_64.x;
        local_5c = (float)local_64.x;
      }
      if ((pPVar11 != (POINT *)0x0) && (&stack0x00000000 != (undefined1 *)0xd4)) {
        uVar4 = ftol();
        uVar5 = ftol();
        uVar10 = ftol();
        local_d4 = (uint)CONCAT11(uVar4,uVar5) << 8 | uVar10 & 0xff;
      }
      pHVar6 = CreateSolidBrush(local_d4);
      pvVar7 = SelectObject(param_2,pHVar6);
      PatBlt(param_2,iVar8,iVar13,1,iVar9,0xf00021);
      pvVar7 = SelectObject(param_2,pvVar7);
      DeleteObject(pvVar7);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 400));
  }
  local_c8.bottom = local_38[3] + (1 - local_a0);
  local_c8.left = *local_38 + -1;
  local_c8.right = local_38[2] + 1;
  local_c8.top = local_38[1] + -1;
  DrawEdge(param_2,&local_c8,2,0xf);
  iVar8 = *(int *)(param_1 + 0x1a4);
  iVar13 = *(int *)(param_1 + 0x19c);
  iVar9 = ftol();
  local_b4.y = *(LONG *)(param_1 + 0x15c);
  local_b4.x = *(LONG *)(param_1 + 0x158);
  local_a0 = (iVar8 - iVar13) - iVar9;
  local_ac = *(float *)(param_1 + 0x160);
  local_a8 = *(undefined4 *)(param_1 + 0x164);
  _SFDIBPIXEL_To_SFHSL_8();
  if (((_DAT_00589f10 == (double)CONCAT44(uStack_78,local_7c)) ||
      (_DAT_00589f10 == (double)CONCAT44(uStack_70,local_74))) ||
     (_DAT_00587ad0 == (double)CONCAT44(uStack_70,local_74))) {
    local_84 = *(undefined4 *)(param_1 + 0x148);
    local_80 = *(undefined4 *)(param_1 + 0x14c);
  }
  if ((_DAT_00589f10 == (double)CONCAT44(uStack_70,local_74)) ||
     (_DAT_00587ad0 == (double)CONCAT44(uStack_70,local_74))) {
    local_7c = *(undefined4 *)(param_1 + 0x150);
    uStack_78 = *(undefined4 *)(param_1 + 0x154);
  }
  iVar8 = *(int *)(param_1 + 0x198);
  local_34 = (int *)(param_1 + 0x198);
  if (iVar8 < *(int *)(param_1 + 0x1a0)) {
    do {
      iVar13 = *(int *)(param_1 + 0x19c);
      local_98 = iVar8;
      local_94 = iVar13;
      FUN_005000d0();
      if (*(int *)(param_1 + 0x138) == 0) {
        local_b4.y = (LONG)(float)(double)CONCAT44(uStack_44,local_48);
      }
      else {
        local_7c = local_48;
        uStack_78 = uStack_44;
        _SFHSL_To_SFDIBPIXEL_8();
      }
      pPVar11 = &local_b4;
      if ((*(byte *)(param_1 + 4) & 1) != 0) {
        local_58 = local_a8;
        pPVar11 = &local_64;
        local_64.x = (LONG)(((float)local_b4.x + (float)local_b4.y + local_ac) * _DAT_0059a258);
        local_64.y = local_64.x;
        local_5c = (float)local_64.x;
      }
      if ((pPVar11 != (POINT *)0x0) && (&stack0x00000000 != (undefined1 *)0xd4)) {
        uVar4 = ftol();
        uVar5 = ftol();
        uVar10 = ftol();
        local_d4 = (uint)CONCAT11(uVar4,uVar5) << 8 | uVar10 & 0xff;
      }
      pHVar6 = CreateSolidBrush(local_d4);
      pvVar7 = SelectObject(param_2,pHVar6);
      PatBlt(param_2,iVar8,iVar13,1,iVar9,0xf00021);
      pvVar7 = SelectObject(param_2,pvVar7);
      DeleteObject(pvVar7);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x1a0));
  }
  local_c8.bottom = local_34[3] + (1 - local_a0);
  local_c8.left = *local_34 + -1;
  local_c8.right = local_34[2] + 1;
  local_c8.top = local_34[1] + -1;
  DrawEdge(param_2,&local_c8,2,0xf);
  iVar8 = *(int *)(param_1 + 0x1b4);
  iVar13 = *(int *)(param_1 + 0x1ac);
  iVar9 = ftol();
  local_b4.y = *(LONG *)(param_1 + 0x15c);
  local_b4.x = *(LONG *)(param_1 + 0x158);
  local_a0 = (iVar8 - iVar13) - iVar9;
  local_ac = *(float *)(param_1 + 0x160);
  local_a8 = *(undefined4 *)(param_1 + 0x164);
  _SFDIBPIXEL_To_SFHSL_8();
  if (((_DAT_00589f10 == (double)CONCAT44(uStack_78,local_7c)) ||
      (_DAT_00589f10 == (double)CONCAT44(uStack_70,local_74))) ||
     (_DAT_00587ad0 == (double)CONCAT44(uStack_70,local_74))) {
    local_84 = *(undefined4 *)(param_1 + 0x148);
    local_80 = *(undefined4 *)(param_1 + 0x14c);
  }
  if ((_DAT_00589f10 == (double)CONCAT44(uStack_70,local_74)) ||
     (_DAT_00587ad0 == (double)CONCAT44(uStack_70,local_74))) {
    local_7c = *(undefined4 *)(param_1 + 0x150);
    uStack_78 = *(undefined4 *)(param_1 + 0x154);
  }
  iVar8 = *(int *)(param_1 + 0x1a8);
  local_4c = (int *)(param_1 + 0x1a8);
  if (iVar8 < *(int *)(param_1 + 0x1b0)) {
    do {
      iVar13 = *(int *)(param_1 + 0x1ac);
      local_98 = iVar8;
      local_94 = iVar13;
      FUN_005000d0();
      if (*(int *)(param_1 + 0x138) == 0) {
        local_b4.x = (LONG)(float)(double)CONCAT44(uStack_44,local_48);
      }
      else {
        local_74 = local_48;
        uStack_70 = uStack_44;
        _SFHSL_To_SFDIBPIXEL_8();
      }
      pPVar11 = &local_b4;
      if ((*(byte *)(param_1 + 4) & 1) != 0) {
        local_58 = local_a8;
        pPVar11 = &local_64;
        local_64.x = (LONG)(((float)local_b4.x + (float)local_b4.y + local_ac) * _DAT_0059a258);
        local_64.y = local_64.x;
        local_5c = (float)local_64.x;
      }
      if ((pPVar11 != (POINT *)0x0) && (&stack0x00000000 != (undefined1 *)0xd4)) {
        uVar4 = ftol();
        uVar5 = ftol();
        uVar10 = ftol();
        local_d4 = (uint)CONCAT11(uVar4,uVar5) << 8 | uVar10 & 0xff;
      }
      pHVar6 = CreateSolidBrush(local_d4);
      pvVar7 = SelectObject(param_2,pHVar6);
      PatBlt(param_2,iVar8,iVar13,1,iVar9,0xf00021);
      pvVar7 = SelectObject(param_2,pvVar7);
      DeleteObject(pvVar7);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x1b0));
  }
  local_c8.bottom = local_4c[3] + (1 - local_a0);
  local_c8.left = *local_4c + -1;
  local_c8.right = local_4c[2] + 1;
  local_c8.top = local_4c[1] + -1;
  DrawEdge(param_2,&local_c8,2,0xf);
  if (*(int *)(param_1 + 0x328) == 0) {
    local_e0 = *(int *)(param_1 + 0x1b8);
    if (local_e0 < *(int *)(param_1 + 0x1c0)) {
      do {
        iVar8 = *(int *)(param_1 + 0x1bc);
        if (iVar8 < *(int *)(param_1 + 0x1c4)) {
          do {
            local_98 = local_e0;
            local_94 = iVar8;
            FUN_005000d0();
            FUN_005011d0();
            if ((&stack0x00000000 != (undefined1 *)0xb4) && (&stack0x00000000 != (undefined1 *)0xd4)
               ) {
              uVar4 = ftol();
              uVar5 = ftol();
              uVar10 = ftol();
              local_d4 = (uint)CONCAT11(uVar4,uVar5) << 8 | uVar10 & 0xff;
            }
            pHVar6 = CreateSolidBrush(local_d4);
            pvVar7 = SelectObject(param_2,pHVar6);
            PatBlt(param_2,local_e0,iVar8,1,1,0xf00021);
            pvVar7 = SelectObject(param_2,pvVar7);
            DeleteObject(pvVar7);
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(param_1 + 0x1c4));
        }
        local_e0 = local_e0 + 1;
      } while (local_e0 < *(int *)(param_1 + 0x1c0));
    }
  }
  else {
    BitBlt(param_2,*(int *)(param_1 + 0x1b8),*(int *)(param_1 + 0x1bc),
           *(int *)(param_1 + 0x1c0) - *(int *)(param_1 + 0x1b8),
           *(int *)(param_1 + 0x1c4) - *(int *)(param_1 + 0x1bc),*(HDC *)(param_1 + 0x324),0,0,
           0xcc0020);
  }
  local_c8.bottom = *(int *)(param_1 + 0x1c4) + 1;
  local_c8.left = *(int *)(param_1 + 0x1b8) + -1;
  local_c8.right = *(int *)(param_1 + 0x1c0) + 1;
  local_c8.top = *(int *)(param_1 + 0x1bc) + -1;
  DrawEdge(param_2,&local_c8,2,0xf);
  local_88 = (RECT *)(param_1 + 0x158);
  if ((*(uint *)(param_1 + 4) & 1) != 0) {
    local_30.bottom = 0x3f800000;
    pLVar3 = &local_88->left;
    local_88 = &local_30;
    local_30.left =
         (LONG)((*(float *)(param_1 + 0x160) + *(float *)(param_1 + 0x15c) + (float)*pLVar3) *
               _DAT_0059a258);
    local_30.top = local_30.left;
    local_30.right = local_30.left;
  }
  if ((*(uint *)(param_1 + 4) & 2) == 0) {
    if ((local_88 != (RECT *)0x0) && (&stack0x00000000 != (undefined1 *)0xd4)) {
      uVar4 = ftol();
      uVar5 = ftol();
      uVar10 = ftol();
      local_d4 = (uint)CONCAT11(uVar4,uVar5) << 8 | uVar10 & 0xff;
    }
    pHVar6 = CreateSolidBrush(local_d4);
    pvVar7 = SelectObject(param_2,pHVar6);
    PatBlt(param_2,*(int *)(param_1 + 0x1c8),*(int *)(param_1 + 0x1cc),
           (*(int *)(param_1 + 0x1d0) - *(int *)(param_1 + 0x1c8)) - local_a0,
           *(int *)(param_1 + 0x1d4) - *(int *)(param_1 + 0x1cc),0xf00021);
    pvVar7 = SelectObject(param_2,pvVar7);
    DeleteObject(pvVar7);
  }
  else {
    piVar1 = (int *)(param_1 + 0x1c8);
    iVar8 = (*(int *)(param_1 + 0x1d0) - *(int *)(param_1 + 0x1c8)) - local_a0;
    local_20 = iVar8 / 5;
    local_9c = (HGDIOBJ)(iVar8 % 5);
    local_cc = *(int *)(param_1 + 0x1cc);
    if (local_cc < *(int *)(param_1 + 0x1d4)) {
      do {
        uVar10 = local_cc / 5 & 0x80000001;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
        }
        local_94 = local_cc;
        local_98 = *piVar1;
        uVar10 = (uint)(uVar10 == 0);
        local_90 = uVar10;
        FUN_005000d0();
        fVar2 = (float)local_40;
        local_64.x = (LONG)(_DAT_00595420 - fVar2);
        local_b8 = (RECT *)((float)local_88->right * (float)local_64.x);
        local_10 = fVar2 * _DAT_0059b800;
        local_8 = local_10 + (float)local_b8;
        local_8c = (RECT *)((float)local_88->top * (float)local_64.x);
        local_c = (float)local_8c + local_10;
        local_64.x = (LONG)((float)local_64.x * (float)local_88->left);
        local_10 = (float)local_64.x + local_10;
        local_5c = (float)local_b8 + fVar2;
        local_64.y = (LONG)((float)local_8c + fVar2);
        local_64.x = (LONG)((float)local_64.x + fVar2);
        if ((&stack0x00000000 != (undefined1 *)0x10) && (&stack0x00000000 != (undefined1 *)0x18)) {
          uVar4 = ftol();
          uVar5 = ftol();
          uVar10 = ftol();
          local_18 = (uint)CONCAT11(uVar4,uVar5) << 8 | uVar10 & 0xff;
          uVar10 = local_90;
        }
        if ((&stack0x00000000 != (undefined1 *)0x64) && (&stack0x00000000 != (undefined1 *)0x1c)) {
          uVar4 = ftol();
          uVar5 = ftol();
          uVar10 = ftol();
          local_1c = (uint)CONCAT11(uVar4,uVar5) << 8 | uVar10 & 0xff;
          uVar10 = local_90;
        }
        local_8c = (RECT *)CreateSolidBrush(local_18);
        local_b8 = (RECT *)CreateSolidBrush(local_1c);
        pRVar12 = local_b8;
        if (uVar10 == 0) {
          pRVar12 = local_8c;
        }
        pvVar7 = SelectObject(param_2,pRVar12);
        local_e0 = 0;
        if (0 < local_20) {
          local_90 = 0;
          local_a4 = local_20;
          local_e0 = local_20;
          do {
            PatBlt(param_2,*piVar1 + local_90,local_cc,5,1,0xf00021);
            uVar10 = (uint)(uVar10 == 0);
            pRVar12 = local_b8;
            if (uVar10 == 0) {
              pRVar12 = local_8c;
            }
            SelectObject(param_2,pRVar12);
            local_90 = local_90 + 5;
            local_a4 = local_a4 + -1;
          } while (local_a4 != 0);
        }
        PatBlt(param_2,local_e0 * 5 + *piVar1,local_cc,(int)local_9c,1,0xf00021);
        SelectObject(param_2,pvVar7);
        DeleteObject(local_8c);
        DeleteObject(local_b8);
        local_cc = local_cc + 1;
      } while (local_cc < *(int *)(param_1 + 0x1d4));
    }
  }
  local_d8 = (int *)(param_1 + 0x1c8);
  local_c8.bottom = *(int *)(param_1 + 0x1d4) + 1;
  local_c8.left = *local_d8 + -1;
  local_c8.right = *(int *)(param_1 + 0x1d0) + (1 - local_a0);
  local_c8.top = *(int *)(param_1 + 0x1cc) + -1;
  DrawEdge(param_2,&local_c8,2,0xf);
  if (((*(byte *)(param_1 + 4) & 0x40) != 0) && (*(int *)(param_1 + 0x1f8) != 0)) {
    pHVar6 = CreateSolidBrush(0xffff);
    pvVar7 = SelectObject(param_2,pHVar6);
    h = CreatePen(0,1,0x4040);
    local_9c = SelectObject(param_2,h);
    local_64.x = *(LONG *)(param_1 + 0x21c);
    local_64.y = *(LONG *)(param_1 + 0x228);
    local_58 = *(undefined4 *)(param_1 + 0x220);
    local_5c = (float)((*(int *)(param_1 + 0x224) - local_64.x) / 2 + local_64.x);
    local_54 = *(undefined4 *)(param_1 + 0x224);
    local_50 = (float)local_64.y;
    Polygon(param_2,&local_64,3);
    pvVar7 = SelectObject(param_2,pvVar7);
    pcVar14 = DeleteObject_exref;
    DeleteObject(pvVar7);
    pvVar7 = SelectObject(param_2,local_9c);
    DeleteObject(pvVar7);
    iVar8 = *(int *)(param_1 + 0x1f8);
    if (iVar8 == 3) {
      pvVar7 = GetStockObject(4);
      pvVar7 = SelectObject(param_2,pvVar7);
      iVar8 = ((*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x220)) * 2) / 5;
      PatBlt(param_2,(*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x21c)) / 2 +
                     *(int *)(param_1 + 0x21c),iVar8 + *(int *)(param_1 + 0x220),1,
             ((*(int *)(param_1 + 0x228) - iVar8) - *(int *)(param_1 + 0x220)) + -4,0xf00021);
      PatBlt(param_2,(*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x21c)) / 2 +
                     *(int *)(param_1 + 0x21c),*(int *)(param_1 + 0x228) + -3,1,2,0xf00021);
      pvVar7 = SelectObject(param_2,pvVar7);
      DeleteObject(pvVar7);
    }
    else if (iVar8 == 2) {
      pvVar7 = GetStockObject(4);
      pvVar7 = SelectObject(param_2,pvVar7);
      iVar8 = (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x21c)) * 3;
      MoveToEx(param_2,((int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3) + *(int *)(param_1 + 0x21c),
               *(int *)(param_1 + 0x228) + -2,(LPPOINT)0x0);
      iVar8 = (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x21c)) * 3;
      LineTo(param_2,((int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3) + *(int *)(param_1 + 0x21c),
             (*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x220)) / 2 + *(int *)(param_1 + 0x220)
            );
      iVar8 = (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x21c)) * 5;
      LineTo(param_2,((int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3) + *(int *)(param_1 + 0x21c),
             *(int *)(param_1 + 0x228) + -2);
      iVar8 = (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x21c)) * 5;
      LineTo(param_2,((int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3) + *(int *)(param_1 + 0x21c),
             (*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x220)) / 2 + *(int *)(param_1 + 0x220)
            );
      pvVar7 = SelectObject(param_2,pvVar7);
      DeleteObject(pvVar7);
    }
    else if (iVar8 == 1) {
      pvVar7 = GetStockObject(4);
      pvVar7 = SelectObject(param_2,pvVar7);
      iVar8 = (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x21c)) * 3;
      MoveToEx(param_2,((int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3) + *(int *)(param_1 + 0x21c),
               *(int *)(param_1 + 0x228) + -2,(LPPOINT)0x0);
      iVar8 = (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x21c)) * 3;
      LineTo(param_2,((int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3) + *(int *)(param_1 + 0x21c),
             (*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x220)) / 2 + *(int *)(param_1 + 0x220)
            );
      iVar8 = (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x21c)) * 5;
      LineTo(param_2,((int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3) + *(int *)(param_1 + 0x21c),
             (*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x220)) / 2 + *(int *)(param_1 + 0x220)
            );
      iVar8 = (*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x220)) * 3;
      iVar13 = (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x21c)) * 5;
      LineTo(param_2,((int)(iVar13 + (iVar13 >> 0x1f & 7U)) >> 3) + *(int *)(param_1 + 0x21c),
             ((int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2) + *(int *)(param_1 + 0x220));
      iVar8 = (*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x220)) * 3;
      iVar13 = (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x21c)) * 3;
      LineTo(param_2,((int)(iVar13 + (iVar13 >> 0x1f & 7U)) >> 3) + *(int *)(param_1 + 0x21c),
             ((int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2) + *(int *)(param_1 + 0x220));
      pvVar7 = SelectObject(param_2,pvVar7);
      DeleteObject(pvVar7);
      pcVar14 = DeleteObject_exref;
    }
    local_b8 = (RECT *)(param_1 + 0x1fc);
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      local_30.bottom = 0x3f800000;
      piVar1 = &local_b8->left;
      local_b8 = &local_30;
      local_30.left =
           (LONG)((*(float *)(param_1 + 0x204) + *(float *)(param_1 + 0x200) + (float)*piVar1) *
                 _DAT_0059a258);
      local_30.top = local_30.left;
      local_30.right = local_30.left;
    }
    if ((local_b8 != (RECT *)0x0) && (&stack0x00000000 != (undefined1 *)0xd4)) {
      uVar4 = ftol();
      uVar5 = ftol();
      uVar10 = ftol();
      local_d4 = (uint)CONCAT11(uVar5,uVar4) << 8 | uVar10 & 0xff;
      pcVar14 = DeleteObject_exref;
    }
    pHVar6 = CreateSolidBrush(local_d4);
    pvVar7 = SelectObject(param_2,pHVar6);
    PatBlt(param_2,*(int *)(param_1 + 0x20c),*(int *)(param_1 + 0x210),
           *(int *)(param_1 + 0x214) - *(int *)(param_1 + 0x20c),
           *(int *)(param_1 + 0x218) - *(int *)(param_1 + 0x210),0xf00021);
    SelectObject(param_2,pvVar7);
    (*pcVar14)();
    local_c8.bottom = *(int *)(param_1 + 0x218) + 1;
    local_c8.left = *(int *)(param_1 + 0x20c) + -1;
    local_c8.right = *(int *)(param_1 + 0x214) + 1;
    local_c8.top = *(int *)(param_1 + 0x210) + -1;
    DrawEdge(param_2,&local_c8,8,0xf);
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    switch(*(undefined4 *)(param_1 + 0x140)) {
    case 1:
      local_d8 = (int *)(param_1 + 0x1d8);
      break;
    case 2:
      local_d8 = local_14;
      break;
    case 3:
      local_d8 = local_38;
      break;
    case 4:
      local_d8 = local_34;
      break;
    case 5:
      local_d8 = local_4c;
      break;
    case 6:
      break;
    case 7:
      local_d8 = (int *)(param_1 + 0x20c);
      break;
    case 8:
      local_d8 = (int *)(param_1 + 0x1b8);
      break;
    default:
      goto switchD_005032ff_default;
    }
    if (local_d8 != (int *)0x0) {
      local_30.right = local_d8[2] + 2;
      local_30.top = local_d8[1] + -2;
      local_30.left = *local_d8 + -2;
      local_30.bottom = local_d8[3] + 2;
      DrawFocusRect(param_2,&local_30);
    }
  }
switchD_005032ff_default:
  return 1;
}


