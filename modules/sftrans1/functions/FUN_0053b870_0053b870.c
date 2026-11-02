/* Module: sftrans1.dll
   Function: FUN_0053b870
   Address: 0053b870
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_0053b870(int *param_1,double *param_2,double *param_3,double *param_4,int param_5)

{
  double dVar1;
  wchar_t wVar2;
  HDC pHVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  HFONT pHVar13;
  HGDIOBJ pvVar14;
  BOOL BVar15;
  size_t sVar16;
  DWORD DVar17;
  HGLOBAL pvVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  double *pdVar22;
  short sVar23;
  undefined4 *puVar24;
  tagTEXTMETRICA *ptVar25;
  UINT uChar;
  wchar_t *pwVar26;
  double dVar27;
  int iVar28;
  _GLYPHMETRICS *local_31c;
  double local_318;
  double local_310;
  undefined4 *local_308;
  int local_304;
  double local_300;
  undefined8 local_2f8;
  int local_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  int local_2d4;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  HGDIOBJ local_2c4;
  undefined8 local_2c0;
  int local_2b8;
  _GLYPHMETRICS local_2b4;
  undefined8 local_2a0;
  undefined4 local_294;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  double local_278;
  undefined8 local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  uint local_244;
  double local_240;
  double local_238;
  undefined8 local_230;
  double local_228;
  undefined4 local_21c;
  MAT2 local_218;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined4 local_1dc;
  undefined4 local_1d8;
  wchar_t *local_1d4;
  HGDIOBJ local_1d0;
  uchar local_1cc [32];
  int local_1ac;
  int local_1a8;
  int local_1a4;
  undefined4 local_1a0;
  short local_19c;
  undefined4 local_194;
  undefined1 local_190;
  undefined4 local_18c;
  double local_188;
  UINT local_17c;
  LONG local_178;
  undefined8 local_174;
  _GLYPHMETRICS local_16c;
  uint local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 *local_13c;
  HGDIOBJ local_138;
  uchar local_134 [32];
  int local_114;
  int local_110;
  int local_10c;
  undefined4 local_108;
  short local_104;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined4 local_f4;
  undefined4 local_f0 [4];
  double local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  double local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  double local_c0;
  LOGFONTA local_b8;
  LOGFONTA local_7c;
  tagTEXTMETRICA local_40;
  
  if (param_5 != 0) {
    FUN_00540ec0(&local_310,&local_318);
    if (param_2 != (double *)0x0) {
      dVar27 = (((double *)param_1[8])[2] + *(double *)param_1[8]) * _DAT_00557838 + local_310;
      *param_2 = (dVar27 + dVar27) / (double)*(int *)(param_1[6] + 8) - _DAT_00555908;
    }
    if (param_3 != (double *)0x0) {
      dVar27 = (*(double *)(param_1[8] + 0x18) + *(double *)(param_1[8] + 8)) * _DAT_00557838 +
               local_318;
      *param_3 = (dVar27 + dVar27) / (double)*(int *)(param_1[6] + 0xc) - _DAT_00555908;
    }
    if (param_4 != (double *)0x0) {
      *param_4 = local_310 + *(double *)param_1[8];
      param_4[1] = local_318 + *(double *)(param_1[8] + 8);
      param_4[2] = local_310 + *(double *)(param_1[8] + 0x10);
      param_4[3] = local_318 + *(double *)(param_1[8] + 0x18);
    }
    local_310 = local_310 - *(double *)param_1[8];
    local_318 = local_318 - ((double *)param_1[8])[1];
    floor(local_310);
    iVar11 = ftol();
    param_1[0x13] = iVar11;
    floor(local_318);
    local_2b8 = ftol();
    iVar11 = param_1[0x24];
    param_1[0x14] = local_2b8;
    *(double *)(param_1 + 0x16) = local_310 - (double)param_1[0x13];
    *(double *)(param_1 + 0x18) = local_318 - (double)local_2b8;
    floor(*(double *)(param_1 + 0xe));
    iVar12 = ftol();
    param_1[0xb] = iVar12 + iVar11 * 2;
    iVar12 = ftol();
    param_1[0xc] = iVar12 + iVar11 * 2;
    return 0;
  }
  param_1[0x50] = 0;
  param_1[0x4e] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  param_1[0x1a] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0x51] = 0;
  param_1[0x4f] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  param_1[0x1b] = 0;
  param_1[0x12] = 0;
  if (param_1[5] == 0) {
    iVar11 = FUN_004dd740(param_1 + 5,0x38,0xffffffff,0xffffffff,0x80000004,0,0,0);
    if (iVar11 < 0) {
      return iVar11;
    }
  }
  else {
    FUN_004dc400(param_1[5],0,0xffffffff,1);
  }
  puVar24 = local_f0;
  for (iVar11 = 0xe; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar24 = 0;
    puVar24 = puVar24 + 1;
  }
  local_310 = 0.0;
  local_258 = 0.0;
  local_260 = 0.0;
  local_280 = 0;
  uStack_27c = 0xc1e00000;
  local_2c0 = 0.0;
  local_2ec = 0;
  local_300 = 2147483647.0;
  local_318 = -2147483648.0;
  local_2e0 = 0;
  uStack_2dc = 0;
  local_2d0 = 0;
  uStack_2cc = 0;
  local_240 = 0.0;
  local_2e8 = (double)CONCAT44(local_2e8._4_4_,1);
  local_2d4 = 0;
  local_2b8 = FUN_004dd740(&local_2d4,0x10,0xffffffff,0xffffffff,4,0,0);
  if (-1 < local_2b8) {
    local_218.eM12.fract = 0;
    local_218.eM12.value = 0;
    local_218.eM11.fract = 0;
    local_218.eM11.value = 1;
    local_218.eM22.fract = 0;
    local_218.eM22.value = 1;
    local_218.eM21.fract = 0;
    local_218.eM21.value = 0;
    local_1d4 = (wchar_t *)0x0;
    local_1d0 = (HGDIOBJ)0x0;
    local_13c = (undefined4 *)0x0;
    local_138 = (HGDIOBJ)0x0;
    local_21c = 1;
    if (param_1[1] == 0) {
      iVar11 = FUN_0053b680();
    }
    else {
      iVar11 = FUN_00543ae0(&local_1dc,&local_21c);
    }
    if (-1 < iVar11) {
      do {
        if (param_1[1] == 0) {
          local_244 = 0;
LAB_0053bc77:
          local_294 = 0;
        }
        else {
          iVar11 = FUN_00543ae0(&local_144,&local_21c);
          local_244 = (uint)(-1 < iVar11);
          if (((((local_244 == 0) || (local_1ac != local_114)) || (local_1a8 != local_110)) ||
              ((local_1a4 != local_10c || (local_19c != local_104)))) ||
             (iVar11 = lstrcmpA((LPCSTR)local_1cc,(LPCSTR)local_134), iVar11 != 0))
          goto LAB_0053bc77;
          local_294 = CONCAT22(local_294._2_2_,*(undefined2 *)local_13c);
        }
        iVar28 = 0x48;
        iVar12 = 0x60;
        iVar11 = ftol();
        local_b8.lfHeight = MulDiv(iVar11,iVar12,iVar28);
        local_b8.lfHeight = -local_b8.lfHeight;
        if (-1 < local_b8.lfHeight) {
          local_b8.lfHeight = -1;
        }
        local_b8.lfItalic = (BYTE)local_1a4;
        local_b8.lfWeight = (-(uint)(local_1a8 != 0) & 300) + 400;
        local_b8.lfWidth = 0;
        local_b8.lfEscapement = 0;
        local_b8.lfOrientation = 0;
        local_b8.lfUnderline = '\0';
        local_b8.lfStrikeOut = '\0';
        local_b8.lfCharSet = (BYTE)local_19c;
        local_b8.lfOutPrecision = '\a';
        local_b8.lfClipPrecision = '\0';
        local_b8.lfQuality = '\0';
        local_b8.lfPitchAndFamily = '\0';
        _mbscpy((uchar *)local_b8.lfFaceName,local_1cc);
        pHVar3 = (HDC)param_1[3];
        pHVar13 = CreateFontIndirectA(&local_b8);
        if (pHVar13 != (HFONT)0x0) {
          pvVar14 = SelectObject(pHVar3,pHVar13);
          ptVar25 = &local_40;
          for (iVar11 = 0xe; iVar11 != 0; iVar11 = iVar11 + -1) {
            ptVar25->tmHeight = 0;
            ptVar25 = (tagTEXTMETRICA *)&ptVar25->tmAscent;
          }
          local_2c4 = pvVar14;
          BVar15 = GetTextMetricsA((HDC)param_1[3],&local_40);
          if (BVar15 == 0) {
LAB_0053bd96:
            if (pvVar14 != (HGDIOBJ)0x0) {
              pvVar14 = SelectObject((HDC)param_1[3],pvVar14);
joined_r0x0053cae3:
              if (pvVar14 != (HGDIOBJ)0x0) {
                DeleteObject(pvVar14);
              }
            }
          }
          else {
            local_308 = (undefined4 *)0x0;
            if (*param_1 != 0) {
              local_308 = (undefined4 *)ftol();
              iVar11 = ftol();
              local_7c.lfHeight = MulDiv(iVar11,0x60,0x48);
              local_7c.lfHeight = -local_7c.lfHeight;
              if (-1 < local_7c.lfHeight) {
                local_7c.lfHeight = -1;
              }
              local_7c.lfWidth = 0;
              local_7c.lfItalic = (BYTE)local_1a4;
              local_7c.lfEscapement = 0;
              local_7c.lfWeight = (-(uint)(local_1a8 != 0) & 300) + 400;
              local_7c.lfOrientation = 0;
              local_7c.lfUnderline = '\0';
              local_7c.lfStrikeOut = '\0';
              local_7c.lfCharSet = (BYTE)local_19c;
              local_7c.lfOutPrecision = '\a';
              local_7c.lfClipPrecision = '\0';
              local_7c.lfQuality = '\0';
              local_7c.lfPitchAndFamily = '\0';
              _mbscpy((uchar *)local_7c.lfFaceName,local_1cc);
              pHVar3 = (HDC)param_1[4];
              pHVar13 = CreateFontIndirectA(&local_7c);
              if (pHVar13 == (HFONT)0x0) goto LAB_0053bd96;
              local_308 = SelectObject(pHVar3,pHVar13);
            }
            puVar24 = local_308;
            iVar11 = param_1[6];
            local_2f8 = (double)local_40.tmDescent * *(double *)(iVar11 + 0x30);
            local_270 = (double)local_40.tmAscent * *(double *)(iVar11 + 0x30);
            local_188 = (double)local_40.tmMaxCharWidth * *(double *)(iVar11 + 0x30);
            dVar27 = ceil(local_270 + local_2f8);
            local_250 = dVar27 + _DAT_00555908 + dVar27 + _DAT_00555908;
            ceil(local_188 + local_188);
            iVar11 = ftol();
            uStack_154 = 0;
            local_158 = iVar11 + 3U & 0xfffffffc;
            uVar21 = ftol();
            if ((uint)param_1[0x12] < uVar21) {
              param_1[0x12] = uVar21;
            }
            if ((param_1[0x56] == 0) || (local_1ac < *(int *)(param_1[6] + 0x3c))) {
              iVar11 = -0x7fffbffb;
            }
            else {
              iVar11 = FUN_00542e20(param_1[3],&local_b8);
            }
            local_188 = (double)CONCAT44(local_188._4_4_,(uint)(-1 < iVar11));
            if (((int)local_2e8 != 0) || ((*local_1d4 != L'\n' && (*local_1d4 != L'\r')))) {
              if ((double)CONCAT44(uStack_2cc,local_2d0) < local_2f8) {
                local_2d0 = (undefined4)local_2f8;
                uStack_2cc = local_2f8._4_4_;
              }
              if ((double)CONCAT44(uStack_2dc,local_2e0) < local_270) {
                local_2e0 = (undefined4)local_270;
                uStack_2dc = local_270._4_4_;
              }
            }
            sVar16 = wcslen(local_1d4);
            local_250 = (double)CONCAT44(local_250._4_4_,sVar16);
            local_304 = 0;
            if (0 < (int)sVar16) {
              do {
                if ((local_1d4[local_304] == L'\n') || (local_1d4[local_304] == L'\r')) {
                  local_e0 = local_240 + (double)CONCAT44(uStack_2dc,local_2e0);
                  local_f0[1] = uStack_2dc;
                  local_f0[0] = local_2e0;
                  iVar11 = 0;
                  local_240 = local_240 + (double)CONCAT44(uStack_2cc,local_2d0) +
                              (double)CONCAT44(uStack_2dc,local_2e0);
                  local_f0[2] = local_2d0;
                  local_f0[3] = uStack_2cc;
                  local_150 = 0;
                  uStack_14c = 0;
                  local_1e8 = 0.0;
                  local_228 = 0.0;
                  local_2a0 = 0.0;
                  local_278 = 2147483647.0;
                  local_268 = -2147483648.0;
                  local_208 = 2147483647.0;
                  local_1f0 = -2147483648.0;
                  local_200 = 2147483647.0;
                  local_238 = -2147483648.0;
                  local_1f8 = -2147483648.0;
                  local_230 = 0.0;
                  if (0 < local_2ec) {
                    iVar12 = param_1[6];
                    dVar27 = 0.0;
                    dVar1 = _DAT_00555910;
                    dVar7 = _DAT_00555910;
                    do {
                      piVar19 = (int *)(iVar11 * *(int *)(local_2d4 + 4) + *(int *)(local_2d4 + 8));
                      iVar28 = param_1[0x52];
                      if (iVar28 == 0) {
                        dVar27 = (_DAT_00555908 - *(double *)(iVar12 + 0x10)) *
                                 ((local_2c0 - *(double *)(piVar19 + 2)) *
                                  *(double *)(param_1 + 0x54) - dVar1) + dVar1;
                        dVar1 = dVar1 + *(double *)(piVar19 + 2);
                      }
                      else if (iVar28 == 1) {
                        dVar27 = dVar7;
                        dVar7 = (*(double *)(iVar12 + 0x10) - _DAT_00555908) *
                                (double)CONCAT44(uStack_c4,local_c8) + *(double *)(piVar19 + 2) +
                                dVar7;
                      }
                      else if (iVar28 == 2) {
                        dVar27 = (_DAT_00555908 - *(double *)(iVar12 + 0x10)) *
                                 ((local_2c0 - *(double *)(piVar19 + 2)) *
                                  *(double *)(param_1 + 0x54) - dVar1) + dVar1;
                        dVar1 = dVar1 + *(double *)(piVar19 + 2);
                        if (dVar27 < local_1e8) {
                          local_1e8 = dVar27;
                        }
                        dVar27 = (dVar7 - (dVar27 - local_1e8)) *
                                 (*(double *)(iVar12 + 0x10) / *(double *)(iVar12 + 0x18)) +
                                 (dVar27 - local_1e8);
                        dVar7 = (*(double *)(iVar12 + 0x10) - _DAT_00555908) *
                                (double)CONCAT44(uStack_c4,local_c8) + *(double *)(piVar19 + 2) +
                                dVar7;
                      }
                      if (dVar27 < local_278) {
                        local_278 = dVar27;
                      }
                      dVar4 = dVar27 + *(double *)(piVar19 + 2);
                      if (local_268 < dVar4) {
                        local_268 = dVar4;
                      }
                      dVar8 = local_310;
                      dVar9 = local_1f0;
                      if ((*(uint *)(iVar12 + 0x44) & 0x40) == 0) {
                        local_2e8 = dVar27;
                        if ((*(uint *)(iVar12 + 0x44) & 0x80) == 0) {
                          iVar28 = piVar19[1];
                          if (iVar28 < 0) {
                            dVar5 = (double)iVar28 + dVar27;
                            dVar6 = _DAT_00555910;
                          }
                          else {
                            dVar6 = (double)iVar28;
                            dVar5 = dVar27;
                          }
                          if (dVar5 < local_200) {
                            local_200 = dVar5;
                          }
                          dVar5 = (double)*piVar19 + dVar6 + dVar5;
                          if (local_1f8 < dVar5) {
                            local_1f8 = dVar5;
                          }
                          if (local_238 < dVar4) {
                            local_238 = dVar4;
                          }
                          local_2a0 = local_1f8 - local_238;
                          local_230 = local_238 - local_200;
                        }
                        else {
                          iVar28 = piVar19[1];
                          if (iVar28 < 0) {
                            dVar9 = (double)iVar28 + dVar27;
                            dVar4 = _DAT_00555910;
                          }
                          else {
                            dVar4 = (double)iVar28;
                            dVar9 = dVar27;
                          }
                          if (dVar9 < local_208) {
                            local_208 = dVar9;
                          }
                          dVar9 = (double)*piVar19 + dVar4 + dVar9;
                          if (dVar9 <= local_1f0) goto LAB_0053c7f7;
                        }
                      }
                      else {
                        dVar4 = (double)piVar19[1] + dVar27;
                        if (dVar4 < *(double *)(param_1 + 0x4e)) {
                          *(double *)(param_1 + 0x4e) = dVar4;
                        }
                        local_2e8 = dVar27 + *(double *)(piVar19 + 2);
                        dVar8 = dVar4 + (double)*piVar19;
                        if (dVar4 + (double)*piVar19 < local_2e8) {
                          dVar8 = local_2e8;
                        }
                        if (dVar8 <= local_310) {
LAB_0053c7f7:
                          dVar8 = local_310;
                          dVar9 = local_1f0;
                        }
                      }
                      local_1f0 = dVar9;
                      local_310 = dVar8;
                      iVar11 = iVar11 + 1;
                    } while (iVar11 < local_2ec);
                  }
                  local_d0 = local_228;
                  if ((local_2ec != 0) && (local_d0 = local_268 - local_278, local_258 < local_d0))
                  {
                    local_258 = local_d0;
                  }
                  dVar27 = local_310;
                  if ((*(uint *)(param_1[6] + 0x44) & 0x80) == 0) {
                    if ((*(uint *)(param_1[6] + 0x44) & 0x100) != 0) {
                      if ((double)CONCAT44(uStack_27c,local_280) < local_2a0) {
                        local_280 = (undefined4)local_2a0;
                        uStack_27c = local_2a0._4_4_;
                      }
                      if (*(double *)(param_1 + 0x4e) < local_230) {
                        param_1[0x4e] = (int)local_230;
                        param_1[0x4f] = local_230._4_4_;
                      }
                      if (_DAT_00555910 <= (double)CONCAT44(uStack_27c,local_280)) {
                        *(double *)(param_1 + 0xe) =
                             (double)CONCAT44(uStack_27c,local_280) + *(double *)(param_1 + 0x4e);
                      }
                      else {
                        param_1[0xe] = param_1[0x4e];
                        param_1[0xf] = param_1[0x4f];
                      }
                    }
                  }
                  else {
                    local_2e8 = local_278 - local_208;
                    local_2a0 = local_1f0 - local_268;
                    dVar1 = local_d0 * _DAT_00557838;
                    if (param_1[0x52] == 0) {
                      local_c0 = ((local_2c0 - local_268) - local_278) * _DAT_00557838;
                    }
                    if (local_260 < dVar1) {
                      local_260 = dVar1;
                    }
                    if (*(double *)(param_1 + 0x4e) < dVar1 + local_2e8) {
                      *(double *)(param_1 + 0x4e) = dVar1 + local_2e8;
                    }
                    if (((_DAT_00555910 <= local_2a0) || (dVar27 = dVar1, dVar1 <= local_310)) &&
                       (dVar27 = local_310, local_310 < dVar1 + local_2a0)) {
                      dVar27 = dVar1 + local_2a0;
                    }
                  }
                  local_310 = dVar27;
                  local_d8 = (undefined4)local_2c0;
                  local_d4 = local_2c0._4_4_;
                  FUN_004dc110(param_1[5],0xffffffff,local_f0,1);
                  if (local_304 == local_250._0_4_ + -1) {
                    local_2d0 = 0;
                    uStack_2cc = 0;
                    local_2e0 = 0;
                    uStack_2dc = 0;
                  }
                  else {
                    local_2e0 = (undefined4)local_270;
                    uStack_2dc = local_270._4_4_;
                    local_2d0 = (undefined4)local_2f8;
                    uStack_2cc = local_2f8._4_4_;
                  }
                  FUN_004dc400(local_2d4,0,0xffffffff,0);
                  local_2ec = 0;
                  local_2c0 = 0.0;
                  local_c8 = 0;
                  uStack_c4 = 0;
                  local_2e8 = (double)CONCAT44(local_2e8._4_4_,1);
                }
                else {
                  local_2b4.gmBlackBoxX = 0;
                  local_2b4.gmBlackBoxY = 0;
                  local_2b4.gmptGlyphOrigin.x = 0;
                  local_2b4.gmptGlyphOrigin.y = 0;
                  local_2b4.gmCellIncX = 0;
                  local_2b4.gmCellIncY = 0;
                  local_16c.gmBlackBoxX = 0;
                  local_16c.gmBlackBoxY = 0;
                  local_16c.gmptGlyphOrigin.x = 0;
                  local_16c.gmptGlyphOrigin.y = 0;
                  local_16c.gmCellIncX = 0;
                  local_16c.gmCellIncY = 0;
                  wVar2 = local_1d4[local_304];
                  if (wVar2 != L'\0') {
                    if (wVar2 == L' ') {
                      DVar17 = GetGlyphOutlineA((HDC)param_1[3],0x20,param_1[0x46],&local_2b4,0,
                                                (LPVOID)0x0,&local_218);
                      if (DVar17 == 0xffffffff) goto LAB_0053ca93;
                      local_31c = &local_2b4;
                    }
                    else if (wVar2 == L'\t') {
LAB_0053c108:
                      DVar17 = GetGlyphOutlineA((HDC)param_1[3],0x20,param_1[0x46],&local_2b4,0,
                                                (LPVOID)0x0,&local_218);
                      if (DVar17 == 0xffffffff) goto LAB_0053ca93;
                      local_31c = &local_2b4;
                    }
                    else {
                      uVar10 = FUN_00544c00(param_1[3],wVar2,param_1[0x58]);
                      uVar21 = param_1[0x46];
                      uChar = (UINT)uVar10;
                      if (uChar == 0) {
                        uChar = (UINT)(ushort)local_1d4[local_304];
                      }
                      else {
                        uVar21 = uVar21 | 0x80;
                      }
                      if (*param_1 == 0) {
                        local_31c = &local_2b4;
                        DVar17 = GetGlyphOutlineA((HDC)param_1[3],uChar,uVar21,&local_2b4,0,
                                                  (LPVOID)0x0,&local_218);
                        if (DVar17 == 0xffffffff) {
                          DVar17 = GetGlyphOutlineA((HDC)param_1[3],0x20,param_1[0x46],&local_2b4,0,
                                                    (LPVOID)0x0,&local_218);
                          if (DVar17 == 0xffffffff) goto LAB_0053ca93;
                        }
                        else {
                          if ((uint)param_1[9] < local_2b4.gmBlackBoxX) {
                            param_1[9] = local_2b4.gmBlackBoxX;
                          }
                          if ((uint)param_1[10] < local_2b4.gmBlackBoxY) {
                            param_1[10] = local_2b4.gmBlackBoxY;
                          }
                        }
                      }
                      else {
                        local_31c = &local_16c;
                        DVar17 = GetGlyphOutlineA((HDC)param_1[3],uChar,uVar21,&local_2b4,0,
                                                  (LPVOID)0x0,&local_218);
                        if (DVar17 == 0xffffffff) {
                          DVar17 = GetGlyphOutlineA((HDC)param_1[3],0x20,param_1[0x46],&local_2b4,0,
                                                    (LPVOID)0x0,&local_218);
                          if (DVar17 == 0xffffffff) goto LAB_0053ca93;
                          local_31c = &local_2b4;
                        }
                        else {
                          DVar17 = GetGlyphOutlineA((HDC)param_1[4],uChar,uVar21,&local_16c,0,
                                                    (LPVOID)0x0,&local_218);
                          if (DVar17 == 0xffffffff) goto LAB_0053c108;
                          if ((uint)param_1[9] < local_16c.gmBlackBoxX) {
                            param_1[9] = local_16c.gmBlackBoxX;
                          }
                          if ((uint)param_1[10] < local_16c.gmBlackBoxY) {
                            param_1[10] = local_16c.gmBlackBoxY;
                          }
                        }
                      }
                    }
                    if (local_188._0_4_ != 0) {
                      if (local_304 < local_250._0_4_ + -1) {
                        local_288._0_4_ = CONCAT22(local_1d4[local_304 + 1],local_1d4[local_304]);
                        iVar11 = FUN_00543120();
                        if (-1 < iVar11) {
                          sVar23 = local_288._4_2_;
LAB_0053c35c:
                          local_2b4.gmCellIncX = local_2b4.gmCellIncX + sVar23;
                        }
                      }
                      else if ((short)local_294 != 0) {
                        local_290 = (double)CONCAT62(CONCAT42(local_290._4_4_,(short)local_294),
                                                     local_1d4[local_304]);
                        iVar11 = FUN_00543120();
                        if (-1 < iVar11) {
                          sVar23 = local_290._4_2_;
                          goto LAB_0053c35c;
                        }
                      }
                    }
                    iVar11 = local_2ec;
                    local_174 = (double)(int)local_2b4.gmCellIncX * *(double *)(param_1[6] + 0x30);
                    local_17c = local_31c->gmBlackBoxX;
                    local_178 = (local_31c->gmptGlyphOrigin).x;
                    local_2e8._0_4_ = (int)local_2b4.gmCellIncX;
                    FUN_004dc110(local_2d4,local_2ec,&local_17c,1);
                    local_2c0 = local_174 + local_2c0;
                    local_2ec = iVar11 + 1;
                    if ((double)CONCAT44(uStack_c4,local_c8) < local_174) {
                      local_c8 = (undefined4)local_174;
                      uStack_c4 = local_174._4_4_;
                    }
                    local_2e8 = (double)((ulonglong)local_2e8._4_4_ << 0x20);
                  }
                }
LAB_0053ca93:
                local_304 = local_304 + 1;
                pvVar14 = local_2c4;
                puVar24 = local_308;
              } while (local_304 < local_250._0_4_);
            }
            if ((pvVar14 != (HGDIOBJ)0x0) &&
               (pvVar14 = SelectObject((HDC)param_1[3],pvVar14), pvVar14 != (HGDIOBJ)0x0)) {
              DeleteObject(pvVar14);
            }
            if ((*param_1 != 0) && (puVar24 != (undefined4 *)0x0)) {
              pvVar14 = SelectObject((HDC)param_1[4],puVar24);
              goto joined_r0x0053cae3;
            }
          }
        }
        local_1dc = local_144;
        local_1d8 = local_140;
        _mbscpy(local_1cc,local_134);
        pvVar14 = local_138;
        pwVar26 = local_1d4;
        local_1ac = local_114;
        local_1a0 = local_108;
        local_1a8 = local_110;
        local_1a4 = local_10c;
        local_190 = local_f8;
        local_19c = local_104;
        local_194 = local_fc;
        local_18c = local_f4;
        local_2c4 = local_138;
        local_308 = local_13c;
        if (local_1d4 != (wchar_t *)0x0) {
          pvVar18 = GlobalHandle(local_1d4);
          GlobalUnlock(pvVar18);
          pvVar18 = GlobalHandle(pwVar26);
          GlobalFree(pvVar18);
          local_1d4 = (wchar_t *)0x0;
        }
        if (local_308 != (undefined4 *)0x0) {
          uVar21 = (int)pvVar14 * 2;
          pvVar18 = GlobalAlloc(0x40,uVar21);
          local_1d4 = GlobalLock(pvVar18);
          if (local_1d4 != (wchar_t *)0x0) {
            puVar24 = local_308;
            pwVar26 = local_1d4;
            for (uVar20 = ((uint)pvVar14 & 0x7fffffff) >> 1; uVar20 != 0; uVar20 = uVar20 - 1) {
              *(undefined4 *)pwVar26 = *puVar24;
              puVar24 = puVar24 + 1;
              pwVar26 = pwVar26 + 2;
            }
            for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
              *(undefined1 *)pwVar26 = *(undefined1 *)puVar24;
              puVar24 = (undefined4 *)((int)puVar24 + 1);
              pwVar26 = (wchar_t *)((int)pwVar26 + 1);
            }
            local_1d0 = local_2c4;
          }
        }
      } while (local_244 != 0);
    }
    FUN_004dd670();
    puVar24 = local_13c;
    piVar19 = (int *)param_1[5];
    iVar11 = *piVar19;
    if (iVar11 == 0) {
      if (local_13c != (undefined4 *)0x0) {
        pvVar18 = GlobalHandle(local_13c);
        GlobalUnlock(pvVar18);
        pvVar18 = GlobalHandle(puVar24);
        GlobalFree(pvVar18);
        local_13c = (undefined4 *)0x0;
      }
      pwVar26 = local_1d4;
      local_138 = (HGDIOBJ)0x0;
      if (local_1d4 != (wchar_t *)0x0) {
        pvVar18 = GlobalHandle(local_1d4);
        GlobalUnlock(pvVar18);
        pvVar18 = GlobalHandle(pwVar26);
        GlobalFree(pvVar18);
      }
      return -0x7fffbffb;
    }
    if ((*(uint *)(param_1[6] + 0x44) & 0x200) == 0) {
      if ((*(uint *)(param_1[6] + 0x44) & 0x800) == 0) {
        iVar12 = 0;
        *(double *)(param_1 + 0x50) = local_240 * _DAT_00557838;
        do {
          pdVar22 = (double *)(*(int *)(param_1[5] + 4) * iVar12 + *(int *)(param_1[5] + 8));
          dVar27 = (*pdVar22 - pdVar22[1]) * _DAT_00557838;
          dVar1 = pdVar22[2] - dVar27;
          dVar27 = (dVar1 - (*(double *)(param_1[6] + 0x20) - _DAT_00555908) *
                            (*(double *)(param_1 + 0x50) - dVar1)) + dVar27;
          pdVar22[2] = dVar27;
          if (dVar27 - *pdVar22 < local_300) {
            local_300 = dVar27 - *pdVar22;
          }
          if (local_318 < dVar27 + pdVar22[1]) {
            local_318 = dVar27 + pdVar22[1];
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != iVar11);
        *(double *)(param_1 + 0x1a) = -local_300;
        iVar11 = param_1[8];
        *(double *)(param_1 + 0x10) = local_318 - local_300;
        *(undefined4 *)(iVar11 + 8) = 0;
        *(undefined4 *)(iVar11 + 0xc) = 0;
        iVar11 = param_1[8];
        *(int *)(iVar11 + 0x18) = param_1[0x10];
        *(int *)(iVar11 + 0x1c) = param_1[0x11];
      }
      else {
        iVar11 = iVar11 + -1;
        pdVar22 = (double *)(piVar19[1] * iVar11 + piVar19[2]);
        param_1[0x50] = *(int *)(piVar19[1] * iVar11 + 0x10 + piVar19[2]);
        param_1[0x51] = *(int *)((int)pdVar22 + 0x14);
        dVar27 = pdVar22[1];
        dVar1 = pdVar22[2];
        while( true ) {
          dVar7 = pdVar22[2] -
                  (*(double *)(param_1[6] + 0x20) - _DAT_00555908) *
                  (*(double *)(param_1 + 0x50) - pdVar22[2]);
          pdVar22[2] = dVar7;
          dVar7 = dVar7 - *pdVar22;
          if (dVar7 < local_300) {
            local_300 = dVar7;
          }
          if (local_318 < pdVar22[1] + pdVar22[2]) {
            local_318 = pdVar22[1] + pdVar22[2];
          }
          iVar11 = iVar11 + -1;
          if (iVar11 == -1) break;
          pdVar22 = (double *)(*(int *)(param_1[5] + 4) * iVar11 + *(int *)(param_1[5] + 8));
        }
        *(double *)(param_1 + 0x1a) = -local_300;
        iVar11 = param_1[8];
        *(double *)(param_1 + 0x10) = local_318 - local_300;
        *(undefined4 *)(iVar11 + 8) = 0;
        *(undefined4 *)(iVar11 + 0xc) = 0;
        *(double *)(param_1[8] + 0x18) = (dVar27 + dVar1) - local_300;
      }
    }
    else {
      pdVar22 = (double *)piVar19[2];
      iVar12 = 0;
      param_1[0x50] = *(int *)(pdVar22 + 2);
      param_1[0x51] = *(int *)((int)pdVar22 + 0x14);
      while( true ) {
        dVar27 = pdVar22[2] -
                 (*(double *)(param_1[6] + 0x20) - _DAT_00555908) *
                 (*(double *)(param_1 + 0x50) - pdVar22[2]);
        pdVar22[2] = dVar27;
        dVar27 = dVar27 - *pdVar22;
        if (dVar27 < local_300) {
          local_300 = dVar27;
        }
        if (local_318 < pdVar22[1] + pdVar22[2]) {
          local_318 = pdVar22[1] + pdVar22[2];
        }
        iVar12 = iVar12 + 1;
        if (iVar12 == iVar11) break;
        pdVar22 = (double *)(*(int *)(param_1[5] + 4) * iVar12 + *(int *)(param_1[5] + 8));
      }
      if (local_300 < _DAT_00555910) {
        *(double *)(param_1 + 0x1a) = -local_300;
      }
      iVar11 = param_1[8];
      *(int *)(iVar11 + 8) = param_1[0x1a];
      *(int *)(iVar11 + 0xc) = param_1[0x1b];
      *(double *)(param_1 + 0x10) = local_318 - local_300;
      *(double *)(param_1[8] + 0x18) = (local_318 - local_300) - *(double *)(param_1 + 0x1a);
    }
    if ((*(uint *)(param_1[6] + 0x44) & 0x40) == 0) {
      if ((*(uint *)(param_1[6] + 0x44) & 0x80) == 0) {
        *(double *)param_1[8] = *(double *)(param_1 + 0x4e) - local_258;
        iVar11 = param_1[8];
        *(int *)(iVar11 + 0x10) = param_1[0x4e];
        *(int *)(iVar11 + 0x14) = param_1[0x4f];
      }
      else {
        *(double *)param_1[8] = *(double *)(param_1 + 0x4e) - local_260;
        *(double *)(param_1[8] + 0x10) = local_260 + *(double *)(param_1 + 0x4e);
        *(double *)(param_1 + 0xe) = local_310 + *(double *)(param_1 + 0x4e);
      }
    }
    else {
      dVar27 = *(double *)(param_1 + 0x4e);
      *(double *)(param_1 + 0x4e) = -dVar27;
      *(double *)param_1[8] = -dVar27;
      ((double *)param_1[8])[2] = local_258 + *(double *)param_1[8];
      *(double *)(param_1 + 0xe) = local_310 + *(double *)(param_1 + 0x4e);
    }
    pdVar22 = (double *)param_1[8];
    iVar11 = param_1[6];
    local_228 = pdVar22[3] - pdVar22[1];
    uVar21 = *(uint *)(iVar11 + 0x44);
    if ((uVar21 & 8) == 0) {
      local_2f8 = (double)*(int *)(iVar11 + 8);
      dVar27 = (*(double *)(iVar11 + 0x48) + _DAT_00555908) * local_2f8;
      if ((uVar21 & 0x10) == 0) {
        local_290 = dVar27 * _DAT_00557838 - (pdVar22[2] - *pdVar22);
      }
      else {
        local_290 = (dVar27 - (pdVar22[2] - *pdVar22)) * _DAT_00557838;
      }
    }
    else {
      local_2f8 = (double)*(int *)(iVar11 + 8);
      local_290 = (*(double *)(iVar11 + 0x48) + _DAT_00555908) * local_2f8 * _DAT_00557838;
    }
    if ((uVar21 & 1) == 0) {
      dVar27 = (*(double *)(iVar11 + 0x50) + _DAT_00555908) * (double)*(int *)(iVar11 + 0xc);
      if ((uVar21 & 2) == 0) {
        local_288 = dVar27 * _DAT_00557838 - local_228;
      }
      else {
        local_288 = (dVar27 - local_228) * _DAT_00557838;
      }
    }
    else {
      local_288 = (*(double *)(iVar11 + 0x50) + _DAT_00555908) * (double)*(int *)(iVar11 + 0xc) *
                  _DAT_00557838;
    }
    if (param_2 != (double *)0x0) {
      dVar27 = (pdVar22[2] + *pdVar22) * _DAT_00557838 + local_290;
      *param_2 = (dVar27 + dVar27) / local_2f8 - _DAT_00555908;
    }
    if (param_3 != (double *)0x0) {
      dVar27 = (*(double *)(param_1[8] + 0x18) + *(double *)(param_1[8] + 8)) * _DAT_00557838 +
               local_288;
      *param_3 = (dVar27 + dVar27) / (double)*(int *)(param_1[6] + 0xc) - _DAT_00555908;
    }
    if (param_4 != (double *)0x0) {
      *param_4 = local_290 + *(double *)param_1[8];
      param_4[1] = local_288 + *(double *)(param_1[8] + 8);
      param_4[2] = local_290 + *(double *)(param_1[8] + 0x10);
      param_4[3] = local_288 + *(double *)(param_1[8] + 0x18);
    }
    local_290 = local_290 - *(double *)param_1[8];
    local_288 = local_288 - ((double *)param_1[8])[1];
    floor(local_290);
    iVar11 = ftol();
    param_1[0x13] = iVar11;
    floor(local_288);
    local_2c4 = (HGDIOBJ)ftol();
    iVar11 = param_1[0x24];
    param_1[0x14] = (int)local_2c4;
    *(double *)(param_1 + 0x16) = local_290 - (double)param_1[0x13];
    *(double *)(param_1 + 0x18) = local_288 - (double)(int)local_2c4;
    floor(*(double *)(param_1 + 0xe));
    iVar12 = ftol();
    param_1[0xb] = iVar12 + iVar11 * 2;
    iVar12 = ftol();
    puVar24 = local_13c;
    param_1[0xc] = iVar12 + iVar11 * 2;
    if (local_13c != (undefined4 *)0x0) {
      pvVar18 = GlobalHandle(local_13c);
      GlobalUnlock(pvVar18);
      pvVar18 = GlobalHandle(puVar24);
      GlobalFree(pvVar18);
      local_13c = (undefined4 *)0x0;
    }
    pwVar26 = local_1d4;
    local_138 = (HGDIOBJ)0x0;
    if (local_1d4 != (wchar_t *)0x0) {
      pvVar18 = GlobalHandle(local_1d4);
      GlobalUnlock(pvVar18);
      pvVar18 = GlobalHandle(pwVar26);
      GlobalFree(pvVar18);
    }
  }
  return local_2b8;
}


