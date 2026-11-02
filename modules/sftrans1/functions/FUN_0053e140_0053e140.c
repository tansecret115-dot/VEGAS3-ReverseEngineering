/* Module: sftrans1.dll
   Function: FUN_0053e140
   Address: 0053e140
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0053e140(int *param_1)

{
  double dVar1;
  wchar_t wVar2;
  HDC pHVar3;
  ulonglong uVar4;
  LPVOID pvVar5;
  undefined1 uVar6;
  ushort uVar7;
  HGLOBAL pvVar8;
  int iVar9;
  HFONT pHVar10;
  DWORD DVar11;
  HGDIOBJ pvVar12;
  undefined4 uVar13;
  code *pcVar14;
  code *pcVar15;
  uint uVar16;
  UINT uChar;
  _GLYPHMETRICS *p_Var17;
  undefined4 *puVar18;
  code *pcVar19;
  uint uVar20;
  wchar_t *pwVar21;
  int iVar22;
  int nDenominator;
  double local_250;
  undefined8 local_248;
  int local_240;
  int local_23c;
  double local_238;
  LPVOID local_22c;
  double local_228;
  HGDIOBJ local_21c;
  double local_218;
  _GLYPHMETRICS local_20c;
  int local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  float fStack_1ec;
  float local_1e8;
  undefined4 local_1e4;
  double local_1e0;
  double local_1d8;
  wchar_t local_1d0;
  short sStack_1ce;
  short sStack_1cc;
  undefined2 uStack_1ca;
  MAT2 local_1c8;
  undefined8 local_1b8;
  float local_1b0;
  undefined4 local_1ac;
  uint local_1a4;
  HGDIOBJ local_1a0;
  size_t local_19c;
  undefined4 local_198;
  DWORD local_194;
  undefined4 local_190;
  undefined4 local_18c;
  wchar_t *local_188;
  uint local_184;
  uchar local_180 [32];
  int local_160;
  int local_15c;
  int local_158;
  undefined4 local_154;
  short local_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_140;
  wchar_t local_13c;
  wchar_t local_13a;
  short local_138;
  int local_134;
  uint local_130;
  LPVOID local_12c;
  _GLYPHMETRICS local_128;
  uint local_114;
  undefined4 uStack_110;
  uint local_10c;
  undefined4 uStack_108;
  uint local_104;
  undefined4 uStack_100;
  uint local_fc;
  undefined4 uStack_f8;
  uint local_f4;
  undefined4 uStack_f0;
  uint local_ec;
  undefined4 uStack_e8;
  uint local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 *local_d4;
  uint local_d0;
  uchar local_cc [32];
  int local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  short local_9c;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  LOGFONTA local_88;
  LOGFONTA local_4c;
  double local_10;
  
  uVar20 = param_1[9] + 3U & 0xfffffffc;
  uVar16 = (param_1[10] + 2) * uVar20;
  if (((uVar16 < 0x1312d01) && (uVar16 < (uint)param_1[0x12] || uVar16 - param_1[0x12] == 0)) ||
     (uVar16 = param_1[0x12], uVar16 < 0x1312d01)) {
    if (uVar16 == 0) {
      return 0x80004005;
    }
  }
  else {
    uVar16 = 20000000;
  }
  pvVar8 = GlobalAlloc(0x40,uVar16);
  local_12c = GlobalLock(pvVar8);
  if (local_12c == (LPVOID)0x0) {
    return 0x8007000e;
  }
  local_22c = (LPVOID)((int)local_12c + uVar20);
  local_194 = uVar16 + uVar20 * -2;
  if (param_1[0x29] != 0) {
    iVar9 = param_1[6];
    local_1b0 = *(float *)(iVar9 + 0x98) * *(float *)(iVar9 + 0x9c);
    local_1ac = *(undefined4 *)(iVar9 + 0x9c);
    local_1b8._4_4_ = *(float *)(iVar9 + 0x94) * *(float *)(iVar9 + 0x9c);
    local_1b8._0_4_ = *(float *)(iVar9 + 0x90) * *(float *)(iVar9 + 0x9c);
    uVar6 = ftol();
    *(undefined1 *)((int)param_1 + 0x12a) = uVar6;
    uVar6 = ftol();
    *(undefined1 *)((int)param_1 + 0x129) = uVar6;
    uVar6 = ftol();
    *(undefined1 *)(param_1 + 0x4a) = uVar6;
    uVar6 = ftol();
    *(undefined1 *)((int)param_1 + 299) = uVar6;
    FUN_004e3070(param_1 + 0x2a,param_1[0x36],0,0,local_1b0,local_1b8._4_4_,(float)local_1b8,
                 local_1ac,3);
  }
  uVar16 = param_1[0x24];
  sStack_1cc = 0;
  uStack_1ca = 0;
  local_1d0 = (wchar_t)uVar16;
  sStack_1ce = (short)(uVar16 >> 0x10);
  local_238 = 0.0;
  local_218 = 0.0;
  local_228 = 0.0;
  local_10 = (double)param_1[0x13] + *(double *)(param_1 + 0x16) + (double)uVar16;
  local_1d8 = 0.0;
  local_1b8 = (double)param_1[0x14] + *(double *)(param_1 + 0x1a) + *(double *)(param_1 + 0x18) +
              (double)uVar16;
  if (param_1[0x37] != 0) {
    iVar9 = param_1[6];
    if (*(int *)(iVar9 + 0xc4) == 0) {
      param_1[0x4c] = 0;
      *(undefined1 *)((int)param_1 + 0x12f) = 0xff;
      *(undefined1 *)((int)param_1 + 0x12d) = 0xff;
      *(undefined1 *)(param_1 + 0x4b) = 0xff;
      *(undefined1 *)((int)param_1 + 0x12e) = 0xff;
      FUN_004e3070(param_1 + 0x38,param_1[0x44],0,0,0,0,0,0,3);
    }
    else {
      local_1e8 = *(float *)(iVar9 + 0xac) * *(float *)(iVar9 + 0xb0);
      fStack_1ec = *(float *)(iVar9 + 0xa8) * *(float *)(iVar9 + 0xb0);
      local_1f0 = *(float *)(iVar9 + 0xa4) * *(float *)(iVar9 + 0xb0);
      local_1e4 = *(undefined4 *)(iVar9 + 0xb0);
      uVar6 = ftol();
      *(undefined1 *)((int)param_1 + 0x132) = uVar6;
      uVar6 = ftol();
      *(undefined1 *)((int)param_1 + 0x131) = uVar6;
      uVar6 = ftol();
      *(undefined1 *)(param_1 + 0x4c) = uVar6;
      uVar6 = ftol();
      *(undefined1 *)((int)param_1 + 0x133) = uVar6;
      FUN_004e3070(param_1 + 0x38,param_1[0x44],0,0,local_1e8,fStack_1ec,local_1f0,local_1e4,3);
      uVar6 = ftol();
      *(undefined1 *)((int)param_1 + 0x12e) = uVar6;
      uVar6 = ftol();
      *(undefined1 *)((int)param_1 + 0x12d) = uVar6;
      uVar6 = ftol();
      *(undefined1 *)(param_1 + 0x4b) = uVar6;
      uVar6 = ftol();
      *(undefined1 *)((int)param_1 + 0x12f) = uVar6;
    }
  }
  pcVar19 = GlobalHandle_exref;
  local_1c8.eM11.fract = 0;
  local_1c8.eM11.value = 1;
  local_1c8.eM22.fract = 0;
  local_1c8.eM22.value = 1;
  local_1c8.eM12.fract = 0;
  local_1c8.eM12.value = 0;
  local_1c8.eM21.fract = 0;
  local_1c8.eM21.value = 0;
  local_188 = (wchar_t *)0x0;
  local_184 = 0;
  local_d4 = (undefined4 *)0x0;
  local_d0 = 0;
  local_198 = 1;
  local_134 = *(int *)param_1[5];
  local_1f8 = 0;
  if (local_134 == 0) goto LAB_0053f44c;
  iVar9 = param_1[0x52];
  local_23c = ((int *)param_1[5])[2];
  if (iVar9 == 0) {
    if ((*(byte *)(param_1[6] + 0x44) & 0x80) == 0) {
      dVar1 = *(double *)(local_23c + 0x18);
      goto LAB_0053e55c;
    }
    local_1e0 = (*(double *)(local_23c + 0x30) + *(double *)(param_1 + 0x4e)) -
                *(double *)(local_23c + 0x18) * *(double *)(param_1 + 0x54);
  }
  else if ((0 < iVar9) && (iVar9 < 3)) {
    dVar1 = *(double *)(local_23c + 0x20);
LAB_0053e55c:
    local_1e0 = *(double *)(param_1 + 0x4e) - dVar1 * *(double *)(param_1 + 0x54);
  }
  iVar9 = param_1[1];
  if ((iVar9 == 0) || ((*(int *)(param_1[6] + 0x70) != 0 && (param_1[0x29] != 0)))) {
    uVar6 = ftol();
    *(undefined1 *)((int)param_1 + 0x126) = uVar6;
    uVar6 = ftol();
    *(undefined1 *)((int)param_1 + 0x125) = uVar6;
    uVar6 = ftol();
    *(undefined1 *)(param_1 + 0x49) = uVar6;
    uVar6 = ftol();
    *(undefined1 *)((int)param_1 + 0x127) = uVar6;
  }
  if (iVar9 == 0) {
    iVar9 = FUN_0053b680(&local_190);
  }
  else {
    iVar9 = FUN_00543ae0(&local_190,&local_198);
  }
  if (-1 < iVar9) {
    do {
      if (param_1[1] == 0) {
        local_1a4 = 0;
LAB_0053e6ec:
        local_1f4 = 0;
      }
      else {
        iVar9 = FUN_00543ae0(&local_dc,&local_198);
        local_1a4 = (uint)(-1 < iVar9);
        if (((((local_1a4 == 0) || (local_160 != local_ac)) || (local_15c != local_a8)) ||
            ((local_158 != local_a4 || (local_150 != local_9c)))) ||
           (iVar9 = lstrcmpA((LPCSTR)local_180,(LPCSTR)local_cc), iVar9 != 0)) goto LAB_0053e6ec;
        local_1f4 = CONCAT22(local_1f4._2_2_,*(undefined2 *)local_d4);
      }
      nDenominator = 0x48;
      iVar22 = 0x60;
      iVar9 = ftol();
      local_88.lfHeight = MulDiv(iVar9,iVar22,nDenominator);
      local_88.lfHeight = -local_88.lfHeight;
      if (-1 < local_88.lfHeight) {
        local_88.lfHeight = -1;
      }
      local_88.lfWidth = 0;
      local_88.lfEscapement = 0;
      local_88.lfOrientation = 0;
      local_88.lfWeight = (-(uint)(local_15c != 0) & 300) + 400;
      local_88.lfItalic = (BYTE)local_158;
      local_88.lfUnderline = '\0';
      local_88.lfStrikeOut = '\0';
      local_88.lfCharSet = (BYTE)local_150;
      local_88.lfOutPrecision = '\a';
      local_88.lfClipPrecision = '\0';
      local_88.lfQuality = '\0';
      local_88.lfPitchAndFamily = '\0';
      _mbscpy((uchar *)local_88.lfFaceName,local_180);
      pHVar3 = (HDC)param_1[3];
      pHVar10 = CreateFontIndirectA(&local_88);
      if (pHVar10 != (HFONT)0x0) {
        local_1a0 = SelectObject(pHVar3,pHVar10);
        if ((param_1[0x56] == 0) || (local_160 < *(int *)(param_1[6] + 0x3c))) {
          iVar9 = -0x7fffbffb;
        }
        else {
          iVar9 = FUN_00542e20(param_1[3],&local_88);
        }
        local_21c = (HGDIOBJ)0x0;
        local_130 = (uint)(-1 < iVar9);
        if (*param_1 == 0) {
LAB_0053e94a:
          if (((param_1[1] != 0) && (*(int *)(param_1[6] + 0x70) == 0)) && (param_1[0x29] != 0)) {
            *(undefined1 *)((int)param_1 + 0x126) = (undefined1)local_148;
            *(undefined1 *)((int)param_1 + 0x125) = local_148._1_1_;
            *(char *)(param_1 + 0x49) = (char)((uint)local_148 >> 0x10);
            uVar6 = ftol();
            *(undefined1 *)((int)param_1 + 0x127) = uVar6;
          }
          local_19c = wcslen(local_188);
          local_240 = 0;
          if (0 < (int)local_19c) {
            do {
              if ((local_188[local_240] == L'\n') || (local_188[local_240] == L'\r')) {
                local_1f8 = local_1f8 + 1;
                if (local_1f8 < local_134) {
                  iVar9 = param_1[0x52];
                  local_23c = *(int *)(param_1[5] + 4) * local_1f8 + *(int *)(param_1[5] + 8);
                  if (iVar9 == 0) {
                    if ((*(byte *)(param_1[6] + 0x44) & 0x80) == 0) {
                      dVar1 = *(double *)(local_23c + 0x18);
                      goto LAB_0053f252;
                    }
                    local_1e0 = (*(double *)(local_23c + 0x30) + *(double *)(param_1 + 0x4e)) -
                                *(double *)(local_23c + 0x18) * *(double *)(param_1 + 0x54);
                  }
                  else if ((0 < iVar9) && (iVar9 < 3)) {
                    dVar1 = *(double *)(local_23c + 0x20);
LAB_0053f252:
                    local_1e0 = *(double *)(param_1 + 0x4e) - dVar1 * *(double *)(param_1 + 0x54);
                  }
                  local_1d8 = 0.0;
                  local_228 = 0.0;
                  local_218 = 0.0;
                  local_238 = 0.0;
                }
              }
              else {
                local_20c.gmBlackBoxX = 0;
                local_20c.gmBlackBoxY = 0;
                local_20c.gmptGlyphOrigin.x = 0;
                local_20c.gmptGlyphOrigin.y = 0;
                local_20c.gmCellIncX = 0;
                local_20c.gmCellIncY = 0;
                local_128.gmBlackBoxX = 0;
                local_128.gmBlackBoxY = 0;
                local_128.gmptGlyphOrigin.x = 0;
                local_128.gmptGlyphOrigin.y = 0;
                local_128.gmCellIncX = 0;
                local_128.gmCellIncY = 0;
                wVar2 = local_188[local_240];
                if (wVar2 != L'\0') {
                  if (wVar2 == L' ') {
                    DVar11 = GetGlyphOutlineA((HDC)param_1[3],0x20,param_1[0x46],&local_20c,0,
                                              (LPVOID)0x0,&local_1c8);
joined_r0x0053ed08:
                    if (DVar11 == 0xffffffff) goto LAB_0053f2ab;
                    uVar4 = (ulonglong)local_248 >> 0x20;
                    local_248 = (double)CONCAT44((int)uVar4,1);
                  }
                  else {
                    if (wVar2 == L'\t') {
                      DVar11 = GetGlyphOutlineA((HDC)param_1[3],0x20,param_1[0x46],&local_20c,0,
                                                (LPVOID)0x0,&local_1c8);
                      goto joined_r0x0053ed08;
                    }
                    local_248 = (double)((ulonglong)local_248 & 0xffffffff00000000);
                    uVar7 = FUN_00544c00(param_1[3],wVar2,param_1[0x58]);
                    pvVar5 = local_22c;
                    uVar16 = param_1[0x46];
                    uChar = (UINT)uVar7;
                    if (uChar == 0) {
                      uChar = (UINT)(ushort)local_188[local_240];
                    }
                    else {
                      uVar16 = uVar16 | 0x80;
                    }
                    if (*param_1 != 0) {
                      DVar11 = GetGlyphOutlineA((HDC)param_1[3],uChar,uVar16,&local_20c,0,
                                                (LPVOID)0x0,&local_1c8);
                      if (DVar11 == 0xffffffff) {
                        DVar11 = GetGlyphOutlineA((HDC)param_1[3],0x20,param_1[0x46],&local_20c,0,
                                                  (LPVOID)0x0,&local_1c8);
                      }
                      else {
                        DVar11 = GetGlyphOutlineA((HDC)param_1[4],uChar,uVar16,&local_128,local_194,
                                                  local_22c,&local_1c8);
                        if (DVar11 == 0xffffffff) {
                          DVar11 = GetGlyphOutlineA((HDC)param_1[3],0x20,param_1[0x46],&local_20c,0,
                                                    (LPVOID)0x0,&local_1c8);
                        }
                        else {
                          uVar16 = param_1[0x12];
                          iVar9 = (local_128.gmBlackBoxX + 3 & 0xfffffffc) * local_128.gmBlackBoxY;
                          if (20000000 < uVar16) {
                            uVar16 = 20000000;
                          }
                          if (((local_128.gmBlackBoxX <= (uint)param_1[9]) &&
                              (local_128.gmBlackBoxY <= (uint)param_1[10])) &&
                             (iVar9 - uVar16 == 0 || iVar9 < (int)uVar16)) {
                            puVar18 = (undefined4 *)(iVar9 + (int)local_22c);
                            for (uVar16 = local_128.gmBlackBoxX >> 2; uVar16 != 0;
                                uVar16 = uVar16 - 1) {
                              *puVar18 = 0;
                              puVar18 = puVar18 + 1;
                            }
                            for (uVar16 = local_128.gmBlackBoxX & 3; uVar16 != 0;
                                uVar16 = uVar16 - 1) {
                              *(undefined1 *)puVar18 = 0;
                              puVar18 = (undefined4 *)((int)puVar18 + 1);
                            }
                            goto LAB_0053ed16;
                          }
                          DVar11 = GetGlyphOutlineA((HDC)param_1[3],0x20,param_1[0x46],&local_20c,0,
                                                    (LPVOID)0x0,&local_1c8);
                        }
                      }
                      goto joined_r0x0053ed08;
                    }
                    DVar11 = GetGlyphOutlineA((HDC)param_1[3],uChar,uVar16,&local_20c,local_194,
                                              local_22c,&local_1c8);
                    if (DVar11 == 0xffffffff) {
                      DVar11 = GetGlyphOutlineA((HDC)param_1[3],0x20,param_1[0x46],&local_20c,0,
                                                (LPVOID)0x0,&local_1c8);
                      goto joined_r0x0053ed08;
                    }
                    uVar16 = param_1[0x12];
                    iVar9 = (local_20c.gmBlackBoxX + 3 & 0xfffffffc) * local_20c.gmBlackBoxY;
                    if (20000000 < uVar16) {
                      uVar16 = 20000000;
                    }
                    if ((((uint)param_1[9] < local_20c.gmBlackBoxX) ||
                        ((uint)param_1[10] < local_20c.gmBlackBoxY)) ||
                       (iVar9 - uVar16 != 0 && (int)uVar16 <= iVar9)) {
                      DVar11 = GetGlyphOutlineA((HDC)param_1[3],0x20,param_1[0x46],&local_20c,0,
                                                (LPVOID)0x0,&local_1c8);
                      goto joined_r0x0053ed08;
                    }
                    puVar18 = (undefined4 *)(iVar9 + (int)pvVar5);
                    for (uVar16 = local_20c.gmBlackBoxX >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                      *puVar18 = 0;
                      puVar18 = puVar18 + 1;
                    }
                    for (uVar16 = local_20c.gmBlackBoxX & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                      *(undefined1 *)puVar18 = 0;
                      puVar18 = (undefined4 *)((int)puVar18 + 1);
                    }
                  }
LAB_0053ed16:
                  if (local_130 != 0) {
                    if (local_240 < (int)(local_19c - 1)) {
                      local_13c = local_188[local_240];
                      local_13a = local_188[local_240 + 1];
                      iVar9 = FUN_00543120(&local_13c);
                      if (-1 < iVar9) {
                        local_20c.gmCellIncX = local_20c.gmCellIncX + local_138;
                      }
                    }
                    else if ((short)local_1f4 != 0) {
                      local_1d0 = local_188[local_240];
                      sStack_1ce = (short)local_1f4;
                      iVar9 = FUN_00543120(&local_1d0);
                      if (-1 < iVar9) {
                        local_20c.gmCellIncX = local_20c.gmCellIncX + sStack_1cc;
                      }
                    }
                  }
                  iVar9 = param_1[6];
                  iVar22 = param_1[0x52];
                  local_250 = (double)(int)local_20c.gmCellIncX * *(double *)(iVar9 + 0x30);
                  if (iVar22 == 0) {
                    local_218 = (_DAT_00555908 - *(double *)(iVar9 + 0x10)) *
                                ((*(double *)(local_23c + 0x18) - local_250) *
                                 *(double *)(param_1 + 0x54) - local_238) + local_238;
                    local_238 = local_250 + local_238;
                  }
                  else if (iVar22 == 1) {
                    local_218 = local_228;
                    local_228 = (*(double *)(iVar9 + 0x10) - _DAT_00555908) *
                                *(double *)(local_23c + 0x28) + local_250 + local_228;
                  }
                  else if (iVar22 == 2) {
                    dVar1 = (_DAT_00555908 - *(double *)(iVar9 + 0x10)) *
                            ((*(double *)(local_23c + 0x18) - local_250) *
                             *(double *)(param_1 + 0x54) - local_238) + local_238;
                    local_238 = local_250 + local_238;
                    if (dVar1 < local_1d8) {
                      local_1d8 = dVar1;
                    }
                    local_218 = (local_228 - (dVar1 - local_1d8)) *
                                (*(double *)(iVar9 + 0x10) / *(double *)(iVar9 + 0x18)) +
                                (dVar1 - local_1d8);
                    local_228 = (*(double *)(iVar9 + 0x10) - _DAT_00555908) *
                                *(double *)(local_23c + 0x28) + local_250 + local_228;
                  }
                  if ((int)local_248 == 0) {
                    p_Var17 = &local_20c;
                    if (*param_1 != 0) {
                      p_Var17 = &local_128;
                    }
                    local_248 = (double)(p_Var17->gmptGlyphOrigin).x + local_1e0 + local_10 +
                                local_218;
                    local_250 = (local_1b8 + *(double *)(local_23c + 0x10)) -
                                (double)(p_Var17->gmptGlyphOrigin).y;
                    iVar22 = *(int *)(iVar9 + 0x5c);
                    if (iVar22 == 0) {
                      local_f4 = p_Var17->gmBlackBoxX;
                      uStack_f0 = 0;
                      if ((double)param_1[0x20] < (double)local_f4 + local_248) goto LAB_0053efc0;
                    }
                    else {
                      if (iVar22 == 1) {
                        iVar22 = param_1[0x20];
                      }
                      else {
                        if (iVar22 != 2) goto LAB_0053efc0;
                        local_e4 = p_Var17->gmBlackBoxX;
                        uStack_e0 = 0;
                        if ((double)local_e4 + local_248 <= (double)param_1[0x20])
                        goto LAB_0053f2ab;
                        iVar22 = param_1[0x25];
                      }
                      if ((double)iVar22 <= local_248) {
LAB_0053efc0:
                        iVar22 = *(int *)(iVar9 + 0x60);
                        if (iVar22 == 0) {
                          local_114 = p_Var17->gmBlackBoxY;
                          uStack_110 = 0;
                          if ((double)param_1[0x21] < (double)local_114 + local_250)
                          goto LAB_0053f05b;
                        }
                        else {
                          if (iVar22 == 1) {
                            if (local_250 < (double)param_1[0x21]) goto LAB_0053f2ab;
                          }
                          else if (iVar22 != 2) goto LAB_0053f05b;
                          local_fc = p_Var17->gmBlackBoxY;
                          uStack_f8 = 0;
                          if (((double)param_1[0x21] < (double)local_fc + local_250) &&
                             ((double)param_1[0x26] <= local_250)) {
LAB_0053f05b:
                            iVar22 = *(int *)(iVar9 + 100);
                            if (iVar22 == 0) {
                              if ((double)param_1[0x22] <= local_248) goto LAB_0053f2ab;
                            }
                            else if (iVar22 == 1) {
                              local_104 = p_Var17->gmBlackBoxX;
                              uStack_100 = 0;
                              if ((double)param_1[0x22] < (double)local_104 + local_248)
                              goto LAB_0053f2ab;
                            }
                            else if (iVar22 == 2) {
                              if (local_248 < (double)param_1[0x22]) {
                                local_10c = p_Var17->gmBlackBoxX;
                                uStack_108 = 0;
                                if ((double)local_10c + local_248 <= (double)param_1[0x27])
                                goto LAB_0053f0f5;
                              }
                              goto LAB_0053f2ab;
                            }
LAB_0053f0f5:
                            iVar9 = *(int *)(iVar9 + 0x68);
                            if (iVar9 == 0) {
                              if ((double)param_1[0x23] <= local_250) goto LAB_0053f2ab;
                            }
                            else if (iVar9 == 1) {
                              local_1f0 = (float)p_Var17->gmBlackBoxY;
                              fStack_1ec = 0.0;
                              if ((double)param_1[0x23] < (double)(uint)local_1f0 + local_250)
                              goto LAB_0053f2ab;
                            }
                            else if (iVar9 == 2) {
                              if (local_250 < (double)param_1[0x23]) {
                                local_ec = p_Var17->gmBlackBoxY;
                                uStack_e8 = 0;
                                if ((double)local_ec + local_250 <= (double)param_1[0x28])
                                goto LAB_0053f188;
                              }
                              goto LAB_0053f2ab;
                            }
LAB_0053f188:
                            local_248 = local_248 - (double)param_1[0x20];
                            local_250 = local_250 - (double)param_1[0x21];
                            if (param_1[0x29] != 0) {
                              FUN_0053d1c0(&local_248,&local_250,p_Var17,local_22c,1);
                            }
                            if (param_1[0x37] != 0) {
                              FUN_0053d1c0(&local_248,&local_250,p_Var17,local_22c,0);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_0053f2ab:
              local_240 = local_240 + 1;
            } while (local_240 < (int)local_19c);
          }
          if ((local_1a0 != (HGDIOBJ)0x0) &&
             (pvVar12 = SelectObject((HDC)param_1[3],local_1a0), pvVar12 != (HGDIOBJ)0x0)) {
            DeleteObject(pvVar12);
          }
          if ((*param_1 == 0) || (local_21c == (HGDIOBJ)0x0)) goto LAB_0053f308;
          pvVar12 = SelectObject((HDC)param_1[4],local_21c);
        }
        else {
          local_21c = (HGDIOBJ)ftol();
          iVar9 = ftol();
          local_4c.lfHeight = MulDiv(iVar9,0x60,0x48);
          local_4c.lfHeight = -local_4c.lfHeight;
          if (-1 < local_4c.lfHeight) {
            local_4c.lfHeight = -1;
          }
          local_4c.lfWidth = 0;
          local_4c.lfEscapement = 0;
          local_4c.lfOrientation = 0;
          local_4c.lfWeight = (-(uint)(local_15c != 0) & 300) + 400;
          local_4c.lfItalic = (BYTE)local_158;
          local_4c.lfUnderline = '\0';
          local_4c.lfStrikeOut = '\0';
          local_4c.lfCharSet = (BYTE)local_150;
          local_4c.lfOutPrecision = '\a';
          local_4c.lfClipPrecision = '\0';
          local_4c.lfQuality = '\0';
          local_4c.lfPitchAndFamily = '\0';
          _mbscpy((uchar *)local_4c.lfFaceName,local_180);
          pHVar3 = (HDC)param_1[4];
          pHVar10 = CreateFontIndirectA(&local_4c);
          if (pHVar10 != (HFONT)0x0) {
            local_21c = SelectObject(pHVar3,pHVar10);
            goto LAB_0053e94a;
          }
          if (local_1a0 == (HGDIOBJ)0x0) goto LAB_0053f308;
          pvVar12 = SelectObject((HDC)param_1[3],local_1a0);
        }
        if (pvVar12 != (HGDIOBJ)0x0) {
          DeleteObject(pvVar12);
        }
      }
LAB_0053f308:
      local_190 = local_dc;
      local_18c = local_d8;
      _mbscpy(local_180,local_cc);
      uVar16 = local_d0;
      pwVar21 = local_188;
      local_158 = local_a4;
      local_160 = local_ac;
      local_15c = local_a8;
      local_148 = local_94;
      local_154 = local_a0;
      local_150 = local_9c;
      local_144 = local_90;
      local_140 = local_8c;
      local_250 = (double)CONCAT44(local_250._4_4_,local_d4);
      puVar18 = local_d4;
      if (local_188 != (wchar_t *)0x0) {
        pvVar8 = GlobalHandle(local_188);
        GlobalUnlock(pvVar8);
        pvVar8 = GlobalHandle(pwVar21);
        GlobalFree(pvVar8);
        local_188 = (wchar_t *)0x0;
        puVar18 = local_250._0_4_;
      }
      if (puVar18 != (undefined4 *)0x0) {
        pvVar8 = GlobalAlloc(0x40,uVar16 * 2);
        local_188 = GlobalLock(pvVar8);
        if (local_188 != (wchar_t *)0x0) {
          pwVar21 = local_188;
          for (uVar20 = (uVar16 & 0x7fffffff) >> 1; uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined4 *)pwVar21 = *puVar18;
            puVar18 = puVar18 + 1;
            pwVar21 = pwVar21 + 2;
          }
          for (uVar20 = uVar16 * 2 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined1 *)pwVar21 = *(undefined1 *)puVar18;
            puVar18 = (undefined4 *)((int)puVar18 + 1);
            pwVar21 = (wchar_t *)((int)pwVar21 + 1);
          }
          local_184 = uVar16;
        }
      }
      pcVar19 = GlobalHandle_exref;
    } while (local_1a4 != 0);
  }
LAB_0053f44c:
  pvVar5 = local_12c;
  pcVar14 = GlobalUnlock_exref;
  pcVar15 = GlobalFree_exref;
  if (local_12c != (LPVOID)0x0) {
    pvVar8 = (HGLOBAL)(*pcVar19)(local_12c);
    pcVar14 = GlobalUnlock_exref;
    GlobalUnlock(pvVar8);
    pvVar8 = (HGLOBAL)(*pcVar19)(pvVar5);
    pcVar15 = GlobalFree_exref;
    GlobalFree(pvVar8);
  }
  puVar18 = local_d4;
  if (local_d4 != (undefined4 *)0x0) {
    uVar13 = (*pcVar19)(local_d4);
    (*pcVar14)(uVar13);
    uVar13 = (*pcVar19)(puVar18);
    (*pcVar15)(uVar13);
    local_d4 = (undefined4 *)0x0;
  }
  pwVar21 = local_188;
  local_d0 = 0;
  if (local_188 != (wchar_t *)0x0) {
    uVar13 = (*pcVar19)(local_188);
    (*pcVar14)(uVar13);
    uVar13 = (*pcVar19)(pwVar21);
    (*pcVar15)(uVar13);
  }
  return 0;
}


