/* Module: vegas30k.dll
   Function: FUN_01076db0
   Address: 01076db0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01076db0(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  LPSIZE psizl;
  double dVar1;
  DWORD DVar2;
  HDC pHVar3;
  HBITMAP pHVar4;
  int iVar5;
  uint uVar6;
  HGDIOBJ pvVar7;
  HDC pHVar8;
  uint uVar9;
  undefined4 uVar10;
  UINT UVar11;
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  INT *pIVar17;
  undefined8 uVar16;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  tagRECT local_164;
  uint local_154;
  HBITMAP local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  double local_13c;
  undefined8 local_134;
  int local_12c;
  float *local_128;
  double local_124;
  uint local_11c;
  RECT local_118;
  double local_108;
  uint local_100;
  uint local_fc;
  int local_f8;
  RECT local_f4;
  double local_e4;
  double local_dc;
  int local_d4;
  double local_d0;
  HGDIOBJ local_c8;
  RECT local_c4;
  RECT local_b4;
  RECT local_a4;
  RECT local_94;
  RECT local_84;
  RECT local_74;
  RECT local_64;
  RECT local_54;
  RECT local_44;
  RECT local_34;
  RECT local_24;
  undefined4 local_14 [5];
  
  DVar2 = GetSysColor(0xf);
  param_1[0x19] = DVar2;
  local_16c = 0;
  local_168 = param_4;
  if ((param_1[1] & 1) != 0) {
    local_168 = 0;
    local_16c = param_3;
  }
  pHVar3 = GetDC((HWND)0x0);
  pHVar4 = CreateCompatibleBitmap(pHVar3,param_3 + local_16c,param_4 + local_168);
  param_1[0x16] = (uint)pHVar4;
  local_174 = param_3;
  local_140 = local_168;
  local_144 = local_16c;
  local_170 = param_4;
  local_fc = param_2 & 0x80;
  if (((local_fc != 0) && (1 < param_1[0x2a])) &&
     (iVar5 = FUN_010783b0(param_1,param_2), 0x1f < iVar5)) {
    uVar6 = FUN_01075a60(param_1,pHVar3);
    uVar9 = uVar6;
    if ((param_1[1] & 1) != 0) {
      local_174 = uVar6;
      uVar9 = local_170;
      local_144 = uVar6;
      uVar6 = local_140;
    }
    local_140 = uVar6;
    local_170 = uVar9;
    pHVar4 = CreateCompatibleBitmap(pHVar3,local_174 + local_144 * 2,local_170 + local_140 * 2);
    param_1[0x17] = (uint)pHVar4;
    param_1[0xe] = local_174;
    param_1[0xf] = local_170;
  }
  ReleaseDC((HWND)0x0,pHVar3);
  pHVar3 = DAT_0120612c;
  if ((HGDIOBJ)param_1[0x16] == (HGDIOBJ)0x0) {
    return 0;
  }
  local_c8 = SelectObject(DAT_0120612c,(HGDIOBJ)param_1[0x16]);
  SetBkColor(pHVar3,param_1[0x19]);
  local_118.left = 0;
  local_118.top = 0;
  local_118.right = param_3 + local_16c;
  local_118.bottom = param_4 + local_168;
  ExtTextOutA(pHVar3,0,0,2,&local_118,(LPCSTR)0x0,0,(INT *)0x0);
  param_1[1] = (param_2 >> 0xe & 1) << 8 | param_1[1] & 0xfffffeff;
  local_100 = param_2 & 0x10;
  if (local_100 != 0) {
    psizl = (LPSIZE)(param_1 + 0x10);
    param_1[0x11] = 4;
    psizl->cx = 4;
    if ((param_2 & 8) != 0) {
      pvVar7 = (HGDIOBJ)_SfGetUIFont_4();
      SelectObject(pHVar3,pvVar7);
      GetTextExtentPoint32A(pHVar3," -00.0",6,psizl);
    }
    uVar6 = param_1[0x11] + 2;
    psizl->cx = psizl->cx + 2;
    uVar9 = param_1[1];
    param_1[0x11] = uVar6;
    if ((uVar9 & 1) == 0) {
      if (((*param_1 & 0x80) == 0) && ((int)param_4 < (int)(param_1[0x2a] * uVar6))) {
        param_1[1] = uVar9 | 0x100;
      }
      param_1[0x11] = param_4 + param_1[0x30] * 2;
      if ((int)param_3 / 2 < psizl->cx) {
        psizl->cx = 0;
      }
      param_3 = param_3 - psizl->cx;
    }
    else {
      psizl->cx = param_3 + param_1[0x30] * 2;
      if ((uVar9 & 0x80) == 0) {
        if ((int)param_4 / 2 < (int)uVar6) {
          param_1[0x11] = 0;
        }
        param_4 = param_4 - param_1[0x11];
      }
      else {
        if ((int)param_4 <= (int)uVar6) {
          uVar6 = param_4;
        }
        param_1[0x11] = uVar6;
        param_4 = param_4 - uVar6;
      }
    }
  }
  pHVar8 = GetDC((HWND)0x0);
  pHVar4 = CreateCompatibleBitmap(pHVar8,param_1[0x10],param_1[0x11]);
  param_1[0x18] = (uint)pHVar4;
  ReleaseDC((HWND)0x0,pHVar8);
  local_164.left = 0;
  local_164.top = 0;
  local_164.right = param_3;
  local_164.bottom = param_4;
  InflateRect(&local_164,-1,-1);
  if ((param_1[1] & 1) == 0) {
    local_164.left = local_164.right;
  }
  else {
    local_164.bottom = local_164.top;
  }
  uVar9 = FUN_010783b0(param_1,param_2);
  if ((param_1[1] & 1) == 0) {
    pvVar7 = (HGDIOBJ)(param_3 - 1);
  }
  else {
    pvVar7 = (HGDIOBJ)(param_1[0x11] + 1);
  }
  local_150 = pvVar7;
  local_148 = uVar9;
  SetTextColor(pHVar3,0xff0000);
  if ((param_1[1] & 0x10) == 0) {
    DAT_0120e8b8 = (undefined *)param_1[0x2c];
    if ((DAT_0120e8b8 == (undefined *)0x0) || (param_1[0x2d] < 2)) {
      uVar6 = 3;
      DAT_0120e8b8 = &DAT_011e2260;
    }
    else {
      uVar6 = param_1[0x2d];
    }
    if ((*param_1 & 2) == 0) {
      if (uVar6 != 0) {
        local_14c = -local_16c;
        iVar5 = 0;
        local_154 = uVar6;
        do {
          iVar15 = FUN_01078350(param_1,(double)*(float *)(DAT_0120e8b8 + iVar5));
          if ((param_1[1] & 1) == 0) {
            local_164.right = local_164.left;
            local_164.left = (iVar15 - local_148) + (int)local_150;
          }
          else {
            local_164.top = local_164.bottom;
            local_164.bottom = local_148 - iVar15;
          }
          FUN_01078440(pHVar3,&local_164,*(undefined4 *)(DAT_0120e8b8 + iVar5 + 4));
          OffsetRect(&local_164,local_16c,local_168);
          FUN_01078440(pHVar3,&local_164,*(undefined4 *)(DAT_0120e8b8 + iVar5 + 8));
          OffsetRect(&local_164,local_14c,-local_168);
          iVar5 = iVar5 + 0xc;
          local_154 = local_154 - 1;
        } while (local_154 != 0);
      }
    }
    else {
      if ((param_1[1] & 1) == 0) {
        local_164.right = local_164.left + 1;
        local_164.left = (int)pvVar7 - uVar9;
      }
      else {
        local_164.top = local_164.bottom;
        local_164.bottom = uVar9;
      }
      FUN_01078440(pHVar3,&local_164,*(undefined4 *)(DAT_0120e8b8 + 4));
      OffsetRect(&local_164,local_16c,local_168);
      FUN_01078440(pHVar3,&local_164,*(undefined4 *)(DAT_0120e8b8 + 8));
      OffsetRect(&local_164,-local_16c,-local_168);
    }
  }
  else {
    DAT_0120e8b4 = (undefined *)param_1[0x2e];
    if ((DAT_0120e8b4 == (undefined *)0x0) || (param_1[0x2f] < 2)) {
      uVar6 = 4;
      DAT_0120e8b4 = &DAT_011e2288;
    }
    else {
      uVar6 = param_1[0x2f];
    }
    if ((*param_1 & 2) == 0) {
      local_178 = 0;
      local_124 = (double)CONCAT44(local_124._4_4_,uVar6 - 1);
      if (uVar6 - 1 != 0) {
        local_134 = (double)CONCAT44(local_134._4_4_,-local_168);
        local_14c = -local_16c;
        do {
          iVar15 = local_178 * 0xc;
          iVar5 = FUN_01078350(param_1,(double)*(float *)(DAT_0120e8b4 + iVar15));
          local_11c = param_1[1] & 1;
          if (local_11c == 0) {
            local_164.right = local_164.left;
            local_164.left = (iVar5 - local_148) + (int)local_150;
            if (local_164.left < 2) {
              local_164.left = 1;
            }
          }
          else {
            local_164.top = local_164.bottom;
            uVar9 = ((int)(local_148 - iVar5) / 2) * 2;
            local_164.bottom = param_4 - 1;
            if ((int)uVar9 < local_164.bottom) {
              local_164.bottom = uVar9;
            }
          }
          if (local_11c == 0) {
            uVar9 = 10;
            if (local_178 == 0) {
              uVar9 = 0xe;
            }
            if (local_164.left < 2) {
              uVar9 = uVar9 | 1;
            }
          }
          else {
            uVar9 = 5;
            if (local_178 == 0) {
              uVar9 = 7;
            }
            if ((int)(param_4 - 1) <= local_164.bottom) {
              uVar9 = uVar9 | 8;
            }
          }
          if (local_11c == 0) {
            FUN_01076220(pHVar3,&local_164,*(undefined4 *)(DAT_0120e8b4 + iVar15 + 4),
                         *(undefined4 *)(DAT_0120e8b4 + iVar15 + 0x10),uVar9);
          }
          else {
            FUN_01075b50(pHVar3,&local_164,*(undefined4 *)(DAT_0120e8b4 + iVar15 + 4),
                         *(undefined4 *)(DAT_0120e8b4 + iVar15 + 0x10),uVar9);
          }
          OffsetRect(&local_164,local_16c,local_168);
          if ((param_1[1] & 1) == 0) {
            FUN_01076220(pHVar3,&local_164,*(undefined4 *)(DAT_0120e8b4 + iVar15 + 8),
                         *(undefined4 *)(DAT_0120e8b4 + iVar15 + 0x14),uVar9);
          }
          else {
            FUN_01075b50(pHVar3,&local_164,*(undefined4 *)(DAT_0120e8b4 + iVar15 + 8),
                         *(undefined4 *)(DAT_0120e8b4 + iVar15 + 0x14),uVar9);
          }
          OffsetRect(&local_164,local_14c,SUB84(local_134,0));
          local_178 = local_178 + 1;
        } while (local_178 < local_124._0_4_);
      }
    }
    else {
      if ((param_1[1] & 1) == 0) {
        local_164.right = local_164.left;
        local_164.left = (int)pvVar7 - uVar9;
      }
      else {
        local_164.top = local_164.bottom;
        local_164.bottom = uVar9;
      }
      if ((param_1[1] & 1) == 0) {
        FUN_01076220(pHVar3,&local_164,*(undefined4 *)(DAT_0120e8b4 + 4),
                     *(undefined4 *)(DAT_0120e8b4 + 0x10),0xf);
      }
      else {
        FUN_01075b50(pHVar3,&local_164,*(undefined4 *)(DAT_0120e8b4 + 4),
                     *(undefined4 *)(DAT_0120e8b4 + 0x10),0xf);
      }
      OffsetRect(&local_164,local_16c,local_168);
      if ((param_1[1] & 1) == 0) {
        FUN_01076220(pHVar3,&local_164,*(undefined4 *)(DAT_0120e8b4 + 8),
                     *(undefined4 *)(DAT_0120e8b4 + 0x14),0xf);
      }
      else {
        FUN_01075b50(pHVar3,&local_164,*(undefined4 *)(DAT_0120e8b4 + 8),
                     *(undefined4 *)(DAT_0120e8b4 + 0x14),0xf);
      }
      OffsetRect(&local_164,-local_16c,-local_168);
    }
  }
  local_118.left = 0;
  local_118.top = 0;
  local_118.right = param_3;
  local_118.bottom = param_4;
  DrawEdge(pHVar3,&local_118,2,0xf);
  OffsetRect(&local_118,local_16c,local_168);
  DrawEdge(pHVar3,&local_118,2,0xf);
  pvVar7 = (HGDIOBJ)_SfGetUIFont_4();
  SelectObject(pHVar3,pvVar7);
  GetTextExtentPoint32A(pHVar3,"0",1,(LPSIZE)(param_1 + 0x12));
  pcVar12 = BitBlt_exref;
  if (((param_2 & 0x400) != 0) && (0x1f < (int)local_148)) {
    if ((HGDIOBJ)param_1[0x17] != (HGDIOBJ)0x0) {
      SelectObject(pHVar3,(HGDIOBJ)param_1[0x17]);
      BitBlt(pHVar3,0,0,local_174,local_170,pHVar3,0,0,0xff0062);
      BitBlt(pHVar3,local_144,local_140,local_174,local_170,pHVar3,0,0,0x42);
    }
    local_11c = param_2 & 0x40;
    if (local_11c == 0) {
      if (((param_1[1] & 1) == 0) || ((*param_1 & 0x80) != 0)) {
        UVar11 = 6;
      }
      else {
        UVar11 = 2;
      }
    }
    else if ((param_1[1] & 1) == 0) {
      UVar11 = 0xe;
    }
    else {
      UVar11 = 0;
    }
    SetTextAlign(pHVar3,UVar11);
    SetBkMode(pHVar3,1);
    uVar9 = param_1[0x12];
    local_124 = (double)CONCAT44(local_124._4_4_,uVar9);
    local_118.left = local_174 + uVar9 * 2;
    local_118.top = -param_1[0x13];
    uVar6 = param_1[1];
    param_1[1] = uVar6 & 0xfffffdff;
    local_134 = (double)(CONCAT44(local_134._4_4_,uVar6) & 0xfffffffffffffdff);
    if ((uVar6 & 1) == 0) {
      param_1[1] = (uint)((int)(param_1[0x13] + 6) <= (int)local_170) << 9 | (uint)local_134;
    }
    if ((((*param_1 & 0x80) != 0) && (1 < param_1[0x2a])) && ((*param_1 & 0x20) != 0)) {
      param_1[1] = param_1[1] | 0x200;
    }
    if ((param_1[1] & 1) == 0) {
      local_128 = (float *)(uVar9 * 3);
    }
    else {
      local_128 = (float *)param_1[0x13];
    }
    local_154 = (param_1[10] - param_1[0x10]) + -2;
    if ((param_1[1] & 1) != 0) {
      local_154 = param_1[0xb] - param_1[0x11];
    }
    uVar9 = param_1[0x20];
    local_134._0_4_ = uVar9;
    if (uVar9 == 0) {
      log2((float10)(int)param_1[0x1f]);
      local_134._0_4_ = ftol();
    }
    else {
      log2((float10)(int)uVar9);
      local_134._0_4_ = ftol();
    }
    local_108 = (double)(int)(uint)local_134;
    local_e4 = (double)(int)local_154;
    dVar1 = (double)(int)local_154 / ((double)(int)(uint)local_134 * _DAT_011e23a0);
    if (dVar1 < _DAT_011dba48) {
      dVar1 = _DAT_011dba48;
    }
    local_13c = ceil((dVar1 / (double)(int)local_154) * (double)(int)(uint)local_134 * _DAT_011e23a0
                     - _DAT_011e2398);
    local_13c = local_13c * _DAT_011dba48;
    local_134 = (double)CONCAT44(local_134._4_4_,(undefined *)((int)local_128 + 2));
    local_dc = local_108 - local_13c;
    local_e4 = ceil(((double)((int)local_128 + 2) / local_e4) * local_108 * _DAT_011e23a0);
    local_e4 = local_e4 * _DAT_011dba48;
    local_134 = local_e4 * _DAT_011db6e8;
    dVar1 = local_134;
    if (local_134 < local_13c) {
      dVar1 = local_13c;
    }
    local_124 = ceil(dVar1 / local_13c);
    local_124 = local_124 * local_13c;
    dVar1 = local_108 - local_134;
    if (local_dc < local_108 - local_134) {
      dVar1 = local_dc;
    }
    local_d0 = floor(dVar1 / local_13c);
    local_d0 = local_d0 * local_13c;
    local_108 = ceil(local_e4 / local_13c);
    local_108 = local_108 * local_13c;
    local_13c = local_13c * _DAT_011e23a0;
    ceil(local_13c);
    local_154 = ftol();
    ceil(local_13c);
    local_d4 = ftol();
    floor(local_dc * _DAT_011e23a0);
    uVar10 = ftol();
    local_134 = (double)CONCAT44(local_134._4_4_,uVar10);
    ceil(local_124 * _DAT_011e23a0);
    uVar9 = ftol();
    local_124._0_4_ = uVar9;
    ceil(local_108 * _DAT_011e23a0);
    uVar10 = ftol();
    local_dc = (double)CONCAT44(local_dc._4_4_,uVar10);
    floor(local_d0 * _DAT_011e23a0);
    uVar10 = ftol();
    uVar9 = local_124._0_4_;
    local_e4 = (double)CONCAT44(local_e4._4_4_,uVar10);
    local_d0 = (double)CONCAT44(local_d0._4_4_,local_124._0_4_);
    local_124 = (double)CONCAT44(local_124._4_4_,local_154);
    if (local_154 <= (uint)local_134) {
      local_128 = (float *)(&DAT_011e22b8 + local_154 * 4);
      local_13c = (double)CONCAT44(local_13c._4_4_,local_d4 * 3);
      uVar6 = local_154;
      local_154 = local_154 * 3;
      do {
        uVar14 = local_148;
        if (uVar6 == uVar9) {
          local_f8 = 1;
          if (uVar9 < local_e4._0_4_) {
            local_d0 = (double)CONCAT44(local_d0._4_4_,uVar9 + local_dc._0_4_);
          }
        }
        else {
          local_f8 = 0;
        }
        iVar5 = FUN_01078350(param_1,(double)*local_128);
        local_12c = iVar5;
        SetBkColor(pHVar3,0);
        if (local_11c == 0) {
          local_14c = (uint)((byte)~(byte)*param_1 >> 7);
          if ((param_1[1] & 1) == 0) {
            uVar9 = (int)local_150 + (local_12c - uVar14) + -1;
            if (0 < (int)uVar9) {
              if (((int)(local_118.left + param_1[0x12] * -4) < (int)uVar9) ||
                 (local_178 = 2, (int)uVar9 < (int)(param_1[0x12] * 2))) {
                local_178 = 1;
              }
              local_94.bottom = local_178 + local_14c;
              local_94.left = uVar9;
              local_94.top = local_14c;
              local_94.right = uVar9 + 1;
              ExtTextOutA(pHVar3,0,0,2,&local_94,(LPCSTR)0x0,0,(INT *)0x0);
              SetBkColor(pHVar3,0xffffff);
              local_74.top = local_140 + local_14c;
              local_74.bottom = local_74.top + local_178;
              local_74.left = uVar9;
              local_74.right = uVar9 + 1;
              ExtTextOutA(pHVar3,0,0,2,&local_74,(LPCSTR)0x0,0,(INT *)0x0);
              if ((param_1[1] & 0x200) != 0) {
                SetBkColor(pHVar3,0);
                local_54.top = (-local_178 - local_14c) + local_170;
                local_54.right = uVar9 + 1;
                local_54.bottom = local_54.top + local_178;
                local_54.left = uVar9;
                ExtTextOutA(pHVar3,0,0,2,&local_54,(LPCSTR)0x0,0,(INT *)0x0);
                SetBkColor(pHVar3,0xffffff);
                local_f4.top = (-local_178 - local_14c) + local_140 + local_170;
                local_f4.right = uVar9 + 1;
                local_f4.bottom = local_f4.top + local_178;
                local_f4.left = uVar9;
                ExtTextOutA(pHVar3,0,0,2,&local_f4,(LPCSTR)0x0,0,(INT *)0x0);
              }
              if (((int)uVar9 <= (int)(local_118.left + param_1[0x12] * -4)) &&
                 ((int)(param_1[0x12] * 2) <= (int)uVar9)) {
                iVar5 = 3;
                goto LAB_01077ee5;
              }
            }
          }
          else {
            iVar15 = local_148 - local_12c;
            local_108 = (double)CONCAT44(local_108._4_4_,(iVar15 - (int)param_1[0x13] / 2) + 1);
            iVar5 = (local_f8 != 0) + 1;
            SetBkColor(pHVar3,0);
            local_84.left = (-iVar5 - local_14c) + local_174;
            local_84.right = local_84.left + iVar5;
            local_12c = iVar15 + 1;
            local_84.top = iVar15;
            local_84.bottom = local_12c;
            ExtTextOutA(pHVar3,0,0,2,&local_84,(LPCSTR)0x0,0,(INT *)0x0);
            SetBkColor(pHVar3,0xffffff);
            local_44.left = (-iVar5 - local_14c) + local_144 + local_174;
            local_44.right = local_44.left + iVar5;
            local_44.bottom = local_12c;
            local_44.top = iVar15;
            ExtTextOutA(pHVar3,0,0,2,&local_44,(LPCSTR)0x0,0,(INT *)0x0);
            if ((param_1[1] & 0x200) != 0) {
              SetBkColor(pHVar3,0);
              uVar9 = local_14c;
              local_64.right = iVar5 + local_14c;
              local_64.left = local_14c;
              local_64.bottom = local_12c;
              local_64.top = iVar15;
              ExtTextOutA(pHVar3,0,0,2,&local_64,(LPCSTR)0x0,0,(INT *)0x0);
              SetBkColor(pHVar3,0xffffff);
              local_b4.left = local_144 + uVar9;
              local_b4.right = local_b4.left + iVar5;
              local_b4.bottom = local_12c;
              local_b4.top = iVar15;
              ExtTextOutA(pHVar3,0,0,2,&local_b4,(LPCSTR)0x0,0,(INT *)0x0);
            }
            if (local_f8 != 0) {
              uVar9 = local_174 - 4;
              iVar5 = local_108._0_4_;
              goto LAB_01077ee5;
            }
          }
        }
        else if ((param_1[1] & 1) == 0) {
          uVar9 = (int)local_150 + (local_12c - uVar14) + -1;
          if (0 < (int)uVar9) {
            local_c4.right = uVar9 + 1;
            iVar5 = local_170 - 2;
            local_c4.bottom = local_170;
            local_c4.left = uVar9;
            local_c4.top = iVar5;
            ExtTextOutA(pHVar3,0,0,2,&local_c4,(LPCSTR)0x0,0,(INT *)0x0);
            SetBkColor(pHVar3,0xffffff);
            local_24.top = (local_140 - 2) + local_170;
            local_24.right = uVar9 + 1;
            local_24.bottom = local_24.top + 2;
            local_24.left = uVar9;
            ExtTextOutA(pHVar3,0,0,2,&local_24,(LPCSTR)0x0,0,(INT *)0x0);
            if (((int)uVar9 <= (int)(local_118.left + param_1[0x12] * -4)) &&
               ((int)(param_1[0x12] * 2) <= (int)uVar9)) goto LAB_01077ee5;
          }
        }
        else {
          iVar5 = local_148 - iVar5;
          local_a4.left = 0;
          local_a4.right = 2;
          local_a4.top = iVar5;
          local_a4.bottom = iVar5 + 1;
          ExtTextOutA(pHVar3,0,0,2,&local_a4,(LPCSTR)0x0,0,(INT *)0x0);
          SetBkColor(pHVar3,0xffffff);
          local_34.left = local_144;
          local_34.right = local_144 + 2;
          local_34.top = iVar5;
          local_34.bottom = iVar5 + 1;
          ExtTextOutA(pHVar3,0,0,2,&local_34,(LPCSTR)0x0,0,(INT *)0x0);
          uVar9 = param_1[0x13];
          iVar5 = iVar5 + (-1 - (int)uVar9 / 2);
          if (((int)(local_118.top + uVar9) < iVar5) && (iVar5 <= (int)(local_170 - uVar9))) {
            uVar9 = 4;
LAB_01077ee5:
            if (((int)(param_1[0x12] * 2 + 5) < (int)local_174) &&
               ((int)param_1[0x13] < (int)local_170)) {
              uVar6 = uVar9;
              if (((*param_1 & 0x80) != 0) && ((param_1[1] & 1) != 0)) {
                uVar6 = (int)local_174 / 2;
              }
              local_118.left = uVar9;
              local_118.top = iVar5;
              wsprintfA((LPSTR)local_14,"%d");
              SetTextColor(pHVar3,0);
              pIVar17 = (INT *)0x0;
              UVar11 = lstrlenA((LPCSTR)local_14);
              ExtTextOutA(pHVar3,uVar6,iVar5,0,(RECT *)0x0,(LPCSTR)local_14,UVar11,pIVar17);
              SetTextColor(pHVar3,0xffffff);
              pIVar17 = (INT *)0x0;
              UVar11 = lstrlenA((LPCSTR)local_14);
              ExtTextOutA(pHVar3,uVar6 + local_144,iVar5 + local_140,0,(RECT *)0x0,(LPCSTR)local_14,
                          UVar11,pIVar17);
            }
          }
        }
        uVar6 = local_124._0_4_ + local_d4;
        local_128 = local_128 + local_d4;
        local_154 = local_154 + local_13c._0_4_;
        local_124 = (double)CONCAT44(local_124._4_4_,uVar6);
        pcVar12 = BitBlt_exref;
        if ((uint)local_134 < uVar6) break;
        uVar9 = local_d0._0_4_;
      } while( true );
    }
    if ((((param_1[0x1d] != 0) && (1 < param_1[0x2a])) && ((param_2 & 0x20) == 0)) &&
       (local_fc == 0)) {
      if (local_11c == 0) {
        if ((param_1[1] & 1) == 0) {
          iVar5 = 0;
          (*pcVar12)(pHVar3,0,local_170 - 2,local_174,2,pHVar3,0,0);
          uVar9 = (local_164.left - 2U) + iVar5;
          uVar6 = local_164.left;
          goto LAB_01078105;
        }
        iVar5 = local_174 - 2;
        (*pcVar12)(pHVar3,0,0,2,local_170,pHVar3,iVar5,0);
        uVar6 = 0;
        uVar14 = (local_168 - 2) + local_174;
        local_174 = 2;
        uVar9 = 0;
        uVar13 = local_168;
      }
      else if ((param_1[1] & 1) == 0) {
        iVar5 = 0;
        (*pcVar12)(pHVar3,0,0,local_174,2,pHVar3,0,local_170 - 2);
        uVar9 = local_164.left;
        uVar6 = (local_164.left - 2U) + iVar5;
LAB_01078105:
        uVar14 = 0;
        iVar5 = 2;
        uVar13 = 0;
      }
      else {
        iVar5 = 0;
        (*pcVar12)(pHVar3,local_174 - 2,0,2,local_170,pHVar3,0,0);
        uVar6 = 0;
        uVar9 = 0;
        uVar13 = (local_168 - 2) + local_174;
        local_174 = 2;
        uVar14 = local_168;
      }
      (*pcVar12)(pHVar3,uVar13,uVar9,local_174,iVar5,pHVar3,uVar14,uVar6,0xcc0020);
    }
    if (param_1[0x17] != 0) {
      SelectObject(pHVar3,(HGDIOBJ)param_1[0x16]);
    }
  }
  if (local_100 != 0) {
    SetBkColor(pHVar3,param_1[0x19]);
    if ((param_1[1] & 1) == 0) {
      local_f4.right = param_3 + param_1[0x10];
      local_f4.bottom = local_168 * 2;
      local_f4.left = param_3;
      local_f4.top = 0;
      ExtTextOutA(pHVar3,0,0,2,&local_f4,(LPCSTR)0x0,0,(INT *)0x0);
      if ((param_2 & 8) != 0) goto LAB_01078321;
      (*pcVar12)(pHVar3,param_3 + 1,0,1,param_1[0x11],pHVar3,param_3 - 1,0);
      (*pcVar12)(pHVar3,param_3 + 2,0,1,param_1[0x11],pHVar3,param_3 - 1,0,0xcc0020);
      iVar5 = param_3 + 1;
      uVar16 = 0xcc002000000000;
      uVar6 = param_1[0x11];
      uVar9 = 2;
      iVar15 = param_3 + 4;
    }
    else {
      pHVar8 = GetDC((HWND)0x0);
      local_100 = local_168 + param_4;
      local_fc = local_16c + param_3;
      local_13c = (double)CONCAT44(local_13c._4_4_,pHVar8);
      local_150 = CreateCompatibleBitmap(pHVar8,local_fc,local_100);
      pHVar8 = CreateCompatibleDC(pHVar8);
      local_150 = SelectObject(pHVar8,local_150);
      iVar5 = 0;
      (*pcVar12)(pHVar8,0,0,local_fc,local_100,pHVar3,0,0);
      (*pcVar12)(pHVar3,0,param_1[0x11],iVar5 * 2,local_14[0],pHVar8,0,0,0xcc0020);
      ReleaseDC((HWND)0x0,SUB84(local_13c,0));
      local_150 = SelectObject(pHVar8,local_150);
      DeleteDC(pHVar8);
      DeleteObject(local_150);
      local_f4.bottom = param_1[0x11];
      local_f4.right = local_16c * 2;
      local_f4.left = 0;
      local_f4.top = 0;
      ExtTextOutA(pHVar3,0,0,2,&local_f4,(LPCSTR)0x0,0,(INT *)0x0);
      if ((param_2 & 8) != 0) goto LAB_01078321;
      uVar9 = param_1[0x10];
      uVar16 = CONCAT44(0xcc0020,param_1[0x11]);
      iVar5 = 0;
      uVar6 = param_1[0x11] - 2;
      iVar15 = 0;
    }
    (*pcVar12)(pHVar3,iVar15,0,uVar9,uVar6,pHVar3,iVar5,uVar16);
  }
LAB_01078321:
  param_1[0x14] = local_16c;
  param_1[0x15] = local_168;
  SelectObject(pHVar3,local_c8);
  return 1;
}


