/* Module: vegas30.exe
   Function: FUN_00472b00
   Address: 00472b00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00473f8f) */
/* WARNING: Removing unreachable block (ram,0x00473675) */
/* WARNING: Removing unreachable block (ram,0x00472fc7) */
/* WARNING: Removing unreachable block (ram,0x00472f5f) */
/* WARNING: Removing unreachable block (ram,0x00472f9c) */
/* WARNING: Removing unreachable block (ram,0x00473472) */
/* WARNING: Removing unreachable block (ram,0x004739c9) */
/* WARNING: Removing unreachable block (ram,0x0047479c) */
/* WARNING: Removing unreachable block (ram,0x00473bc7) */
/* WARNING: Removing unreachable block (ram,0x00473faf) */
/* WARNING: Removing unreachable block (ram,0x00473fdd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00472b00(undefined4 param_1,HDC param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            uint param_7,int param_8,byte *param_9,undefined4 param_10)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  undefined4 uVar26;
  COLORREF CVar27;
  uint uVar28;
  HGDIOBJ h;
  HPEN pHVar29;
  int iVar30;
  int iVar31;
  int y;
  int iVar32;
  uint uVar33;
  bool bVar34;
  float10 fVar35;
  undefined8 uVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  RECT *lprect;
  undefined1 local_308 [64];
  RECT local_2c8;
  RECT local_2b8;
  RECT local_2a8;
  RECT local_298;
  int local_288;
  int iStack_284;
  int local_280;
  int iStack_27c;
  undefined8 local_278;
  int local_270;
  int iStack_26c;
  undefined8 local_268;
  int local_260;
  int iStack_25c;
  int local_258;
  int iStack_254;
  undefined8 local_250;
  undefined8 local_248;
  int local_240;
  int iStack_23c;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  int local_218;
  int iStack_214;
  int local_210;
  int iStack_20c;
  undefined8 local_208;
  int local_200;
  int local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  int local_1e8;
  int iStack_1e4;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  COLORREF local_1b8;
  undefined8 local_1b4;
  RECT local_1ac;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  int local_180;
  int iStack_17c;
  HGDIOBJ local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  double local_160;
  int local_158;
  int local_154;
  undefined8 local_150;
  int local_148;
  int local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  uint local_138;
  int iStack_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128 [4];
  undefined4 local_124;
  uint local_120;
  int local_11c;
  uint local_118;
  int local_110;
  RECT local_10c;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  uint local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  int local_c0;
  undefined8 local_bc;
  int local_b4;
  RECT local_b0;
  undefined8 local_a0;
  uint local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  double local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int iStack_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int iStack_48;
  uint local_44;
  int local_40;
  undefined8 local_3c;
  HGDIOBJ local_34;
  uint local_30;
  HPEN local_2c;
  int local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  uint local_c;
  int local_8;
  
  uVar24 = param_7;
  local_19c = *(undefined4 *)(param_7 + 4);
  local_5c = *(int *)(param_8 + 0x20);
  iVar32 = 0;
  local_58 = *(int *)(param_8 + 0x24);
  local_54 = *(int *)(param_8 + 0x28);
  local_50 = *(undefined4 *)(param_8 + 0x2c);
  if (*(int *)(*(int *)(param_5 + 0x50) + 0x18) == 0) {
    local_28 = 0;
LAB_00472b80:
    local_b4 = 1;
  }
  else {
    local_28 = FUN_005f13f0(*(undefined4 *)(param_5 + 4));
    if ((local_28 == 0) ||
       (param_7 = *(uint *)(*(int *)(local_28 + 8) + 0x134) >> 5 & 1, param_7 != 0))
    goto LAB_00472b80;
    local_b4 = 0;
    param_7 = *(uint *)(local_28 + 0x8c) & 1;
    if (param_7 != 0) goto LAB_00472b80;
  }
  if ((((*(int *)(param_5 + 4) == 3) && (*(int *)(param_5 + 0x50) != 0)) &&
      (*(int *)(*(int *)(param_5 + 0x50) + 0x18) != 0)) &&
     ((iVar25 = FUN_005f13f0(3), iVar25 != 0 && (_DAT_00610fd8 == *(double *)(iVar25 + 0x48))))) {
    iVar32 = 1;
  }
  local_90 = iVar32;
  fVar35 = (float10)FUN_005c9630(param_1,param_5,0,local_308,local_128,0);
  local_168 = (double)fVar35;
  if (iVar32 != 0) {
    fVar35 = (float10)_DAT_006106d0;
  }
  local_80 = (double)(fVar35 * (float10)*(double *)(param_5 + 0x28));
  iVar32 = FUN_0047c7d0(param_5 + 0x98,0xca);
  local_d4 = (uint)(iVar32 != 0);
  if ((*(int *)(param_5 + 0x28) == 0) && (*(int *)(param_5 + 0x2c) == 0x3ff00000)) {
    local_30 = 0;
  }
  else {
    local_30 = 1;
  }
  if (local_80 == _DAT_00610fd8) {
    return 0;
  }
  if (local_30 != 0) {
    if (*(double *)(param_5 + 0x28) == _DAT_00610fd8) {
      param_7 = 4;
    }
    else {
      param_7 = ftol();
      if ((int)param_7 < 2) {
        param_7 = 2;
      }
    }
    local_2c = CreatePen(0,0,0);
    local_34 = SelectObject(param_2,local_2c);
    iVar25 = (*(int *)(param_8 + 0x2c) + *(int *)(param_8 + 0x24)) / 2;
    iVar32 = *(int *)(param_3 + 0x20);
    iVar31 = iVar25 + -4;
    MoveToEx(param_2,iVar32,iVar25,(LPPOINT)0x0);
    iVar25 = *(int *)(param_3 + 0x28);
    if (iVar32 < iVar25) {
      do {
        y = iVar31 + 8;
        iVar30 = iVar32 + param_7;
        if (iVar25 < (int)(iVar32 + param_7)) {
          y = iVar31 + 4;
          iVar30 = iVar25;
        }
        LineTo(param_2,iVar30,y);
        iVar31 = y + -8;
        iVar32 = iVar30 + param_7;
        if (*(int *)(param_3 + 0x28) < (int)(iVar30 + param_7)) {
          iVar31 = y + -4;
          iVar32 = *(int *)(param_3 + 0x28);
        }
        LineTo(param_2,iVar32,iVar31);
        iVar25 = *(int *)(param_3 + 0x28);
      } while (iVar32 < iVar25);
    }
    SelectObject(param_2,local_34);
    DeleteObject(local_2c);
  }
  uVar33 = local_30;
  iVar32 = *(int *)(param_8 + 0x34) + -6;
  local_94 = iVar32;
  uVar26 = ftol(iVar32);
  local_98 = FUN_004724b0(local_124,uVar26,iVar32);
  if ((int)local_98 < 1) {
    local_98 = 1;
  }
  local_c = *(uint *)(param_5 + 0x18);
  local_138 = *(uint *)(param_5 + 0x20);
  local_8 = *(int *)(param_5 + 0x1c);
  iStack_134 = *(int *)(param_5 + 0x24);
  local_120 = local_138 + local_c;
  local_d0 = (double)*(longlong *)(param_5 + 0x20);
  local_11c = iStack_134 + local_8 + (uint)CARRY4(local_138,local_c);
  iVar32 = *(int *)(param_5 + 0x50);
  local_4c = *(uint *)(iVar32 + 8);
  iStack_48 = *(int *)(iVar32 + 0xc);
  iVar32 = *(int *)(iVar32 + 0x18);
  local_174 = *(undefined4 *)(iVar32 + 0x108);
  local_188 = *(undefined4 *)(iVar32 + 0x110);
  local_184 = *(undefined4 *)(iVar32 + 0x114);
  local_74 = ftol();
  local_40 = *(int *)(uVar24 + 0x34);
  local_44 = *(uint *)(uVar24 + 0x30);
  local_130 = 0;
  local_12c = 0;
  local_158 = 0;
  local_154 = 0;
  local_6c = 0;
  local_68 = 0;
  if (local_28 != 0) {
    local_130 = *(undefined4 *)(local_28 + 0x78);
    local_12c = *(undefined4 *)(local_28 + 0x7c);
    local_158 = *(int *)(local_28 + 0x80);
    local_154 = *(int *)(local_28 + 0x84);
    local_6c = *(undefined4 *)(local_28 + 0x20);
    local_68 = *(undefined4 *)(local_28 + 0x24);
  }
  local_30 = *(uint *)(uVar24 + 0x58);
  local_3c._0_4_ = 1;
  local_34 = (HGDIOBJ)((-(uint)((local_30 & 0x100) != 0) & 0xc) + 2 + (-(uint)(uVar33 != 0) & 8));
  local_3c._4_4_ = 0;
  local_3c = 1;
  local_118 = 0;
  if (DAT_0064775c != 0) {
    param_7 = (int)local_34 + local_98;
    local_3c = ftol();
    if ((local_d4 == 0) && (local_90 == 0)) {
      uVar36 = ftol();
      uVar26 = (undefined4)((ulonglong)uVar36 >> 0x20);
      local_fc._0_4_ = (undefined4)uVar36;
      local_64 = 1;
      iStack_60 = 0;
      lVar37 = ftol();
      if (CONCAT44(uVar26,(undefined4)local_fc) < lVar37) {
        local_118 = 1;
        local_3c = local_74;
      }
      else {
        lVar37 = __allmul(lVar37,2,0);
        local_3c = local_3c;
        if (CONCAT44(uVar26,(undefined4)local_fc) < lVar37) {
          local_118 = 2;
          local_3c = local_74;
        }
      }
    }
    if (local_3c < 1) {
      local_3c = 1;
    }
  }
  uVar33 = 0;
  local_88 = 0;
  local_84 = 0;
  if (local_118 == 0) {
    local_64 = local_44 - local_c;
    iStack_60 = (local_40 - local_8) - (uint)(local_44 < local_c);
    local_24 = ftol();
LAB_00473093:
    if ((local_90 == 0) && (local_d4 == 0)) {
      *(uint *)(uVar24 + 0x58) = local_30 | 0x200;
    }
  }
  else {
    if ((local_8 < local_40) || ((local_8 <= local_40 && (local_c <= local_44)))) {
      local_64 = local_44 - local_c;
      iStack_60 = (local_40 - local_8) - (uint)(local_44 < local_c);
      uVar36 = ftol();
      local_24._4_4_ = (int)((ulonglong)uVar36 >> 0x20);
      uVar33 = (uint)uVar36 & 0xfffffffe;
    }
    else {
      local_24._4_4_ = 0;
    }
    lVar37 = ftol();
    local_24 = lVar37 + CONCAT44(local_24._4_4_,uVar33);
    local_3c = local_24 + local_74 + 2;
    if (local_118 != 1) goto LAB_00473093;
  }
  if (((longlong)local_24 < 0x100000000) && ((longlong)local_24 < 0)) {
    local_24 = CONCAT44(-(uint)((local_24 & 1) != 0),-((uint)local_24 & 1));
  }
  local_fc = CONCAT44(local_fc._4_4_,(undefined4)local_fc);
  local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0);
  if ((local_d4 == 0) &&
     (local_fc = CONCAT44(local_fc._4_4_,(undefined4)local_fc),
     local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0), local_90 == 0)) {
    local_64 = 1;
    iStack_60 = 0;
    local_d0 = (double)ftol();
    iVar32 = (int)((ulonglong)local_d0 >> 0x20);
    uVar36 = ftol();
    iVar25 = (int)((ulonglong)uVar36 >> 0x20);
    local_fc = CONCAT44(local_fc._4_4_,(undefined4)local_fc);
    local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0);
    if ((iVar25 <= iVar32) &&
       (((iVar25 < iVar32 ||
         (local_fc = CONCAT44(local_fc._4_4_,(undefined4)local_fc),
         local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0), (uint)uVar36 < (uint)local_d0)) &&
        (local_fc = CONCAT44(local_fc._4_4_,(undefined4)local_fc),
        local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0),
        _DAT_00610fd8 < *(double *)(uVar24 + 0x20))))) {
      param_7 = ftol();
      if ((int)param_7 < 0) {
        param_7 = 0;
      }
      else if (2 < (int)param_7) {
        param_7 = 2;
      }
      if ((*(uint *)(uVar24 + 0x58) & 0x100) == 0) {
        CVar27 = (-(uint)((*(uint *)(param_5 + 0x10) & 0x10) != 0) & 0x808080) + 0x404040;
      }
      else {
        CVar27 = 0x808080;
      }
      local_34 = (HGDIOBJ)SetBkColor(param_2,CVar27);
      local_a0 = FUN_005ceab0(param_1,param_5,local_44 - local_c,
                              (local_40 - local_8) - (uint)(local_44 < local_c),0,0,&local_88,0);
      do {
        uVar26 = *(undefined4 *)(uVar24 + 0x38);
        uVar1 = *(undefined4 *)(uVar24 + 0x3c);
        local_140 = uVar26;
        uStack_13c = uVar1;
        uVar36 = ftol();
        uVar33 = (uint)uVar36 - *(uint *)(uVar24 + 0x30);
        uVar28 = uVar33 - local_4c;
        local_64 = uVar28 + local_c;
        iStack_60 = (((((int)((ulonglong)uVar36 >> 0x20) - *(int *)(uVar24 + 0x34)) -
                      (uint)((uint)uVar36 < *(uint *)(uVar24 + 0x30))) - iStack_48) -
                    (uint)(uVar33 < local_4c)) + local_8 + (uint)CARRY4(uVar28,local_c);
        local_160 = (double)CONCAT44(iStack_60,local_64) * (double)*(int *)(uVar24 + 0x40);
        uVar36 = __alldiv(uVar26,uVar1,2,0);
        local_fc = uVar36;
        iVar32 = ftol();
        iVar32 = iVar32 + *(int *)(uVar24 + 0x44);
        if (iVar32 < -0x4000) {
          iVar25 = -0x4000;
        }
        else {
          iVar25 = 0x3fff;
          if (iVar32 < 0x4000) {
            iVar25 = iVar32;
          }
        }
        iVar32 = *(int *)(param_3 + 0x20);
        if (iVar32 <= iVar25) {
          iVar31 = *(int *)(param_3 + 0x28);
          if (iVar31 < iVar25) goto LAB_004733d7;
          iVar30 = *(int *)(param_8 + 0x2c);
          if (param_7 == 1) {
            local_b0.top = iVar30 + -3;
            lprect = &local_b0;
            local_b0.bottom = iVar30 + -2;
            local_b0.right = iVar25 + 1;
            local_b0.left = iVar25;
LAB_00473376:
            ExtTextOutA(param_2,0,0,2,lprect,(LPCSTR)0x0,0,(INT *)0x0);
          }
          else if (param_7 == 2) {
            local_10c.left = iVar32;
            if (iVar32 < iVar25 + -1) {
              local_10c.left = iVar25 + -1;
            }
            if (iVar25 + 1 < iVar31) {
              iVar31 = iVar25 + 1;
            }
            local_10c.right = iVar31 + 1;
            lprect = &local_10c;
            local_10c.top = iVar30 + -3;
            local_10c.bottom = iVar30 + -2;
            goto LAB_00473376;
          }
          local_1ac.top = iVar30 + -2;
          local_1ac.right = iVar25 + 1;
          local_1ac.left = iVar25;
          local_1ac.bottom = iVar30 + -1;
          ExtTextOutA(param_2,0,0,2,&local_1ac,(LPCSTR)0x0,0,(INT *)0x0);
        }
        local_a0 = local_a0 + 1;
      } while( true );
    }
  }
LAB_004733e8:
  if (local_b4 == 0) {
    FUN_005442b0(*(undefined4 *)(param_8 + 0xdc));
  }
  local_58 = local_58 + 3;
  local_50 = local_58 + local_94;
  if ((*(uint *)(uVar24 + 0x58) & 0x100) == 0) {
    CVar27 = -(uint)((*(uint *)(param_5 + 0x10) & 0x10) != 0) & 0xffffff;
  }
  else {
    CVar27 = 0x808080;
  }
  local_1b8 = SetBkColor(param_2,CVar27);
  h = (HGDIOBJ)_SfGetUIFont_4(0x6e);
  local_178 = SelectObject(param_2,h);
  lVar23 = CONCAT44(local_230._4_4_,(undefined4)local_230);
  lVar22 = CONCAT44(local_1e0._4_4_,(undefined4)local_1e0);
  lVar21 = CONCAT44(local_228._4_4_,(undefined4)local_228);
  lVar20 = CONCAT44(local_278._4_4_,(undefined4)local_278);
  lVar18 = CONCAT44(local_190._4_4_,(undefined4)local_190);
  uVar16._4_4_ = local_1ac.bottom;
  uVar16._0_4_ = local_1ac.right;
  lVar15 = CONCAT44(local_e4._4_4_,(undefined4)local_e4);
  lVar14 = CONCAT44(local_f4._4_4_,(undefined4)local_f4);
  uVar13 = CONCAT44(local_150._4_4_,(undefined4)local_150);
  lVar12 = CONCAT44(local_198._4_4_,(undefined4)local_198);
  lVar11 = CONCAT44(local_1b4._4_4_,(undefined4)local_1b4);
  lVar39 = CONCAT44(local_1c0._4_4_,(undefined4)local_1c0);
  uVar10 = CONCAT44(local_1c8._4_4_,(uint)local_1c8);
  lVar37 = CONCAT44(local_1d0._4_4_,(undefined4)local_1d0);
  uVar9 = CONCAT44(local_1f0._4_4_,(undefined4)local_1f0);
  uVar8 = CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
  uVar7 = CONCAT44(local_208._4_4_,(undefined4)local_208);
  uVar6 = CONCAT44(local_220._4_4_,(undefined4)local_220);
  uVar5 = CONCAT44(local_238._4_4_,(undefined4)local_238);
  uVar4 = CONCAT44(local_248._4_4_,(undefined4)local_248);
  uVar3 = CONCAT44(local_250._4_4_,(undefined4)local_250);
  uVar36 = CONCAT44(local_268._4_4_,(undefined4)local_268);
  local_110 = 1;
  lVar17 = local_3c;
  uVar19 = local_24;
  if ((longlong)local_24 < local_3c) {
    do {
      lVar38 = CONCAT44(local_8,local_c);
      local_3c._4_4_ = (int)((ulonglong)lVar17 >> 0x20);
      local_3c._0_4_ = (int)lVar17;
      local_74._0_4_ = *(HPEN *)(param_8 + 0xb8);
      local_78 = 0;
      local_74._4_4_ = *(undefined4 *)(param_8 + 0xbc);
      param_7 = 0;
      local_34 = (HGDIOBJ)0x0;
      local_30 = 0;
      local_28 = (*(int *)param_9 << 0x1f) >> 0x1f;
      local_8c = 0;
      local_c0 = 0;
      local_bc._0_4_ = 0;
      local_bc._4_4_ = 0;
      local_c8._0_4_ = 0;
      local_c8._4_4_ = 0;
      local_14._0_4_ = 0;
      local_14._4_4_ = 0;
      local_3c = lVar17;
      local_220 = uVar6;
      local_250 = uVar3;
      local_150 = uVar13;
      local_1c8 = uVar10;
      local_1f8 = uVar8;
      local_208 = uVar7;
      local_e4 = lVar15;
      local_1c0 = lVar39;
      local_198 = lVar12;
      local_268 = uVar36;
      local_1b4 = lVar11;
      local_1d0 = lVar37;
      local_238 = uVar5;
      local_248 = uVar4;
      local_1f0 = uVar9;
      local_24 = uVar19;
      local_190 = lVar18;
      local_278 = lVar20;
      local_228 = lVar21;
      local_1e0 = lVar22;
      local_230 = lVar23;
      if (local_118 == 0) {
        local_f4._0_4_ = 0;
        local_f4._4_4_ = 0;
        if (lVar17 < 2) {
          if ((*(uint *)(param_8 + 0x68) & 0x1000) == 0) {
            if ((*(uint *)(param_8 + 0x68) & 0x2000) == 0) {
              lVar38 = __alldiv(local_120 + local_c,
                                local_11c + local_8 + (uint)CARRY4(local_120,local_c),2,0);
              iStack_60 = *(int *)(uVar24 + 0x3c);
              uVar33 = *(uint *)(uVar24 + 0x30);
              local_1e8 = (uint)lVar38 - uVar33;
              iStack_1e4 = ((int)((ulonglong)lVar38 >> 0x20) - *(int *)(uVar24 + 0x34)) -
                           (uint)((uint)lVar38 < uVar33);
              local_64 = *(int *)(uVar24 + 0x38);
              local_1c = (double)(lVar38 - *(longlong *)(uVar24 + 0x30)) *
                         (double)*(int *)(uVar24 + 0x40);
              uVar36 = __alldiv(local_64,iStack_60,2,0);
              local_1f0 = uVar36;
              iVar32 = ftol();
              iVar32 = iVar32 + *(int *)(uVar24 + 0x44);
              if (iVar32 < -0x4000) {
                local_5c = -0x4000;
              }
              else {
                local_5c = 0x3fff;
                if (iVar32 < 0x4000) {
                  local_5c = iVar32;
                }
              }
              local_5c = local_5c - (int)local_98 / 2;
              local_54 = local_5c + local_98;
            }
            else {
              local_fc._4_4_ = *(undefined4 *)(uVar24 + 0x3c);
              uVar33 = local_120 - 1;
              local_fc._0_4_ = *(undefined4 *)(uVar24 + 0x38);
              iVar32 = local_11c - (uint)(local_120 == 0);
              lVar38 = CONCAT44(iVar32,uVar33);
              local_280 = uVar33 - *(uint *)(uVar24 + 0x30);
              iStack_27c = (iVar32 - *(int *)(uVar24 + 0x34)) -
                           (uint)(uVar33 < *(uint *)(uVar24 + 0x30));
              local_1c = (double)CONCAT44(iStack_27c,local_280) * (double)*(int *)(uVar24 + 0x40);
              uVar36 = __alldiv((undefined4)local_fc,local_fc._4_4_,2,0);
              local_248 = uVar36;
              local_54 = ftol();
              local_54 = local_54 + *(int *)(uVar24 + 0x44);
              if (local_54 < -0x4000) {
                local_54 = -0x4000;
              }
              else if (0x3fff < local_54) {
                local_54 = 0x3fff;
              }
              local_54 = local_54 + -2;
              local_5c = local_54 - local_98;
            }
          }
          else {
            uStack_13c = *(undefined4 *)(uVar24 + 0x3c);
            local_288 = local_c - *(uint *)(uVar24 + 0x30);
            iStack_284 = (local_8 - *(int *)(uVar24 + 0x34)) -
                         (uint)(local_c < *(uint *)(uVar24 + 0x30));
            local_140 = *(undefined4 *)(uVar24 + 0x38);
            local_1c = (double)CONCAT44(iStack_284,local_288) * (double)*(int *)(uVar24 + 0x40);
            uVar36 = __alldiv(local_140,uStack_13c,2,0);
            local_238 = uVar36;
            local_5c = ftol();
            local_5c = local_5c + *(int *)(uVar24 + 0x44);
            if (local_5c < -0x4000) {
              local_5c = -0x4000;
            }
            else if (0x3fff < local_5c) {
              local_5c = 0x3fff;
            }
            local_5c = local_5c + 3;
            local_54 = local_5c + local_98;
          }
          local_f4 = CONCAT44(local_f4._4_4_,(undefined4)local_f4);
          if (local_28 != 0) {
            local_bc = CONCAT44(local_8,local_c);
            local_c8 = CONCAT44(local_11c,local_120);
            local_f4 = CONCAT44(local_f4._4_4_,(undefined4)local_f4);
          }
        }
        else {
          local_1c = (double)(longlong)uVar19;
          local_260 = (int)local_3c + -1;
          iStack_25c = local_3c._4_4_ - (uint)((int)local_3c == 0);
          local_240 = local_138 - 1;
          iStack_23c = iStack_134 - (uint)(local_138 == 0);
          local_dc = (double)CONCAT44(iStack_23c,local_240) * local_1c;
          local_148 = local_260;
          local_144 = iStack_25c;
          uVar36 = __alldiv(local_260,iStack_25c,2,0);
          local_250 = uVar36;
          lVar38 = ftol();
          lVar38 = lVar38 + CONCAT44(local_8,local_c);
          uVar36 = ftol();
          local_150 = uVar36;
          lVar37 = __allmul(uVar36,3,0);
          local_a0 = lVar37;
          uVar36 = __allmul(local_150,2,0);
          local_1c8 = uVar36;
          uVar36 = __allmul(local_98,(int)local_98 >> 0x1f,local_150);
          local_d0 = (double)CONCAT44(local_144,local_148);
          uVar33 = local_138 - (uint)uVar36;
          uVar28 = uVar33 - (uint)local_1c8;
          local_270 = uVar28 - (uint)local_a0;
          iStack_26c = (((((iStack_134 - (int)((ulonglong)uVar36 >> 0x20)) -
                          (uint)(local_138 < (uint)uVar36)) - local_1c8._4_4_) -
                        (uint)(uVar33 < (uint)local_1c8)) - local_a0._4_4_) -
                       (uint)(uVar28 < (uint)local_a0);
          local_dc = (double)CONCAT44(iStack_26c,local_270);
          local_1c = local_1c * local_dc;
          uVar36 = __alldiv(local_148,local_144,2,0);
          local_1f8 = uVar36;
          lVar37 = ftol();
          local_f4 = lVar37 + local_a0 + CONCAT44(local_8,local_c);
          local_258 = (uint)local_f4 - *(uint *)(uVar24 + 0x30);
          local_1d8 = *(undefined4 *)(uVar24 + 0x38);
          iStack_254 = ((int)((ulonglong)local_f4 >> 0x20) - *(int *)(uVar24 + 0x34)) -
                       (uint)((uint)local_f4 < *(uint *)(uVar24 + 0x30));
          uStack_1d4 = *(undefined4 *)(uVar24 + 0x3c);
          local_1c = (double)CONCAT44(iStack_254,local_258) * (double)*(int *)(uVar24 + 0x40);
          uVar36 = __alldiv(local_1d8,uStack_1d4,2,0);
          local_208 = uVar36;
          local_5c = ftol();
          local_5c = local_5c + *(int *)(uVar24 + 0x44);
          if (local_5c < -0x4000) {
            local_5c = -0x4000;
          }
          else if (0x3fff < local_5c) {
            local_5c = 0x3fff;
          }
          local_54 = local_5c + local_98;
          if (local_28 != 0) {
            lVar37 = FUN_005ceab0(param_1,param_5,local_f4 - CONCAT44(local_8,local_c),0,0,&local_ec
                                  ,0);
            local_e4 = lVar37;
            lVar37 = FUN_00474af0(local_ec,local_e8,local_6c,local_68,
                                  *(undefined4 *)(param_5 + 0x28),*(undefined4 *)(param_5 + 0x2c));
            local_1c0 = lVar37;
            lVar37 = ftol();
            local_bc = (lVar37 - CONCAT44(iStack_48,local_4c)) + local_1c0 +
                       CONCAT44(local_8,local_c);
            lVar37 = local_f4;
            if (local_110 != 0) {
              lVar37 = CONCAT44(local_8,local_c);
            }
            if (local_bc < lVar37) {
              lVar37 = FUN_00474af0(local_ec,local_e8,local_6c,local_68,
                                    *(undefined4 *)(param_5 + 0x28),*(undefined4 *)(param_5 + 0x2c))
              ;
              local_278 = local_e4 + 1;
              local_198 = lVar37;
              lVar37 = ftol();
              local_bc = (lVar37 - CONCAT44(iStack_48,local_4c)) + local_198 +
                         CONCAT44(local_8,local_c);
            }
            iStack_17c = local_144;
            local_1e0 = local_24 + 1;
            local_1c = (double)(longlong)(local_24 + 1) * local_dc;
            local_180 = local_148;
            uVar36 = __alldiv(local_148,local_144,2,0);
            local_268 = uVar36;
            lVar37 = ftol();
            local_190 = lVar37 + local_a0 + CONCAT44(local_8,local_c);
            lVar37 = FUN_005ceab0(param_1,param_5,local_190 - CONCAT44(local_8,local_c),0,0,
                                  &local_ec,0);
            local_e4 = lVar37;
            lVar37 = FUN_00474af0(local_ec,local_e8,local_6c,local_68,
                                  *(undefined4 *)(param_5 + 0x28),*(undefined4 *)(param_5 + 0x2c));
            local_1b4 = lVar37;
            lVar37 = ftol();
            local_c8 = (lVar37 - CONCAT44(iStack_48,local_4c)) + local_1b4 +
                       CONCAT44(local_8,local_c);
            if (local_c8 < local_190) {
              lVar37 = FUN_00474af0(local_ec,local_e8,local_6c,local_68,
                                    *(undefined4 *)(param_5 + 0x28),*(undefined4 *)(param_5 + 0x2c))
              ;
              local_228 = local_e4 + 1;
              local_1d0 = lVar37;
              lVar37 = ftol();
              local_c8 = (lVar37 - CONCAT44(iStack_48,local_4c)) + local_1d0 +
                         CONCAT44(local_8,local_c);
            }
          }
        }
        local_14 = FUN_005ceab0(param_1,param_5,lVar38 - CONCAT44(local_8,local_c),0,0,&local_88,0);
        if (local_d4 == 0) {
          local_1c = ((double)local_14 / local_80) * _DAT_006105d0 + _DAT_00610560;
          lVar37 = FUN_00474af0(local_88,local_84,local_6c,local_68,*(undefined4 *)(param_5 + 0x28),
                                *(undefined4 *)(param_5 + 0x2c));
          lVar39 = ftol();
          lVar38 = lVar37 + (lVar39 - CONCAT44(iStack_48,local_4c)) + CONCAT44(local_8,local_c);
          lVar37 = local_f4;
          if (local_110 != 0) {
            lVar37 = CONCAT44(local_8,local_c);
          }
          if (lVar38 < lVar37) {
            local_14 = local_14 + 1;
            if (local_14 < CONCAT44(local_12c,local_130)) {
              local_14 = CONCAT44(local_12c,local_130);
            }
            else {
              lVar37 = CONCAT44(local_154 - (uint)(local_158 == 0),local_158 + -1);
              if (lVar37 < local_14) {
                local_14 = lVar37;
              }
            }
            local_1c = ((double)local_14 / local_80) * _DAT_006105d0 + _DAT_00610560;
            lVar37 = FUN_00474af0(local_88,local_84,local_6c,local_68,
                                  *(undefined4 *)(param_5 + 0x28),*(undefined4 *)(param_5 + 0x2c));
            lVar39 = ftol();
            lVar38 = lVar37 + (lVar39 - CONCAT44(iStack_48,local_4c)) + CONCAT44(local_8,local_c);
          }
          local_110 = 0;
        }
      }
      else {
        local_f4 = lVar14;
        lVar37 = ftol();
        lVar38 = (lVar37 - CONCAT44(iStack_48,local_4c)) + CONCAT44(local_8,local_c);
        local_14 = FUN_005ceab0(param_1,param_5,(lVar38 - CONCAT44(local_8,local_c)) + 2,0,0,
                                &local_88,0);
        uStack_16c = *(undefined4 *)(uVar24 + 0x3c);
        uVar33 = *(uint *)(uVar24 + 0x30);
        local_218 = (uint)lVar38 - uVar33;
        iStack_214 = ((int)((ulonglong)lVar38 >> 0x20) - *(int *)(uVar24 + 0x34)) -
                     (uint)((uint)lVar38 < uVar33);
        local_170 = *(undefined4 *)(uVar24 + 0x38);
        local_1c = (double)(lVar38 - *(longlong *)(uVar24 + 0x30)) * (double)*(int *)(uVar24 + 0x40)
        ;
        uVar36 = __alldiv(local_170,uStack_16c,2,0);
        local_220 = uVar36;
        iVar32 = ftol();
        iVar32 = iVar32 + *(int *)(uVar24 + 0x44);
        if (iVar32 < -0x4000) {
          local_5c = -0x4000;
        }
        else {
          local_5c = 0x3fff;
          if (iVar32 < 0x4000) {
            local_5c = iVar32;
          }
        }
        local_54 = local_5c + local_98;
        if (local_28 != 0) {
          local_230 = local_24 + local_118;
          local_bc = lVar38;
          lVar37 = ftol();
          local_c8 = (lVar37 - CONCAT44(iStack_48,local_4c)) + CONCAT44(local_8,local_c);
        }
      }
      local_2c = (HPEN)(uint)(*(int *)(param_3 + 0x20) <= local_54);
      iVar32 = *(int *)(param_3 + 0x28);
      if (iVar32 < local_5c) {
        local_2c = (HPEN)0x0;
      }
      uVar16 = local_1ac._8_8_;
      if (*(int *)(param_6 + 8) < local_5c) break;
      if (local_2c == (HPEN)0x0) {
        uVar19 = local_24;
        if (((*param_9 & 4) == 0) && (local_b4 == 0)) {
          FUN_00472770(local_14,param_8,0,1,param_10);
          uVar19 = local_24;
        }
      }
      else {
        local_44 = local_98;
        local_b0.top = local_58;
        local_b0.right = local_54;
        local_b0.bottom = local_50;
        local_40 = local_94;
        local_b0.left = local_5c;
        if (iVar32 < local_54) {
          local_b0.right = local_54 - (local_54 - iVar32);
          local_44 = local_98 - (local_54 - iVar32);
          local_1c = (double)CONCAT44(local_44,(undefined4)local_1c);
          local_dc = (double)CONCAT44(local_44,(undefined4)local_dc);
          local_74._0_4_ =
               (HPEN)(((longlong)(int)(HPEN)local_74 * (longlong)(int)local_44) /
                     (longlong)(int)local_98);
          local_2c = (HPEN)local_74;
        }
        if (local_5c < *(int *)(param_3 + 0x20)) {
          iVar32 = *(int *)(param_3 + 0x20) - local_5c;
          local_b0.left = local_5c + iVar32;
          uVar33 = local_44 - iVar32;
          local_dc = (double)CONCAT44(uVar33,(undefined4)local_dc);
          local_1c = (double)CONCAT44(uVar33,(undefined4)local_1c);
          local_2c = (HPEN)(((longlong)(int)(HPEN)local_74 * (longlong)(int)uVar33) /
                           (longlong)(int)local_44);
          local_34 = (HGDIOBJ)((int)(HPEN)local_74 - (int)local_2c);
          local_74._0_4_ = (HPEN)((int)(HPEN)local_74 - (int)local_34);
          local_44 = uVar33;
        }
        if (((int)local_44 < 9) && (local_94 < 7)) {
          CVar27 = SetBkColor(param_2,0x404040);
          local_298.left = local_b0.left;
          local_298.right = local_b0.left + local_44;
          local_298.top = local_b0.top;
          local_298.bottom = local_b0.top + local_40;
          ExtTextOutA(param_2,0,0,2,&local_298,(LPCSTR)0x0,0,(INT *)0x0);
          SetBkColor(param_2,CVar27);
          uVar19 = local_24;
        }
        else {
          if (((*param_9 & 4) == 0) && (local_b4 == 0)) {
            FUN_00472770(local_14,param_8,0,1,param_10);
          }
          if (local_28 != 0) {
            iVar32 = FUN_00472980(&local_78,&param_7,&local_10c,&local_14,&local_88,param_1,param_5,
                                  param_8,uVar24,local_bc,local_c8,(undefined4)local_168,
                                  local_168._4_4_,param_10,&local_c0,
                                  ~*(uint *)(uVar24 + 0x58) >> 8 & 1);
            if (iVar32 != 0) {
              local_1c = ((double)local_14 / local_80) * _DAT_006105d0 + _DAT_00610560;
              lVar37 = FUN_00474af0(local_88,local_84,local_6c,local_68,
                                    *(undefined4 *)(param_5 + 0x28),*(undefined4 *)(param_5 + 0x2c))
              ;
              lVar39 = ftol();
              lVar38 = lVar37 + (lVar39 - CONCAT44(iStack_48,local_4c)) + CONCAT44(local_8,local_c);
            }
          }
          if (local_b4 == 0) {
            local_28 = FUN_004727d0(local_14,&local_78,&param_7,&local_10c,param_5,0,0,
                                    ~*(uint *)(uVar24 + 0x58) >> 8 & 1,&local_8c,param_10);
            if (local_28 == 0) goto LAB_0047432b;
LAB_00474378:
            local_b0.bottom = local_b0.top + local_40;
            local_b0.right = local_44 + local_b0.left;
            if ((*(byte *)(param_3 + 0x4c) & 8) != 0) {
              InflateRect(&local_b0,-3,-3);
              InflateRect(&local_10c,-3,-3);
            }
            iVar32 = local_b0.right - local_b0.left;
            local_dc = (double)CONCAT44(iVar32,(undefined4)local_dc);
            if ((0 < iVar32) && (0 < local_b0.bottom - local_b0.top)) {
              pHVar29 = (HPEN)(local_10c.right - local_10c.left);
              local_1c = (double)CONCAT44(pHVar29,(undefined4)local_1c);
              if ((0 < (int)pHVar29) &&
                 ((0 < local_10c.bottom - local_10c.top && (0 < (int)(HPEN)local_74)))) {
                if ((int)(HPEN)local_74 < (int)pHVar29) {
                  pHVar29 = (HPEN)local_74;
                }
                iVar32 = DrawDibDraw(local_19c,param_2,local_b0.left,local_b0.top,iVar32,
                                     local_b0.bottom - local_b0.top,local_78,param_7,
                                     local_10c.left + (int)local_34,local_10c.top,pHVar29,
                                     local_10c.bottom - local_10c.top,0x1200);
                if (iVar32 == 0) {
                  local_28 = 0;
                }
              }
            }
          }
          else {
LAB_0047432b:
            local_28 = FUN_004727d0(local_14,&local_78,&param_7,&local_10c,param_5,1,0,
                                    ~*(uint *)(uVar24 + 0x58) >> 8 & 1,&local_8c,param_10);
            local_30 = 1;
            if (local_28 != 0) goto LAB_00474378;
          }
          if (local_8c != 0) {
            FUN_00544440(*(undefined4 *)(param_8 + 0xdc),local_8c);
          }
          local_34 = (HGDIOBJ)0x0;
          if ((((*param_9 & 4) != 0) || (local_30 != 0)) || (local_28 == 0)) {
            FUN_00543420(*(undefined4 *)(param_8 + 0xdc),&local_200);
            if ((local_200 == local_54 - local_5c) && (local_1fc == local_50 - local_58)) {
              bVar34 = true;
            }
            else {
              bVar34 = false;
            }
            if (((*param_9 & 0x10) == 0) || (bVar2 = false, bVar34)) {
              bVar2 = true;
            }
            if (((local_28 == 0) || (!bVar2)) || ((local_c0 == 0 && (local_30 != 0)))) {
              local_34 = (HGDIOBJ)0x1;
            }
          }
          uVar19 = local_24;
          if (local_90 == 0) {
            uVar33 = *(uint *)(uVar24 + 0x30);
            local_210 = (uint)lVar38 - uVar33;
            iStack_20c = ((int)((ulonglong)lVar38 >> 0x20) - *(int *)(uVar24 + 0x34)) -
                         (uint)((uint)lVar38 < uVar33);
            local_160 = *(double *)(uVar24 + 0x38);
            local_1c = (double)(lVar38 - *(longlong *)(uVar24 + 0x30)) *
                       (double)*(int *)(uVar24 + 0x40);
            uVar36 = __alldiv(*(undefined4 *)(uVar24 + 0x38),*(undefined4 *)(uVar24 + 0x3c),2,0);
            local_1ac._8_8_ = uVar36;
            iVar32 = ftol();
            iVar32 = iVar32 + *(int *)(uVar24 + 0x44);
            if (iVar32 < -0x4000) {
              iVar25 = -0x4000;
            }
            else {
              iVar25 = 0x3fff;
              if (iVar32 < 0x4000) {
                iVar25 = iVar32;
              }
            }
            iVar32 = *(int *)(param_8 + 0x2c);
            local_30 = iVar32 - 1;
            if (((local_d4 == 0) && (iVar31 = *(int *)(param_3 + 0x20), iVar31 <= iVar25)) &&
               (iVar30 = *(int *)(param_3 + 0x28), iVar25 <= iVar30)) {
              local_2c8.left = iVar25 + -2;
              if (iVar25 + -2 <= iVar31) {
                local_2c8.left = iVar31;
              }
              if (iVar25 + 2 < iVar30) {
                iVar30 = iVar25 + 2;
              }
              local_2c8.top = iVar32 + -4;
              local_2c8.right = iVar30 + 1;
              local_2c8.bottom = iVar32 + -3;
              ExtTextOutA(param_2,0,0,2,&local_2c8,(LPCSTR)0x0,0,(INT *)0x0);
              local_2a8.left = *(int *)(param_3 + 0x20);
              if (*(int *)(param_3 + 0x20) < iVar25 + -1) {
                local_2a8.left = iVar25 + -1;
              }
              local_2a8.right = iVar25 + 1;
              if (*(int *)(param_3 + 0x28) <= iVar25 + 1) {
                local_2a8.right = *(int *)(param_3 + 0x28);
              }
              local_2a8.top = local_30 - 2;
              local_2a8.right = local_2a8.right + 1;
              local_2a8.bottom = local_30 - 1;
              ExtTextOutA(param_2,0,0,2,&local_2a8,(LPCSTR)0x0,0,(INT *)0x0);
              local_2b8.top = local_30 - 1;
              local_2b8.right = iVar25 + 1;
              local_2b8.bottom = local_30;
              local_2b8.left = iVar25;
              ExtTextOutA(param_2,0,0,2,&local_2b8,(LPCSTR)0x0,0,(INT *)0x0);
            }
            uVar19 = local_24;
            if (DAT_00647768 != 0) {
              FUN_00474800(param_2,&local_5c,&local_b0,local_14,local_174,local_188,local_184,
                           (undefined4)local_168,local_168._4_4_,iVar25,
                           (-(uint)(local_34 != (HGDIOBJ)0x0) & 0xff808081) + 0xffffff);
              uVar19 = local_24;
            }
          }
        }
      }
      local_24._4_4_ = (int)(uVar19 >> 0x20);
      local_24._0_4_ = (uint)uVar19;
      if (local_118 == 0) {
        bVar34 = 0xfffffffe < (uint)local_24;
        local_24._0_4_ = (uint)local_24 + 1;
      }
      else {
        bVar34 = CARRY4((uint)local_24,local_118);
        local_24._0_4_ = (uint)local_24 + local_118;
      }
      local_24._4_4_ = local_24._4_4_ + (uint)bVar34;
      lVar17 = local_3c;
      uVar16 = local_1ac._8_8_;
      uVar36 = local_268;
      uVar3 = local_250;
      uVar4 = local_248;
      uVar5 = local_238;
      uVar6 = local_220;
      uVar7 = local_208;
      uVar8 = local_1f8;
      uVar9 = local_1f0;
      lVar37 = local_1d0;
      uVar10 = local_1c8;
      lVar39 = local_1c0;
      lVar11 = local_1b4;
      lVar12 = local_198;
      uVar13 = local_150;
      lVar14 = local_f4;
      lVar15 = local_e4;
      uVar19 = CONCAT44(local_24._4_4_,(uint)local_24);
      lVar18 = local_190;
      lVar20 = local_278;
      lVar21 = local_228;
      lVar22 = local_1e0;
      lVar23 = local_230;
    } while ((longlong)CONCAT44(local_24._4_4_,(uint)local_24) < local_3c);
  }
  local_1ac._8_8_ = uVar16;
  SelectObject(param_2,local_178);
  SetBkColor(param_2,local_1b8);
  if (local_b4 == 0) {
    FUN_00544300(*(undefined4 *)(param_8 + 0xdc));
  }
  return 1;
LAB_004733d7:
  SetBkColor(param_2,(COLORREF)local_34);
  goto LAB_004733e8;
}


