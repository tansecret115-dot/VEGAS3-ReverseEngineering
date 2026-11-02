/* Module: vfplugs.dll
   Function: FUN_0040c5e0
   Address: 0040c5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0040c5e0(int *param_1,int *param_2,short *param_3,int param_4,LOGFONTA *param_5,int param_6,
            int param_7)

{
  double _X;
  double _X_00;
  byte bVar1;
  ushort uVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  HDC hdc;
  HDC hdc_00;
  HFONT h;
  short *psVar16;
  int iVar17;
  HGLOBAL pvVar18;
  int iVar19;
  short *psVar20;
  DWORD DVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  undefined1 *puVar28;
  HGDIOBJ ho;
  uint uVar29;
  uint uVar30;
  byte *pbVar31;
  short *psVar32;
  byte *pbVar33;
  byte *pbVar34;
  uint uVar35;
  uint uVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  float10 extraout_ST0;
  float10 fVar41;
  float10 fVar42;
  float10 extraout_ST0_00;
  float in_stack_00000030;
  float in_stack_00000034;
  float in_stack_00000038;
  float in_stack_0000003c;
  float in_stack_00000040;
  float in_stack_00000044;
  float in_stack_00000048;
  float in_stack_0000004c;
  float in_stack_00000050;
  float in_stack_00000054;
  int *in_stack_00000058;
  UINT UVar43;
  int local_12c;
  int *local_118;
  uint local_114;
  short *local_104;
  byte *local_100;
  int local_fc;
  byte *local_e4;
  byte *local_e0;
  float local_dc;
  float local_d8;
  undefined1 local_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  byte bStack_d1;
  byte *local_c8;
  int local_c4;
  short *local_c0;
  float local_bc;
  float local_b8;
  int *local_b4;
  float local_b0;
  int local_ac;
  uint local_a0;
  int local_9c;
  float local_98;
  uint local_94;
  float local_8c;
  MAT2 local_88;
  float local_78;
  _GLYPHMETRICS local_74;
  int local_60;
  SIZE_T local_5c;
  float local_58;
  int *local_54;
  HGDIOBJ local_50;
  int local_4c;
  uint local_48;
  undefined4 uStack_44;
  tagTEXTMETRICA local_40;
  
  local_88.eM11 = (FIXED)(in_stack_00000030 * in_stack_0000003c);
  local_88.eM12 = (FIXED)(in_stack_00000034 * in_stack_0000003c);
  local_88.eM21 = (FIXED)(in_stack_00000038 * in_stack_0000003c);
  bVar7 = ftol();
  bVar8 = ftol();
  bVar9 = ftol();
  bVar10 = ftol();
  bVar11 = ftol();
  bVar12 = ftol();
  bVar13 = ftol();
  bVar14 = ftol();
  bVar37 = bVar7 <= bVar11;
  bVar38 = bVar8 <= bVar12;
  bVar39 = bVar9 <= bVar13;
  bVar40 = bVar10 <= bVar14;
  FUN_00441460(param_2,param_1,(int *)0x0,0,local_88.eM21,local_88.eM12,local_88.eM11,
               in_stack_0000003c,3);
  in_stack_00000058[2] = -100000;
  in_stack_00000058[3] = -100000;
  *in_stack_00000058 = 100000;
  in_stack_00000058[1] = 100000;
  if (param_3 == (short *)0x0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 == (int *)0x0) {
    if (param_2[4] == 0) {
      if (((param_2[8] == 0) && (uVar2 = *(ushort *)((int)param_2 + 0xe), uVar2 != 0)) &&
         (uVar2 < 9)) {
        local_54 = (int *)(*param_2 + (1 << ((byte)uVar2 & 0x1f)) * 4 + (int)param_2);
        goto LAB_0040c7d1;
      }
    }
    else if (param_2[4] == 3) {
      local_54 = param_2 + 0xd;
      goto LAB_0040c7d1;
    }
    local_54 = (int *)(*param_2 + param_2[8] * 4 + (int)param_2);
  }
  else {
    local_54 = param_1;
  }
LAB_0040c7d1:
  uVar15 = (uint)*(ushort *)((int)param_2 + 0xe) * param_2[1] + 0x1f;
  local_4c = (int)((uVar15 & 0xffffffe0) + ((int)uVar15 >> 0x1f & 7U)) >> 3;
  hdc = GetDC((HWND)0x0);
  hdc_00 = CreateCompatibleDC(hdc);
  ReleaseDC((HWND)0x0,hdc);
  h = CreateFontIndirectA(param_5);
  local_50 = SelectObject(hdc_00,h);
  GetTextMetricsA(hdc_00,&local_40);
  uVar15 = 0;
  uVar30 = param_5->lfHeight >> 0x1f;
  local_d8 = 0.0;
  local_dc = (float)(int)((param_5->lfHeight ^ uVar30) - uVar30);
  local_88.eM12.fract = 0;
  local_88.eM12.value = 0;
  local_88.eM21.fract = 0;
  local_88.eM21.value = 0;
  local_88.eM11.fract = 0;
  local_88.eM11.value = 1;
  local_88.eM22.fract = 0;
  local_88.eM22.value = 1;
  local_bc = 0.0;
  local_9c = 0;
  local_58 = ((float)local_40.tmExternalLeading + local_dc) * in_stack_00000044;
  local_b8 = 0.0;
  local_60 = 0;
  local_98 = 0.0;
  local_c0 = (short *)0x0;
  if (0 < param_4) {
    local_104 = param_3;
    psVar16 = param_3;
    do {
      sVar3 = *local_104;
      if (sVar3 == 0) break;
      if (sVar3 == 0xd) {
        local_9c = local_9c + 1;
      }
      else {
        uVar30 = FUN_00413cf0(hdc_00,CONCAT22((short)((uint)psVar16 >> 0x10),sVar3));
        if ((short)uVar30 == 0) {
          UVar43 = 6;
          uVar30 = 0x20;
        }
        else {
          uVar30 = uVar30 & 0xffff;
          UVar43 = 0x86;
        }
        GetGlyphOutlineA(hdc_00,uVar30,UVar43,&local_74,0,(LPVOID)0x0,&local_88);
        if ((int)local_b8 < (int)local_74.gmBlackBoxY) {
          local_b8 = (float)local_74.gmBlackBoxY;
        }
        if (uVar15 < local_74.gmBlackBoxX) {
          uVar15 = local_74.gmBlackBoxX;
        }
        if ((uint)local_98 < local_74.gmBlackBoxY) {
          local_98 = (float)local_74.gmBlackBoxY;
        }
      }
      psVar16 = (short *)((int)local_c0 + 1);
      local_104 = local_104 + 1;
      local_c0 = psVar16;
    } while ((int)psVar16 < param_4);
  }
  local_78 = in_stack_00000050 - in_stack_00000048;
  local_c0 = (short *)(in_stack_00000054 - in_stack_0000004c);
  fVar4 = (float)uVar15 * in_stack_00000040;
  if (_DAT_00487ee0 == local_78) {
    in_stack_00000048 = 0.0;
    local_78 = (float)param_2[1];
  }
  if (_DAT_00487ee0 == (float)local_c0) {
    in_stack_0000004c = 0.0;
    local_c0 = (short *)(float)param_2[2];
  }
  if ((uVar15 & 3) == 0) {
    iVar17 = 0;
  }
  else {
    iVar17 = 4 - (uVar15 & 3);
  }
  local_e0 = (byte *)0x0;
  local_5c = (iVar17 + uVar15) * (int)local_98;
  if (local_5c != 0) {
    pvVar18 = GlobalAlloc(0x40,local_5c);
    local_e0 = GlobalLock(pvVar18);
    if (local_e0 == (byte *)0x0) {
      return 0x8007000e;
    }
  }
  if (param_6 == 1) {
    local_b0 = (((float)local_c0 * _DAT_00487edc -
                ((float)local_9c * local_58 + (float)(int)local_b8) * _DAT_00487edc) -
               (local_dc - (float)(int)local_b8)) + in_stack_0000004c;
  }
  else if (param_6 == 2) {
    local_b0 = (((float)local_c0 - (float)local_9c * local_58) - local_dc) + in_stack_0000004c;
  }
  else {
    local_b0 = in_stack_0000004c - (local_dc - (float)(int)local_b8);
  }
  local_c0 = (short *)0x0;
  if (0 < param_4) {
    do {
      psVar16 = param_3 + (int)local_c0;
      if (*psVar16 == 0) break;
      if (*psVar16 == 0xd) {
        iVar17 = *in_stack_00000058;
        floor((double)(local_bc + local_d8));
        iVar19 = ftol();
        if (iVar19 <= iVar17) {
          floor((double)(local_bc + local_d8));
          iVar17 = ftol();
        }
        iVar19 = in_stack_00000058[1];
        *in_stack_00000058 = iVar17;
        floor((double)(local_b0 + local_dc));
        iVar17 = ftol();
        if (iVar17 <= iVar19) {
          floor((double)(local_b0 + local_dc));
          iVar19 = ftol();
        }
        local_dc = local_58 + local_dc;
        in_stack_00000058[1] = iVar19;
        local_d8 = 0.0;
        iVar19 = ftol();
        iVar17 = in_stack_00000058[2];
        if (iVar17 <= iVar19) {
          iVar17 = ftol();
        }
        in_stack_00000058[2] = iVar17;
        iVar17 = ftol();
        if (iVar17 < in_stack_00000058[3]) {
          in_stack_00000058[3] = in_stack_00000058[3];
        }
        else if ((float10)_DAT_00487ee0 <= extraout_ST0) {
          iVar17 = ftol();
          in_stack_00000058[3] = iVar17;
        }
        else {
          iVar17 = ftol();
          in_stack_00000058[3] = iVar17;
        }
      }
      else {
        if (local_60 <= (int)local_c0) {
          fVar41 = (float10)_DAT_00487ee0;
          local_8c = 0.0;
          local_b8 = 0.0;
          local_98 = 0.0;
          psVar32 = psVar16;
          for (psVar20 = local_c0; iVar17 = local_60, (int)psVar20 < param_4;
              psVar20 = (short *)((int)psVar20 + 1)) {
            sVar3 = *psVar32;
            local_98 = local_b8;
            iVar17 = (int)psVar20;
            if (sVar3 == 0) break;
            if (sVar3 == 0xd) {
              iVar17 = (int)psVar20 + 1;
              break;
            }
            if (sVar3 == 9) {
              GetGlyphOutlineA(hdc_00,0x20,6,&local_74,0,(LPVOID)0x0,&local_88);
              local_b8 = (float)((float10)(int)local_74.gmCellIncX * (float10)_DAT_00487ed8);
              fVar41 = (float10)(int)local_74.gmCellIncX * (float10)in_stack_00000040;
              if (_DAT_00487ed4 <= in_stack_00000040) {
                if (_DAT_00487ed0 < in_stack_00000040) {
                  fVar41 = (float10)fVar4 * (float10)_DAT_00487ed8;
                  goto LAB_0040ceb2;
                }
                fVar42 = (float10)fsin(((float10)in_stack_00000040 - (float10)_DAT_00487ed4) *
                                       (float10)_DAT_00487ecc - (float10)_DAT_00487ec8);
                fVar41 = ((float10)fVar4 - fVar41) *
                         (fVar42 + (float10)_DAT_00487590) * (float10)_DAT_00487e20 + fVar41;
              }
              fVar41 = fVar41 * (float10)_DAT_00487ed8;
            }
            else {
              uVar15 = FUN_00413cf0(hdc_00,CONCAT22((short)((uint)local_b8 >> 0x10),sVar3));
              if ((short)uVar15 == 0) {
                UVar43 = 6;
                uVar15 = 0x20;
              }
              else {
                uVar15 = uVar15 & 0xffff;
                UVar43 = 0x86;
              }
              GetGlyphOutlineA(hdc_00,uVar15,UVar43,&local_74,0,(LPVOID)0x0,&local_88);
              local_b8 = (float)(int)local_74.gmCellIncX;
              fVar41 = (float10)(int)local_74.gmCellIncX * (float10)in_stack_00000040;
              if (_DAT_00487ed4 <= in_stack_00000040) {
                if (in_stack_00000040 <= _DAT_00487ed0) {
                  fVar42 = (float10)fsin(((float10)in_stack_00000040 - (float10)_DAT_00487ed4) *
                                         (float10)_DAT_00487ecc - (float10)_DAT_00487ec8);
                  fVar41 = ((float10)fVar4 - fVar41) *
                           (fVar42 + (float10)_DAT_00487590) * (float10)_DAT_00487e20 + fVar41;
                }
                else {
                  fVar41 = (float10)fVar4;
                }
              }
            }
LAB_0040ceb2:
            psVar32 = psVar32 + 1;
            local_8c = (float)(fVar41 + (float10)local_8c);
          }
          local_60 = iVar17;
          if (param_7 == 1) {
            local_bc = (float)(((float10)local_78 * (float10)_DAT_00487edc -
                               ((float10)local_8c - (fVar41 - (float10)local_98)) *
                               (float10)_DAT_00487edc) + (float10)in_stack_00000048);
          }
          else if (param_7 == 2) {
            fVar41 = (float10)local_98 * (float10)in_stack_00000040;
            if (_DAT_00487ed4 <= in_stack_00000040) {
              if (in_stack_00000040 <= _DAT_00487ed0) {
                fVar42 = (float10)fsin(((float10)in_stack_00000040 - (float10)_DAT_00487ed4) *
                                       (float10)_DAT_00487ecc - (float10)_DAT_00487ec8);
                fVar41 = ((float10)fVar4 - fVar41) *
                         (fVar42 + (float10)_DAT_00487590) * (float10)_DAT_00487e20 + fVar41;
              }
              else {
                fVar41 = (float10)fVar4;
              }
            }
            local_bc = (float)((((float10)local_78 - (float10)local_98) -
                               ((float10)local_8c - fVar41)) + (float10)in_stack_00000048);
          }
          else {
            local_bc = in_stack_00000048;
          }
        }
        if (_DAT_00487ee0 <= (float)local_40.tmHeight + local_b0 + local_dc) {
          fVar5 = local_b0 + local_dc;
          if (fVar5 - (float)local_40.tmHeight <= (float)param_2[2]) {
            sVar3 = *psVar16;
            if (sVar3 == 9) {
              GetGlyphOutlineA(hdc_00,0x20,6,&local_74,0,(LPVOID)0x0,&local_88);
              iVar17 = *in_stack_00000058;
              floor((double)(local_bc + local_d8));
              iVar19 = ftol();
              if (iVar19 <= iVar17) {
                floor((double)(local_bc + local_d8));
                iVar17 = ftol();
              }
              iVar19 = in_stack_00000058[1];
              *in_stack_00000058 = iVar17;
              floor((double)fVar5);
              iVar17 = ftol();
              if (iVar17 <= iVar19) {
                floor((double)fVar5);
                iVar19 = ftol();
              }
              in_stack_00000058[1] = iVar19;
              fVar41 = (float10)(int)local_74.gmCellIncX * (float10)in_stack_00000040;
              if (_DAT_00487ed4 <= in_stack_00000040) {
                if (in_stack_00000040 <= _DAT_00487ed0) {
                  fVar42 = (float10)fsin(((float10)in_stack_00000040 - (float10)_DAT_00487ed4) *
                                         (float10)_DAT_00487ecc - (float10)_DAT_00487ec8);
                  fVar41 = ((float10)fVar4 - fVar41) *
                           (fVar42 + (float10)_DAT_00487590) * (float10)_DAT_00487e20 + fVar41;
                }
                else {
                  fVar41 = (float10)fVar4;
                }
              }
              fVar41 = fVar41 * (float10)_DAT_00487ed8 + (float10)local_d8;
              iVar17 = (int)local_74.gmCellIncY << 3;
            }
            else {
              if (sVar3 != 0x20) {
                uVar15 = FUN_00413cf0(hdc_00,CONCAT22((short)((uint)param_2 >> 0x10),sVar3));
                if ((short)uVar15 == 0) {
                  UVar43 = 6;
                  uVar15 = 0x20;
                }
                else {
                  uVar15 = uVar15 & 0xffff;
                  UVar43 = 0x86;
                }
                DVar21 = GetGlyphOutlineA(hdc_00,uVar15,UVar43,&local_74,local_5c,local_e0,&local_88
                                         );
                if ((DVar21 != 0xffffffff) && (DVar21 != 0)) {
                  local_a0 = local_74.gmBlackBoxX;
                  if ((local_74.gmBlackBoxX & 3) != 0) {
                    local_a0 = (local_74.gmBlackBoxX - (local_74.gmBlackBoxX & 3)) + 4;
                  }
                  local_c4 = local_4c;
                  local_b4 = local_54;
                  if (0 < local_4c) {
                    local_c4 = -local_4c;
                    local_b4 = (int *)((param_2[2] + -1) * local_4c + (int)local_54);
                  }
                  local_48 = local_74.gmBlackBoxX;
                  uStack_44 = 0;
                  fVar6 = (float)local_74.gmptGlyphOrigin.x + local_bc + local_d8;
                  fVar5 = (float)local_74.gmptGlyphOrigin.y;
                  if ((_DAT_00487ee0 <= (float)local_74.gmBlackBoxX + fVar6) &&
                     (fVar6 <= (float)param_2[1])) {
                    _X = (double)fVar6;
                    floor(_X);
                    iVar22 = ftol();
                    _X_00 = (double)((local_dc - fVar5) + local_b0);
                    floor(_X_00);
                    iVar23 = ftol();
                    floor(_X);
                    iVar24 = ftol();
                    floor(_X);
                    iVar25 = ftol();
                    iVar25 = iVar25 + local_74.gmBlackBoxX;
                    floor(_X_00);
                    iVar17 = ftol();
                    floor(_X_00);
                    iVar26 = ftol();
                    iVar26 = iVar26 + local_74.gmBlackBoxY;
                    local_ac = 0;
                    iVar19 = *in_stack_00000058;
                    if (iVar24 <= *in_stack_00000058) {
                      iVar19 = iVar24;
                    }
                    *in_stack_00000058 = iVar19;
                    iVar19 = in_stack_00000058[1];
                    if (iVar17 <= in_stack_00000058[1]) {
                      iVar19 = iVar17;
                    }
                    in_stack_00000058[1] = iVar19;
                    iVar19 = in_stack_00000058[2];
                    if (in_stack_00000058[2] <= iVar25) {
                      iVar19 = iVar25;
                    }
                    in_stack_00000058[2] = iVar19;
                    iVar19 = in_stack_00000058[3];
                    if (in_stack_00000058[3] <= iVar26) {
                      iVar19 = iVar26;
                    }
                    in_stack_00000058[3] = iVar19;
                    iVar19 = (iVar23 * iVar22) / 0xff;
                    if (iVar19 < 0) {
                      local_d4 = 0;
                    }
                    else {
                      local_d4 = 0xff;
                      if (iVar19 < 0x100) {
                        local_d4 = (undefined1)iVar19;
                      }
                    }
                    iVar19 = (iVar23 * (0x101 - iVar22)) / 0xff;
                    if (iVar19 < 0) {
                      uStack_d3 = 0;
                    }
                    else {
                      uStack_d3 = 0xff;
                      if (iVar19 < 0x100) {
                        uStack_d3 = (undefined1)iVar19;
                      }
                    }
                    iVar19 = (iVar22 * (0x101 - iVar23)) / 0xff;
                    if (iVar19 < 0) {
                      uStack_d2 = 0;
                    }
                    else {
                      uStack_d2 = 0xff;
                      if (iVar19 < 0x100) {
                        uStack_d2 = (undefined1)iVar19;
                      }
                    }
                    iVar19 = ((0x101 - iVar23) * (0x101 - iVar22)) / 0xff;
                    if (iVar19 < 0) {
                      bStack_d1 = 0;
                    }
                    else {
                      bStack_d1 = 0xff;
                      if (iVar19 < 0x100) {
                        bStack_d1 = (byte)iVar19;
                      }
                    }
                    uVar30 = CONCAT11(bStack_d1,uStack_d2) & 0xff;
                    uVar15 = CONCAT12(uStack_d2,CONCAT11(uStack_d3,local_d4)) & 0xff;
                    uVar29 = CONCAT12(bStack_d1,CONCAT11(uStack_d2,uStack_d3)) & 0xff;
                    if (uVar29 + uVar15 == 0) {
                      if (uVar15 + uVar30 == 0) {
                        if (iVar17 < iVar26) {
                          local_c8 = (byte *)(iVar17 * local_c4 + (int)local_b4);
                          local_e4 = local_e0;
                          do {
                            if (((iVar17 < param_2[2]) && (-1 < iVar17)) && (iVar24 < iVar25)) {
                              pbVar33 = (byte *)((int)local_c8 + iVar24 * 4 + 2);
                              local_12c = iVar24;
                              do {
                                if ((local_12c < param_2[1]) && (-1 < local_12c)) {
                                  if (local_e4[local_12c - iVar24] < 0x40) {
                                    uVar15 = (uint)local_e4[local_12c - iVar24];
                                  }
                                  else {
                                    uVar15 = 0x40;
                                  }
                                  uVar15 = (bStack_d1 * uVar15 * 4) / 0xff;
                                  if ((int)uVar15 < 0) {
                                    uVar15 = 0;
                                  }
                                  else if (0xff < uVar15) {
                                    uVar15 = 0xff;
                                  }
                                  uVar30 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                                  uVar30 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                                 uVar30) * uVar15) / 0xff + uVar30;
                                  if (bVar37) {
                                    uVar29 = (uint)pbVar33[-2];
                                    if ((int)uVar30 < (int)uVar29) goto LAB_0040f93d;
                                  }
                                  else {
                                    uVar29 = (uint)pbVar33[-2];
                                    if ((int)(uint)pbVar33[-2] < (int)uVar30) {
LAB_0040f93d:
                                      uVar29 = uVar30;
                                    }
                                  }
                                  uVar30 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                                  pbVar33[-2] = (byte)uVar29;
                                  uVar30 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                                 uVar30) * uVar15) / 0xff + uVar30;
                                  if (bVar38) {
                                    uVar29 = (uint)pbVar33[-1];
                                    if ((int)uVar29 <= (int)uVar30) goto LAB_0040f98c;
                                  }
                                  else {
                                    uVar29 = (uint)pbVar33[-1];
                                    if ((int)uVar30 <= (int)uVar29) {
LAB_0040f98c:
                                      uVar30 = uVar29;
                                    }
                                  }
                                  uVar29 = CONCAT11(bVar14,bVar13) & 0xff;
                                  pbVar33[-1] = (byte)uVar30;
                                  uVar29 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar29) * uVar15
                                                ) / 0xff + uVar29;
                                  if (bVar39) {
                                    uVar30 = (uint)*pbVar33;
                                    if ((int)uVar30 <= (int)uVar29) goto LAB_0040f9d9;
                                  }
                                  else {
                                    uVar30 = (uint)*pbVar33;
                                    if ((int)uVar29 <= (int)uVar30) {
LAB_0040f9d9:
                                      uVar29 = uVar30;
                                    }
                                  }
                                  *pbVar33 = (byte)uVar29;
                                  uVar15 = (int)(((uint)bVar10 - (uint)bVar14) * uVar15) / 0xff +
                                           (uint)bVar14;
                                  if (bVar40) {
                                    uVar30 = (uint)pbVar33[1];
                                    if ((int)uVar30 <= (int)uVar15) goto LAB_0040fa27;
                                  }
                                  else {
                                    uVar30 = (uint)pbVar33[1];
                                    if ((int)uVar15 <= (int)uVar30) {
LAB_0040fa27:
                                      uVar15 = uVar30;
                                    }
                                  }
                                  pbVar33[1] = (byte)uVar15;
                                }
                                local_12c = local_12c + 1;
                                pbVar33 = pbVar33 + 4;
                              } while (local_12c < iVar25);
                            }
                            local_e4 = local_e4 + local_a0;
                            iVar17 = iVar17 + 1;
                            local_c8 = (byte *)((int)local_c8 + local_c4);
                          } while (iVar17 < iVar26);
                        }
                      }
                      else {
                        for (; iVar17 < iVar26; iVar17 = iVar17 + 1) {
                          if ((iVar17 < param_2[2]) && (-1 < iVar17)) {
                            iVar19 = iVar17 * local_c4;
                            pbVar33 = local_e0 + local_ac * local_a0;
                            local_fc = 0;
                            if ((iVar24 < param_2[1]) && (-1 < iVar24)) {
                              if (*pbVar33 < 0x40) {
                                uVar15 = (uint)*pbVar33;
                              }
                              else {
                                uVar15 = 0x40;
                              }
                              uVar15 = (bStack_d1 * uVar15 * 4) / 0xff;
                              if ((int)uVar15 < 0) {
                                uVar15 = 0;
                              }
                              else if (0xff < uVar15) {
                                uVar15 = 0xff;
                              }
                              uVar29 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                              uVar29 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                             uVar29) * uVar15) / 0xff + uVar29;
                              if (bVar37) {
                                uVar27 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19);
                                if ((int)uVar27 <= (int)uVar29) goto LAB_0040f2cc;
                              }
                              else {
                                uVar27 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19);
                                if ((int)uVar29 <= (int)uVar27) {
LAB_0040f2cc:
                                  uVar29 = uVar27;
                                }
                              }
                              uVar27 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                              *(char *)((int)local_b4 + iVar24 * 4 + iVar19) = (char)uVar29;
                              uVar27 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                             uVar27) * uVar15) / 0xff + uVar27;
                              if (bVar38) {
                                uVar29 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 1);
                                puVar28 = (undefined1 *)((int)local_b4 + iVar24 * 4 + iVar19 + 1);
                                if ((int)uVar27 < (int)uVar29) goto LAB_0040f333;
                              }
                              else {
                                uVar29 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 1);
                                puVar28 = (undefined1 *)((int)local_b4 + iVar24 * 4 + iVar19 + 1);
                                if ((int)uVar29 < (int)uVar27) {
LAB_0040f333:
                                  uVar29 = uVar27;
                                }
                              }
                              *puVar28 = (char)uVar29;
                              uVar29 = CONCAT11(bVar14,bVar13) & 0xff;
                              uVar29 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar29) * uVar15) /
                                       0xff + uVar29;
                              if (bVar39) {
                                uVar27 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 2);
                                puVar28 = (undefined1 *)((int)local_b4 + iVar24 * 4 + iVar19 + 2);
                                if ((int)uVar29 < (int)uVar27) goto LAB_0040f395;
                              }
                              else {
                                uVar27 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 2);
                                puVar28 = (undefined1 *)((int)local_b4 + iVar24 * 4 + iVar19 + 2);
                                if ((int)uVar27 < (int)uVar29) {
LAB_0040f395:
                                  uVar27 = uVar29;
                                }
                              }
                              *puVar28 = (char)uVar27;
                              uVar15 = (int)(((uint)bVar10 - (uint)bVar14) * uVar15) / 0xff +
                                       (uint)bVar14;
                              if (bVar40) {
                                pbVar31 = (byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 3);
                                uVar29 = (uint)*pbVar31;
                                if ((int)uVar15 < (int)uVar29) goto LAB_0040f3f3;
                              }
                              else {
                                uVar29 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 3);
                                pbVar31 = (byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 3);
                                if ((int)uVar29 < (int)uVar15) {
LAB_0040f3f3:
                                  uVar29 = uVar15;
                                }
                              }
                              *pbVar31 = (byte)uVar29;
                            }
                            local_12c = iVar24 + 1;
                            if (local_12c < iVar25) {
                              pbVar31 = (byte *)((int)local_b4 + local_12c * 4 + iVar19 + 2);
                              do {
                                if ((local_12c < param_2[1]) && (-1 < local_12c)) {
                                  if (pbVar33[local_fc] < 0x40) {
                                    uVar15 = (uint)pbVar33[local_fc];
                                  }
                                  else {
                                    uVar15 = 0x40;
                                  }
                                  if (pbVar33[local_fc + 1] < 0x40) {
                                    uVar29 = (uint)pbVar33[local_fc + 1];
                                  }
                                  else {
                                    uVar29 = 0x40;
                                  }
                                  uVar15 = (uVar15 * uVar30 * 4) / 0xff +
                                           (bStack_d1 * uVar29 * 4) / 0xff;
                                  if ((int)uVar15 < 0) {
                                    uVar15 = 0;
                                  }
                                  else if (0xff < uVar15) {
                                    uVar15 = 0xff;
                                  }
                                  uVar29 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                                  uVar29 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                                 uVar29) * uVar15) / 0xff + uVar29;
                                  if (bVar37) {
                                    uVar27 = (uint)pbVar31[-2];
                                    if ((int)uVar29 < (int)uVar27) goto LAB_0040f500;
                                  }
                                  else {
                                    uVar27 = (uint)pbVar31[-2];
                                    if ((int)(uint)pbVar31[-2] < (int)uVar29) {
LAB_0040f500:
                                      uVar27 = uVar29;
                                    }
                                  }
                                  uVar29 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                                  pbVar31[-2] = (byte)uVar27;
                                  uVar29 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                                 uVar29) * uVar15) / 0xff + uVar29;
                                  if (bVar38) {
                                    uVar27 = (uint)pbVar31[-1];
                                    if ((int)uVar27 <= (int)uVar29) goto LAB_0040f54f;
                                  }
                                  else {
                                    uVar27 = (uint)pbVar31[-1];
                                    if ((int)uVar29 <= (int)uVar27) {
LAB_0040f54f:
                                      uVar29 = uVar27;
                                    }
                                  }
                                  uVar27 = CONCAT11(bVar14,bVar13) & 0xff;
                                  pbVar31[-1] = (byte)uVar29;
                                  uVar27 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar27) * uVar15
                                                ) / 0xff + uVar27;
                                  if (bVar39) {
                                    uVar29 = (uint)*pbVar31;
                                    if ((int)uVar29 <= (int)uVar27) goto LAB_0040f59c;
                                  }
                                  else {
                                    uVar29 = (uint)*pbVar31;
                                    if ((int)uVar27 <= (int)uVar29) {
LAB_0040f59c:
                                      uVar27 = uVar29;
                                    }
                                  }
                                  *pbVar31 = (byte)uVar27;
                                  uVar15 = (int)(((uint)bVar10 - (uint)bVar14) * uVar15) / 0xff +
                                           (uint)bVar14;
                                  if (bVar40) {
                                    uVar29 = (uint)pbVar31[1];
                                    if ((int)uVar29 <= (int)uVar15) goto LAB_0040f5ea;
                                  }
                                  else {
                                    uVar29 = (uint)pbVar31[1];
                                    if ((int)uVar15 <= (int)uVar29) {
LAB_0040f5ea:
                                      uVar15 = uVar29;
                                    }
                                  }
                                  pbVar31[1] = (byte)uVar15;
                                }
                                local_fc = local_fc + 1;
                                local_12c = local_12c + 1;
                                pbVar31 = pbVar31 + 4;
                              } while (local_12c < iVar25);
                            }
                            if ((local_12c < param_2[1]) && (-1 < local_12c)) {
                              if (pbVar33[local_fc] < 0x40) {
                                uVar15 = (uint)pbVar33[local_fc];
                              }
                              else {
                                uVar15 = 0x40;
                              }
                              uVar15 = (uVar15 * uVar30 * 4) / 0xff;
                              if ((int)uVar15 < 0) {
                                uVar15 = 0;
                              }
                              else if (0xff < uVar15) {
                                uVar15 = 0xff;
                              }
                              uVar29 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                              uVar29 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                             uVar29) * uVar15) / 0xff + uVar29;
                              if (bVar37) {
                                uVar27 = (uint)*(byte *)((int)local_b4 + local_12c * 4 + iVar19);
                                if ((int)uVar27 <= (int)uVar29) goto LAB_0040f6cf;
                              }
                              else {
                                uVar27 = (uint)*(byte *)((int)local_b4 + local_12c * 4 + iVar19);
                                if ((int)uVar29 <= (int)uVar27) {
LAB_0040f6cf:
                                  uVar29 = uVar27;
                                }
                              }
                              uVar27 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                              *(char *)((int)local_b4 + local_12c * 4 + iVar19) = (char)uVar29;
                              uVar27 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                             uVar27) * uVar15) / 0xff + uVar27;
                              if (bVar38) {
                                uVar29 = (uint)*(byte *)((int)local_b4 + local_12c * 4 + iVar19 + 1)
                                ;
                                pbVar33 = (byte *)((int)local_b4 + local_12c * 4 + iVar19 + 1);
                                if ((int)uVar29 <= (int)uVar27) goto LAB_0040f732;
                              }
                              else {
                                pbVar33 = (byte *)((int)local_b4 + local_12c * 4 + iVar19 + 1);
                                uVar29 = (uint)*pbVar33;
                                if ((int)uVar27 <= (int)uVar29) {
LAB_0040f732:
                                  uVar27 = uVar29;
                                }
                              }
                              *pbVar33 = (byte)uVar27;
                              uVar29 = CONCAT11(bVar14,bVar13) & 0xff;
                              uVar29 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar29) * uVar15) /
                                       0xff + uVar29;
                              if (bVar39) {
                                pbVar33 = (byte *)((int)local_b4 + local_12c * 4 + iVar19 + 2);
                                uVar27 = (uint)*pbVar33;
                                if ((int)uVar27 <= (int)uVar29) goto LAB_0040f790;
                              }
                              else {
                                uVar27 = (uint)*(byte *)((int)local_b4 + local_12c * 4 + iVar19 + 2)
                                ;
                                pbVar33 = (byte *)((int)local_b4 + local_12c * 4 + iVar19 + 2);
                                if ((int)uVar29 <= (int)uVar27) {
LAB_0040f790:
                                  uVar29 = uVar27;
                                }
                              }
                              *pbVar33 = (byte)uVar29;
                              uVar15 = (int)(((uint)bVar10 - (uint)bVar14) * uVar15) / 0xff +
                                       (uint)bVar14;
                              if (bVar40) {
                                pbVar33 = (byte *)((int)local_b4 + local_12c * 4 + iVar19 + 3);
                                uVar29 = (uint)*pbVar33;
                                if ((int)uVar15 < (int)uVar29) goto LAB_0040f7ee;
                              }
                              else {
                                uVar29 = (uint)*(byte *)((int)local_b4 + local_12c * 4 + iVar19 + 3)
                                ;
                                pbVar33 = (byte *)((int)local_b4 + local_12c * 4 + iVar19 + 3);
                                if ((int)uVar29 < (int)uVar15) {
LAB_0040f7ee:
                                  uVar29 = uVar15;
                                }
                              }
                              *pbVar33 = (byte)uVar29;
                            }
                          }
                          local_ac = local_ac + 1;
                        }
                      }
                    }
                    else if (uVar15 + uVar30 == 0) {
                      if (((iVar17 < param_2[2]) && (-1 < iVar17)) && (iVar24 < iVar25)) {
                        pbVar33 = (byte *)((int)local_b4 + iVar24 * 4 + iVar17 * local_c4 + 2);
                        local_12c = iVar24;
                        do {
                          if ((local_12c < param_2[1]) && (-1 < local_12c)) {
                            if (local_e0[local_12c - iVar24] < 0x40) {
                              uVar15 = (uint)local_e0[local_12c - iVar24];
                            }
                            else {
                              uVar15 = 0x40;
                            }
                            uVar15 = (bStack_d1 * uVar15 * 4) / 0xff;
                            if ((int)uVar15 < 0) {
                              uVar15 = 0;
                            }
                            else if (0xff < uVar15) {
                              uVar15 = 0xff;
                            }
                            uVar30 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                            uVar30 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) - uVar30)
                                          * uVar15) / 0xff + uVar30;
                            if (bVar37) {
                              uVar27 = (uint)pbVar33[-2];
                              if ((int)uVar30 < (int)uVar27) goto LAB_0040ebab;
                            }
                            else {
                              uVar27 = (uint)pbVar33[-2];
                              if ((int)(uint)pbVar33[-2] < (int)uVar30) {
LAB_0040ebab:
                                uVar27 = uVar30;
                              }
                            }
                            uVar30 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                            pbVar33[-2] = (byte)uVar27;
                            uVar30 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) - uVar30
                                           ) * uVar15) / 0xff + uVar30;
                            if (bVar38) {
                              uVar27 = (uint)pbVar33[-1];
                              if ((int)uVar27 <= (int)uVar30) goto LAB_0040ebfa;
                            }
                            else {
                              uVar27 = (uint)pbVar33[-1];
                              if ((int)uVar30 <= (int)uVar27) {
LAB_0040ebfa:
                                uVar30 = uVar27;
                              }
                            }
                            uVar27 = CONCAT11(bVar14,bVar13) & 0xff;
                            pbVar33[-1] = (byte)uVar30;
                            uVar27 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar27) * uVar15) /
                                     0xff + uVar27;
                            if (bVar39) {
                              uVar30 = (uint)*pbVar33;
                              if ((int)uVar30 <= (int)uVar27) goto LAB_0040ec47;
                            }
                            else {
                              uVar30 = (uint)*pbVar33;
                              if ((int)uVar27 <= (int)uVar30) {
LAB_0040ec47:
                                uVar27 = uVar30;
                              }
                            }
                            *pbVar33 = (byte)uVar27;
                            uVar15 = (int)(((uint)bVar10 - (uint)bVar14) * uVar15) / 0xff +
                                     (uint)bVar14;
                            if (bVar40) {
                              uVar30 = (uint)pbVar33[1];
                              if ((int)uVar30 <= (int)uVar15) goto LAB_0040ec95;
                            }
                            else {
                              uVar30 = (uint)pbVar33[1];
                              if ((int)uVar15 <= (int)uVar30) {
LAB_0040ec95:
                                uVar15 = uVar30;
                              }
                            }
                            pbVar33[1] = (byte)uVar15;
                          }
                          local_12c = local_12c + 1;
                          pbVar33 = pbVar33 + 4;
                        } while (local_12c < iVar25);
                      }
                      iVar17 = iVar17 + 1;
                      if (iVar17 < iVar26) {
                        local_118 = (int *)(iVar17 * local_c4 + (int)local_b4);
                        local_c8 = local_e0;
                        local_104 = (short *)((iVar24 - local_a0) - (int)local_e0);
                        local_ac = iVar26 - iVar17;
                        local_100 = local_e0;
                        do {
                          local_100 = local_100 + local_a0;
                          if (((iVar17 < param_2[2]) && (-1 < iVar17)) && (iVar24 < iVar25)) {
                            local_e4 = local_100;
                            pbVar33 = (byte *)((int)local_118 + iVar24 * 4 + 2);
                            do {
                              if (((int)(local_e4 + (int)local_104) < param_2[1]) &&
                                 (-1 < (int)(local_e4 + (int)local_104))) {
                                if (local_e4[(int)local_c8 - (int)local_100] < 0x40) {
                                  uVar15 = (uint)local_e4[(int)local_c8 - (int)local_100];
                                }
                                else {
                                  uVar15 = 0x40;
                                }
                                if (*local_e4 < 0x40) {
                                  uVar30 = (uint)*local_e4;
                                }
                                else {
                                  uVar30 = 0x40;
                                }
                                uVar15 = (uVar15 * uVar29 * 4) / 0xff +
                                         (bStack_d1 * uVar30 * 4) / 0xff;
                                if ((int)uVar15 < 0) {
                                  uVar15 = 0;
                                }
                                else if (0xff < uVar15) {
                                  uVar15 = 0xff;
                                }
                                uVar30 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                                uVar30 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                               uVar30) * uVar15) / 0xff + uVar30;
                                if (bVar37) {
                                  uVar27 = (uint)pbVar33[-2];
                                  if ((int)uVar30 < (int)uVar27) goto LAB_0040ee40;
                                }
                                else {
                                  uVar27 = (uint)pbVar33[-2];
                                  if ((int)(uint)pbVar33[-2] < (int)uVar30) {
LAB_0040ee40:
                                    uVar27 = uVar30;
                                  }
                                }
                                uVar30 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                                pbVar33[-2] = (byte)uVar27;
                                uVar30 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                               uVar30) * uVar15) / 0xff + uVar30;
                                if (bVar38) {
                                  uVar27 = (uint)pbVar33[-1];
                                  if ((int)uVar27 <= (int)uVar30) goto LAB_0040ee8f;
                                }
                                else {
                                  uVar27 = (uint)pbVar33[-1];
                                  if ((int)uVar30 <= (int)uVar27) {
LAB_0040ee8f:
                                    uVar30 = uVar27;
                                  }
                                }
                                uVar27 = CONCAT11(bVar14,bVar13) & 0xff;
                                pbVar33[-1] = (byte)uVar30;
                                uVar27 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar27) * uVar15)
                                         / 0xff + uVar27;
                                if (bVar39) {
                                  uVar30 = (uint)*pbVar33;
                                  if ((int)uVar30 <= (int)uVar27) goto LAB_0040eedc;
                                }
                                else {
                                  uVar30 = (uint)*pbVar33;
                                  if ((int)uVar27 <= (int)uVar30) {
LAB_0040eedc:
                                    uVar27 = uVar30;
                                  }
                                }
                                *pbVar33 = (byte)uVar27;
                                uVar15 = (int)(((uint)bVar10 - (uint)bVar14) * uVar15) / 0xff +
                                         (uint)bVar14;
                                if (bVar40) {
                                  uVar30 = (uint)pbVar33[1];
                                  if ((int)uVar30 <= (int)uVar15) goto LAB_0040ef2a;
                                }
                                else {
                                  uVar30 = (uint)pbVar33[1];
                                  if ((int)uVar15 <= (int)uVar30) {
LAB_0040ef2a:
                                    uVar15 = uVar30;
                                  }
                                }
                                pbVar33[1] = (byte)uVar15;
                              }
                              local_e4 = local_e4 + 1;
                              pbVar33 = pbVar33 + 4;
                            } while ((int)(local_e4 + (int)local_104) < iVar25);
                          }
                          local_104 = (short *)((int)local_104 - local_a0);
                          local_c8 = local_c8 + local_a0;
                          local_118 = (int *)((int)local_118 + local_c4);
                          iVar17 = iVar17 + 1;
                        } while (iVar17 < iVar26);
                      }
                      if ((iVar17 < param_2[2]) && (-1 < iVar17)) {
                        if (iVar24 < iVar25) {
                          iVar19 = local_ac * local_a0 - iVar24;
                          pbVar33 = (byte *)((int)local_b4 + iVar24 * 4 + iVar17 * local_c4 + 2);
                          do {
                            if ((iVar24 < param_2[1]) && (-1 < iVar24)) {
                              if (local_e0[iVar24 + iVar19] < 0x40) {
                                uVar15 = (uint)local_e0[iVar24 + iVar19];
                              }
                              else {
                                uVar15 = 0x40;
                              }
                              uVar15 = (uVar15 * uVar29 * 4) / 0xff;
                              if ((int)uVar15 < 0) {
                                uVar15 = 0;
                              }
                              else if (0xff < uVar15) {
                                uVar15 = 0xff;
                              }
                              uVar30 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                              uVar30 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                             uVar30) * uVar15) / 0xff + uVar30;
                              if (bVar37) {
                                uVar27 = (uint)pbVar33[-2];
                                if ((int)uVar30 < (int)uVar27) goto LAB_0040f0a1;
                              }
                              else {
                                uVar27 = (uint)pbVar33[-2];
                                if ((int)(uint)pbVar33[-2] < (int)uVar30) {
LAB_0040f0a1:
                                  uVar27 = uVar30;
                                }
                              }
                              uVar30 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                              pbVar33[-2] = (byte)uVar27;
                              uVar30 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                             uVar30) * uVar15) / 0xff + uVar30;
                              if (bVar38) {
                                uVar27 = (uint)pbVar33[-1];
                                if ((int)uVar27 <= (int)uVar30) goto LAB_0040f0f0;
                              }
                              else {
                                uVar27 = (uint)pbVar33[-1];
                                if ((int)uVar30 <= (int)uVar27) {
LAB_0040f0f0:
                                  uVar30 = uVar27;
                                }
                              }
                              uVar27 = CONCAT11(bVar14,bVar13) & 0xff;
                              pbVar33[-1] = (byte)uVar30;
                              uVar27 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar27) * uVar15) /
                                       0xff + uVar27;
                              if (bVar39) {
                                uVar30 = (uint)*pbVar33;
                                if ((int)uVar30 <= (int)uVar27) goto LAB_0040f13d;
                              }
                              else {
                                uVar30 = (uint)*pbVar33;
                                if ((int)uVar27 <= (int)uVar30) {
LAB_0040f13d:
                                  uVar27 = uVar30;
                                }
                              }
                              *pbVar33 = (byte)uVar27;
                              uVar15 = (int)(((uint)bVar10 - (uint)bVar14) * uVar15) / 0xff +
                                       (uint)bVar14;
                              if (bVar40) {
                                uVar30 = (uint)pbVar33[1];
                                if ((int)uVar30 <= (int)uVar15) goto LAB_0040f18b;
                              }
                              else {
                                uVar30 = (uint)pbVar33[1];
                                if ((int)uVar15 <= (int)uVar30) {
LAB_0040f18b:
                                  uVar15 = uVar30;
                                }
                              }
                              pbVar33[1] = (byte)uVar15;
                            }
                            iVar24 = iVar24 + 1;
                            pbVar33 = pbVar33 + 4;
                          } while (iVar24 < iVar25);
                        }
                      }
                    }
                    else {
                      iVar19 = iVar17 * local_c4;
                      local_fc = 0;
                      if ((iVar17 < param_2[2]) && (-1 < iVar17)) {
                        if ((iVar24 < param_2[1]) && (-1 < iVar24)) {
                          if (*local_e0 < 0x40) {
                            uVar27 = (uint)*local_e0;
                          }
                          else {
                            uVar27 = 0x40;
                          }
                          uVar27 = (bStack_d1 * uVar27 * 4) / 0xff;
                          if ((int)uVar27 < 0) {
                            uVar27 = 0;
                          }
                          else if (0xff < uVar27) {
                            uVar27 = 0xff;
                          }
                          uVar35 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                          uVar35 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) - uVar35) *
                                        uVar27) / 0xff + uVar35;
                          if (bVar37) {
                            uVar36 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19);
                            if ((int)uVar36 <= (int)uVar35) goto LAB_0040d7ff;
                          }
                          else {
                            uVar36 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19);
                            if ((int)uVar35 <= (int)uVar36) {
LAB_0040d7ff:
                              uVar35 = uVar36;
                            }
                          }
                          uVar36 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                          *(char *)((int)local_b4 + iVar24 * 4 + iVar19) = (char)uVar35;
                          uVar36 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) - uVar36)
                                        * uVar27) / 0xff + uVar36;
                          if (bVar38) {
                            uVar35 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 1);
                            puVar28 = (undefined1 *)((int)local_b4 + iVar24 * 4 + iVar19 + 1);
                            if ((int)uVar36 < (int)uVar35) goto LAB_0040d866;
                          }
                          else {
                            uVar35 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 1);
                            puVar28 = (undefined1 *)((int)local_b4 + iVar24 * 4 + iVar19 + 1);
                            if ((int)uVar35 < (int)uVar36) {
LAB_0040d866:
                              uVar35 = uVar36;
                            }
                          }
                          *puVar28 = (char)uVar35;
                          uVar35 = CONCAT11(bVar14,bVar13) & 0xff;
                          uVar35 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar35) * uVar27) / 0xff
                                   + uVar35;
                          if (bVar39) {
                            uVar36 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 2);
                            puVar28 = (undefined1 *)((int)local_b4 + iVar24 * 4 + iVar19 + 2);
                            if ((int)uVar35 < (int)uVar36) goto LAB_0040d8c8;
                          }
                          else {
                            uVar36 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 2);
                            puVar28 = (undefined1 *)((int)local_b4 + iVar24 * 4 + iVar19 + 2);
                            if ((int)uVar36 < (int)uVar35) {
LAB_0040d8c8:
                              uVar36 = uVar35;
                            }
                          }
                          *puVar28 = (char)uVar36;
                          uVar27 = (int)(((uint)bVar10 - (uint)bVar14) * uVar27) / 0xff +
                                   (uint)bVar14;
                          if (bVar40) {
                            uVar35 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 3);
                            pbVar33 = (byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 3);
                            if ((int)uVar27 < (int)uVar35) goto LAB_0040d926;
                          }
                          else {
                            pbVar33 = (byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 3);
                            uVar35 = (uint)*pbVar33;
                            if ((int)(uint)*pbVar33 < (int)uVar27) {
LAB_0040d926:
                              uVar35 = uVar27;
                            }
                          }
                          *pbVar33 = (byte)uVar35;
                        }
                        iVar22 = iVar24 + 1;
                        if (iVar22 < iVar25) {
                          pbVar33 = (byte *)((int)local_b4 + iVar22 * 4 + iVar19 + 2);
                          do {
                            if ((iVar22 < param_2[1]) && (-1 < iVar22)) {
                              if (local_e0[local_fc] < 0x40) {
                                uVar27 = (uint)local_e0[local_fc];
                              }
                              else {
                                uVar27 = 0x40;
                              }
                              if (local_e0[local_fc + 1] < 0x40) {
                                uVar35 = (uint)local_e0[local_fc + 1];
                              }
                              else {
                                uVar35 = 0x40;
                              }
                              uVar27 = (uVar30 * uVar27 * 4) / 0xff +
                                       (bStack_d1 * uVar35 * 4) / 0xff;
                              if ((int)uVar27 < 0) {
                                uVar27 = 0;
                              }
                              else if (0xff < uVar27) {
                                uVar27 = 0xff;
                              }
                              uVar35 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                              uVar35 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                             uVar35) * uVar27) / 0xff + uVar35;
                              if (bVar37) {
                                uVar36 = (uint)pbVar33[-2];
                                if ((int)uVar35 < (int)uVar36) goto LAB_0040da2f;
                              }
                              else {
                                uVar36 = (uint)pbVar33[-2];
                                if ((int)(uint)pbVar33[-2] < (int)uVar35) {
LAB_0040da2f:
                                  uVar36 = uVar35;
                                }
                              }
                              uVar35 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                              pbVar33[-2] = (byte)uVar36;
                              uVar35 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                             uVar35) * uVar27) / 0xff + uVar35;
                              if (bVar38) {
                                uVar36 = (uint)pbVar33[-1];
                                if ((int)uVar36 <= (int)uVar35) goto LAB_0040da7e;
                              }
                              else {
                                uVar36 = (uint)pbVar33[-1];
                                if ((int)uVar35 <= (int)uVar36) {
LAB_0040da7e:
                                  uVar35 = uVar36;
                                }
                              }
                              uVar36 = CONCAT11(bVar14,bVar13) & 0xff;
                              pbVar33[-1] = (byte)uVar35;
                              uVar36 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar36) * uVar27) /
                                       0xff + uVar36;
                              if (bVar39) {
                                uVar35 = (uint)*pbVar33;
                                if ((int)uVar35 <= (int)uVar36) goto LAB_0040dacb;
                              }
                              else {
                                uVar35 = (uint)*pbVar33;
                                if ((int)uVar36 <= (int)uVar35) {
LAB_0040dacb:
                                  uVar36 = uVar35;
                                }
                              }
                              *pbVar33 = (byte)uVar36;
                              uVar27 = (int)(((uint)bVar10 - (uint)bVar14) * uVar27) / 0xff +
                                       (uint)bVar14;
                              if (bVar40) {
                                uVar35 = (uint)pbVar33[1];
                                if ((int)uVar35 <= (int)uVar27) goto LAB_0040db19;
                              }
                              else {
                                uVar35 = (uint)pbVar33[1];
                                if ((int)uVar27 <= (int)uVar35) {
LAB_0040db19:
                                  uVar27 = uVar35;
                                }
                              }
                              pbVar33[1] = (byte)uVar27;
                            }
                            local_fc = local_fc + 1;
                            iVar22 = iVar22 + 1;
                            pbVar33 = pbVar33 + 4;
                          } while (iVar22 < iVar25);
                        }
                        if ((iVar22 < param_2[1]) && (-1 < iVar22)) {
                          if (local_e0[local_fc] < 0x40) {
                            uVar27 = (uint)local_e0[local_fc];
                          }
                          else {
                            uVar27 = 0x40;
                          }
                          uVar27 = (uVar30 * uVar27 * 4) / 0xff;
                          if ((int)uVar27 < 0) {
                            uVar27 = 0;
                          }
                          else if (0xff < uVar27) {
                            uVar27 = 0xff;
                          }
                          uVar35 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                          uVar35 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) - uVar35) *
                                        uVar27) / 0xff + uVar35;
                          if (bVar37) {
                            uVar36 = (uint)*(byte *)((int)local_b4 + iVar22 * 4 + iVar19);
                            if ((int)uVar36 <= (int)uVar35) goto LAB_0040dbf2;
                          }
                          else {
                            uVar36 = (uint)*(byte *)((int)local_b4 + iVar22 * 4 + iVar19);
                            if ((int)uVar35 <= (int)uVar36) {
LAB_0040dbf2:
                              uVar35 = uVar36;
                            }
                          }
                          uVar36 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                          *(char *)((int)local_b4 + iVar22 * 4 + iVar19) = (char)uVar35;
                          uVar36 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) - uVar36)
                                        * uVar27) / 0xff + uVar36;
                          if (bVar38) {
                            uVar35 = (uint)*(byte *)((int)local_b4 + iVar22 * 4 + iVar19 + 1);
                            puVar28 = (undefined1 *)((int)local_b4 + iVar22 * 4 + iVar19 + 1);
                            if ((int)uVar36 < (int)uVar35) goto LAB_0040dc59;
                          }
                          else {
                            uVar35 = (uint)*(byte *)((int)local_b4 + iVar22 * 4 + iVar19 + 1);
                            puVar28 = (undefined1 *)((int)local_b4 + iVar22 * 4 + iVar19 + 1);
                            if ((int)uVar35 < (int)uVar36) {
LAB_0040dc59:
                              uVar35 = uVar36;
                            }
                          }
                          *puVar28 = (char)uVar35;
                          uVar35 = CONCAT11(bVar14,bVar13) & 0xff;
                          uVar35 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar35) * uVar27) / 0xff
                                   + uVar35;
                          if (bVar39) {
                            uVar36 = (uint)*(byte *)((int)local_b4 + iVar22 * 4 + iVar19 + 2);
                            puVar28 = (undefined1 *)((int)local_b4 + iVar22 * 4 + iVar19 + 2);
                            if ((int)uVar35 < (int)uVar36) goto LAB_0040dcbb;
                          }
                          else {
                            uVar36 = (uint)*(byte *)((int)local_b4 + iVar22 * 4 + iVar19 + 2);
                            puVar28 = (undefined1 *)((int)local_b4 + iVar22 * 4 + iVar19 + 2);
                            if ((int)uVar36 < (int)uVar35) {
LAB_0040dcbb:
                              uVar36 = uVar35;
                            }
                          }
                          *puVar28 = (char)uVar36;
                          uVar27 = (int)(((uint)bVar10 - (uint)bVar14) * uVar27) / 0xff +
                                   (uint)bVar14;
                          if (bVar40) {
                            uVar35 = (uint)*(byte *)((int)local_b4 + iVar22 * 4 + iVar19 + 3);
                            pbVar33 = (byte *)((int)local_b4 + iVar22 * 4 + iVar19 + 3);
                            if ((int)uVar27 < (int)uVar35) goto LAB_0040dd19;
                          }
                          else {
                            pbVar33 = (byte *)((int)local_b4 + iVar22 * 4 + iVar19 + 3);
                            uVar35 = (uint)*pbVar33;
                            if ((int)(uint)*pbVar33 < (int)uVar27) {
LAB_0040dd19:
                              uVar35 = uVar27;
                            }
                          }
                          *pbVar33 = (byte)uVar35;
                        }
                      }
                      while (iVar17 = iVar17 + 1, iVar17 < iVar26) {
                        if ((iVar17 < param_2[2]) && (-1 < iVar17)) {
                          iVar19 = iVar17 * local_c4;
                          pbVar33 = local_e0 + local_ac * local_a0;
                          pbVar31 = pbVar33 + local_a0;
                          local_fc = 0;
                          if ((iVar24 < param_2[1]) && (-1 < iVar24)) {
                            if (*pbVar33 < 0x40) {
                              uVar27 = (uint)*pbVar33;
                            }
                            else {
                              uVar27 = 0x40;
                            }
                            if (*pbVar31 < 0x40) {
                              uVar35 = (uint)*pbVar31;
                            }
                            else {
                              uVar35 = 0x40;
                            }
                            uVar27 = (uVar29 * uVar27 * 4) / 0xff + (bStack_d1 * uVar35 * 4) / 0xff;
                            if ((int)uVar27 < 0) {
                              uVar27 = 0;
                            }
                            else if (0xff < uVar27) {
                              uVar27 = 0xff;
                            }
                            uVar35 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                            uVar35 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) - uVar35)
                                          * uVar27) / 0xff + uVar35;
                            if (bVar37) {
                              uVar36 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19);
                              if ((int)uVar36 <= (int)uVar35) goto LAB_0040de74;
                            }
                            else {
                              uVar36 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19);
                              if ((int)uVar35 <= (int)uVar36) {
LAB_0040de74:
                                uVar35 = uVar36;
                              }
                            }
                            uVar36 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                            *(char *)((int)local_b4 + iVar24 * 4 + iVar19) = (char)uVar35;
                            uVar36 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) - uVar36
                                           ) * uVar27) / 0xff + uVar36;
                            if (bVar38) {
                              uVar35 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 1);
                              puVar28 = (undefined1 *)((int)local_b4 + iVar24 * 4 + iVar19 + 1);
                              if ((int)uVar36 < (int)uVar35) goto LAB_0040dedb;
                            }
                            else {
                              uVar35 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 1);
                              puVar28 = (undefined1 *)((int)local_b4 + iVar24 * 4 + iVar19 + 1);
                              if ((int)uVar35 < (int)uVar36) {
LAB_0040dedb:
                                uVar35 = uVar36;
                              }
                            }
                            *puVar28 = (char)uVar35;
                            uVar35 = CONCAT11(bVar14,bVar13) & 0xff;
                            uVar35 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar35) * uVar27) /
                                     0xff + uVar35;
                            if (bVar39) {
                              uVar36 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 2);
                              puVar28 = (undefined1 *)((int)local_b4 + iVar24 * 4 + iVar19 + 2);
                              if ((int)uVar35 < (int)uVar36) goto LAB_0040df3d;
                            }
                            else {
                              uVar36 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 2);
                              puVar28 = (undefined1 *)((int)local_b4 + iVar24 * 4 + iVar19 + 2);
                              if ((int)uVar36 < (int)uVar35) {
LAB_0040df3d:
                                uVar36 = uVar35;
                              }
                            }
                            *puVar28 = (char)uVar36;
                            uVar27 = (int)(((uint)bVar10 - (uint)bVar14) * uVar27) / 0xff +
                                     (uint)bVar14;
                            if (bVar40) {
                              pbVar34 = (byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 3);
                              uVar35 = (uint)*pbVar34;
                              if ((int)uVar27 < (int)uVar35) goto LAB_0040df9b;
                            }
                            else {
                              uVar35 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 3);
                              pbVar34 = (byte *)((int)local_b4 + iVar24 * 4 + iVar19 + 3);
                              if ((int)uVar35 < (int)uVar27) {
LAB_0040df9b:
                                uVar35 = uVar27;
                              }
                            }
                            *pbVar34 = (byte)uVar35;
                          }
                          local_12c = iVar24 + 1;
                          if (local_12c < iVar25) {
                            pbVar34 = (byte *)((int)local_b4 + local_12c * 4 + iVar19 + 2);
                            do {
                              if ((local_12c < param_2[1]) && (-1 < local_12c)) {
                                bVar1 = (pbVar31 + local_fc)[(int)pbVar33 - (int)pbVar31];
                                if (bVar1 < 0x40) {
                                  local_114 = (uint)bVar1;
                                }
                                else {
                                  local_114 = 0x40;
                                }
                                if (pbVar33[local_fc + 1] < 0x40) {
                                  local_94 = (uint)pbVar33[local_fc + 1];
                                }
                                else {
                                  local_94 = 0x40;
                                }
                                bVar1 = pbVar31[local_fc];
                                if (bVar1 < 0x40) {
                                  uVar27 = (uint)bVar1;
                                }
                                else {
                                  uVar27 = 0x40;
                                }
                                if (pbVar31[local_fc + 1] < 0x40) {
                                  uVar35 = (uint)pbVar31[local_fc + 1];
                                }
                                else {
                                  uVar35 = 0x40;
                                }
                                uVar27 = (uVar15 * local_114 * 4) / 0xff +
                                         (uVar29 * local_94 * 4) / 0xff +
                                         (uVar30 * uVar27 * 4) / 0xff +
                                         (bStack_d1 * uVar35 * 4) / 0xff;
                                if ((int)uVar27 < 0) {
                                  uVar27 = 0;
                                }
                                else if (0xff < uVar27) {
                                  uVar27 = 0xff;
                                }
                                uVar35 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                                uVar35 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                               uVar35) * uVar27) / 0xff + uVar35;
                                if (bVar37) {
                                  uVar36 = (uint)pbVar34[-2];
                                  if ((int)uVar35 < (int)uVar36) goto LAB_0040e149;
                                }
                                else {
                                  uVar36 = (uint)pbVar34[-2];
                                  if ((int)(uint)pbVar34[-2] < (int)uVar35) {
LAB_0040e149:
                                    uVar36 = uVar35;
                                  }
                                }
                                uVar35 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                                pbVar34[-2] = (byte)uVar36;
                                uVar35 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                               uVar35) * uVar27) / 0xff + uVar35;
                                if (bVar38) {
                                  uVar36 = (uint)pbVar34[-1];
                                  if ((int)uVar36 <= (int)uVar35) goto LAB_0040e198;
                                }
                                else {
                                  uVar36 = (uint)pbVar34[-1];
                                  if ((int)uVar35 <= (int)uVar36) {
LAB_0040e198:
                                    uVar35 = uVar36;
                                  }
                                }
                                uVar36 = CONCAT11(bVar14,bVar13) & 0xff;
                                pbVar34[-1] = (byte)uVar35;
                                uVar36 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar36) * uVar27)
                                         / 0xff + uVar36;
                                if (bVar39) {
                                  uVar35 = (uint)*pbVar34;
                                  if ((int)uVar35 <= (int)uVar36) goto LAB_0040e1e5;
                                }
                                else {
                                  uVar35 = (uint)*pbVar34;
                                  if ((int)uVar36 <= (int)uVar35) {
LAB_0040e1e5:
                                    uVar36 = uVar35;
                                  }
                                }
                                *pbVar34 = (byte)uVar36;
                                uVar27 = (int)(((uint)bVar10 - (uint)bVar14) * uVar27) / 0xff +
                                         (uint)bVar14;
                                if (bVar40) {
                                  uVar35 = (uint)pbVar34[1];
                                  if ((int)uVar35 <= (int)uVar27) goto LAB_0040e233;
                                }
                                else {
                                  uVar35 = (uint)pbVar34[1];
                                  if ((int)uVar27 <= (int)uVar35) {
LAB_0040e233:
                                    uVar27 = uVar35;
                                  }
                                }
                                pbVar34[1] = (byte)uVar27;
                              }
                              local_fc = local_fc + 1;
                              local_12c = local_12c + 1;
                              pbVar34 = pbVar34 + 4;
                            } while (local_12c < iVar25);
                          }
                          if ((local_12c < param_2[1]) && (-1 < local_12c)) {
                            if (pbVar33[local_fc] < 0x40) {
                              uVar27 = (uint)pbVar33[local_fc];
                            }
                            else {
                              uVar27 = 0x40;
                            }
                            if (pbVar31[local_fc] < 0x40) {
                              uVar35 = (uint)pbVar31[local_fc];
                            }
                            else {
                              uVar35 = 0x40;
                            }
                            uVar27 = (uVar15 * uVar27 * 4) / 0xff + (uVar30 * uVar35 * 4) / 0xff;
                            if ((int)uVar27 < 0) {
                              uVar27 = 0;
                            }
                            else if (0xff < uVar27) {
                              uVar27 = 0xff;
                            }
                            uVar35 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                            uVar35 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) - uVar35)
                                          * uVar27) / 0xff + uVar35;
                            if (bVar37) {
                              uVar36 = (uint)*(byte *)((int)local_b4 + local_12c * 4 + iVar19);
                              if ((int)uVar36 <= (int)uVar35) goto LAB_0040e350;
                            }
                            else {
                              uVar36 = (uint)*(byte *)((int)local_b4 + local_12c * 4 + iVar19);
                              if ((int)uVar35 <= (int)uVar36) {
LAB_0040e350:
                                uVar35 = uVar36;
                              }
                            }
                            uVar36 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                            *(char *)((int)local_b4 + local_12c * 4 + iVar19) = (char)uVar35;
                            uVar36 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) - uVar36
                                           ) * uVar27) / 0xff + uVar36;
                            if (bVar38) {
                              uVar35 = (uint)*(byte *)((int)local_b4 + local_12c * 4 + iVar19 + 1);
                              pbVar33 = (byte *)((int)local_b4 + local_12c * 4 + iVar19 + 1);
                              if ((int)uVar35 <= (int)uVar36) goto LAB_0040e3b3;
                            }
                            else {
                              pbVar33 = (byte *)((int)local_b4 + local_12c * 4 + iVar19 + 1);
                              uVar35 = (uint)*pbVar33;
                              if ((int)uVar36 <= (int)uVar35) {
LAB_0040e3b3:
                                uVar36 = uVar35;
                              }
                            }
                            *pbVar33 = (byte)uVar36;
                            uVar35 = CONCAT11(bVar14,bVar13) & 0xff;
                            uVar35 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar35) * uVar27) /
                                     0xff + uVar35;
                            if (bVar39) {
                              pbVar33 = (byte *)((int)local_b4 + local_12c * 4 + iVar19 + 2);
                              uVar36 = (uint)*pbVar33;
                              if ((int)uVar36 <= (int)uVar35) goto LAB_0040e411;
                            }
                            else {
                              uVar36 = (uint)*(byte *)((int)local_b4 + local_12c * 4 + iVar19 + 2);
                              pbVar33 = (byte *)((int)local_b4 + local_12c * 4 + iVar19 + 2);
                              if ((int)uVar35 <= (int)uVar36) {
LAB_0040e411:
                                uVar35 = uVar36;
                              }
                            }
                            *pbVar33 = (byte)uVar35;
                            uVar27 = (int)(((uint)bVar10 - (uint)bVar14) * uVar27) / 0xff +
                                     (uint)bVar14;
                            if (bVar40) {
                              pbVar33 = (byte *)((int)local_b4 + local_12c * 4 + iVar19 + 3);
                              uVar35 = (uint)*pbVar33;
                              if ((int)uVar27 < (int)uVar35) goto LAB_0040e46f;
                            }
                            else {
                              uVar35 = (uint)*(byte *)((int)local_b4 + local_12c * 4 + iVar19 + 3);
                              pbVar33 = (byte *)((int)local_b4 + local_12c * 4 + iVar19 + 3);
                              if ((int)uVar35 < (int)uVar27) {
LAB_0040e46f:
                                uVar35 = uVar27;
                              }
                            }
                            *pbVar33 = (byte)uVar35;
                          }
                        }
                        local_ac = local_ac + 1;
                      }
                      if ((iVar17 < param_2[2]) && (-1 < iVar17)) {
                        iVar17 = iVar17 * local_c4;
                        pbVar33 = local_e0 + local_ac * local_a0;
                        local_fc = 0;
                        if ((iVar24 < param_2[1]) && (-1 < iVar24)) {
                          if (*pbVar33 < 0x40) {
                            uVar30 = (uint)*pbVar33;
                          }
                          else {
                            uVar30 = 0x40;
                          }
                          uVar30 = (uVar29 * uVar30 * 4) / 0xff;
                          if ((int)uVar30 < 0) {
                            uVar30 = 0;
                          }
                          else if (0xff < uVar30) {
                            uVar30 = 0xff;
                          }
                          uVar27 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                          uVar27 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) - uVar27) *
                                        uVar30) / 0xff + uVar27;
                          if (bVar37) {
                            uVar35 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar17);
                            if ((int)uVar35 <= (int)uVar27) goto LAB_0040e595;
                          }
                          else {
                            uVar35 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar17);
                            if ((int)uVar27 <= (int)uVar35) {
LAB_0040e595:
                              uVar27 = uVar35;
                            }
                          }
                          uVar35 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                          *(char *)((int)local_b4 + iVar24 * 4 + iVar17) = (char)uVar27;
                          uVar35 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) - uVar35)
                                        * uVar30) / 0xff + uVar35;
                          if (bVar38) {
                            uVar27 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar17 + 1);
                            pbVar31 = (byte *)((int)local_b4 + iVar24 * 4 + iVar17 + 1);
                            if ((int)uVar27 <= (int)uVar35) goto LAB_0040e5f8;
                          }
                          else {
                            pbVar31 = (byte *)((int)local_b4 + iVar24 * 4 + iVar17 + 1);
                            uVar27 = (uint)*pbVar31;
                            if ((int)uVar35 <= (int)uVar27) {
LAB_0040e5f8:
                              uVar35 = uVar27;
                            }
                          }
                          *pbVar31 = (byte)uVar35;
                          uVar27 = CONCAT11(bVar14,bVar13) & 0xff;
                          uVar27 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar27) * uVar30) / 0xff
                                   + uVar27;
                          if (bVar39) {
                            pbVar31 = (byte *)((int)local_b4 + iVar24 * 4 + iVar17 + 2);
                            uVar35 = (uint)*pbVar31;
                            if ((int)uVar35 <= (int)uVar27) goto LAB_0040e656;
                          }
                          else {
                            uVar35 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar17 + 2);
                            pbVar31 = (byte *)((int)local_b4 + iVar24 * 4 + iVar17 + 2);
                            if ((int)uVar27 <= (int)uVar35) {
LAB_0040e656:
                              uVar27 = uVar35;
                            }
                          }
                          *pbVar31 = (byte)uVar27;
                          uVar30 = (int)(((uint)bVar10 - (uint)bVar14) * uVar30) / 0xff +
                                   (uint)bVar14;
                          if (bVar40) {
                            pbVar31 = (byte *)((int)local_b4 + iVar24 * 4 + iVar17 + 3);
                            uVar27 = (uint)*pbVar31;
                            if ((int)uVar30 < (int)uVar27) goto LAB_0040e6b4;
                          }
                          else {
                            uVar27 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar17 + 3);
                            pbVar31 = (byte *)((int)local_b4 + iVar24 * 4 + iVar17 + 3);
                            if ((int)uVar27 < (int)uVar30) {
LAB_0040e6b4:
                              uVar27 = uVar30;
                            }
                          }
                          *pbVar31 = (byte)uVar27;
                        }
                        iVar24 = iVar24 + 1;
                        if (iVar24 < iVar25) {
                          pbVar31 = (byte *)((int)local_b4 + iVar24 * 4 + iVar17 + 2);
                          do {
                            if ((iVar24 < param_2[1]) && (-1 < iVar24)) {
                              if (pbVar33[local_fc] < 0x40) {
                                uVar30 = (uint)pbVar33[local_fc];
                              }
                              else {
                                uVar30 = 0x40;
                              }
                              if (pbVar33[local_fc + 1] < 0x40) {
                                uVar27 = (uint)pbVar33[local_fc + 1];
                              }
                              else {
                                uVar27 = 0x40;
                              }
                              uVar30 = (uVar30 * uVar15 * 4) / 0xff + (uVar27 * uVar29 * 4) / 0xff;
                              if ((int)uVar30 < 0) {
                                uVar30 = 0;
                              }
                              else if (0xff < uVar30) {
                                uVar30 = 0xff;
                              }
                              uVar27 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                              uVar27 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                             uVar27) * uVar30) / 0xff + uVar27;
                              if (bVar37) {
                                uVar35 = (uint)pbVar31[-2];
                                if ((int)uVar27 < (int)uVar35) goto LAB_0040e7b6;
                              }
                              else {
                                uVar35 = (uint)pbVar31[-2];
                                if ((int)(uint)pbVar31[-2] < (int)uVar27) {
LAB_0040e7b6:
                                  uVar35 = uVar27;
                                }
                              }
                              uVar27 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                              pbVar31[-2] = (byte)uVar35;
                              uVar27 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                             uVar27) * uVar30) / 0xff + uVar27;
                              if (bVar38) {
                                uVar35 = (uint)pbVar31[-1];
                                if ((int)uVar35 <= (int)uVar27) goto LAB_0040e805;
                              }
                              else {
                                uVar35 = (uint)pbVar31[-1];
                                if ((int)uVar27 <= (int)uVar35) {
LAB_0040e805:
                                  uVar27 = uVar35;
                                }
                              }
                              uVar35 = CONCAT11(bVar14,bVar13) & 0xff;
                              pbVar31[-1] = (byte)uVar27;
                              uVar35 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar35) * uVar30) /
                                       0xff + uVar35;
                              if (bVar39) {
                                uVar27 = (uint)*pbVar31;
                                if ((int)uVar27 <= (int)uVar35) goto LAB_0040e852;
                              }
                              else {
                                uVar27 = (uint)*pbVar31;
                                if ((int)uVar35 <= (int)uVar27) {
LAB_0040e852:
                                  uVar35 = uVar27;
                                }
                              }
                              *pbVar31 = (byte)uVar35;
                              uVar30 = (int)(((uint)bVar10 - (uint)bVar14) * uVar30) / 0xff +
                                       (uint)bVar14;
                              if (bVar40) {
                                uVar27 = (uint)pbVar31[1];
                                if ((int)uVar27 <= (int)uVar30) goto LAB_0040e8a0;
                              }
                              else {
                                uVar27 = (uint)pbVar31[1];
                                if ((int)uVar30 <= (int)uVar27) {
LAB_0040e8a0:
                                  uVar30 = uVar27;
                                }
                              }
                              pbVar31[1] = (byte)uVar30;
                            }
                            local_fc = local_fc + 1;
                            iVar24 = iVar24 + 1;
                            pbVar31 = pbVar31 + 4;
                          } while (iVar24 < iVar25);
                        }
                        if ((iVar24 < param_2[1]) && (-1 < iVar24)) {
                          if (pbVar33[local_fc] < 0x40) {
                            uVar30 = (uint)pbVar33[local_fc];
                          }
                          else {
                            uVar30 = 0x40;
                          }
                          uVar15 = (uVar30 * uVar15 * 4) / 0xff;
                          if ((int)uVar15 < 0) {
                            uVar15 = 0;
                          }
                          else if (0xff < uVar15) {
                            uVar15 = 0xff;
                          }
                          uVar30 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                          uVar30 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) - uVar30) *
                                        uVar15) / 0xff + uVar30;
                          if (bVar37) {
                            uVar29 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar17);
                            if ((int)uVar29 <= (int)uVar30) goto LAB_0040e979;
                          }
                          else {
                            uVar29 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar17);
                            if ((int)uVar30 <= (int)uVar29) {
LAB_0040e979:
                              uVar30 = uVar29;
                            }
                          }
                          uVar29 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                          *(char *)((int)local_b4 + iVar24 * 4 + iVar17) = (char)uVar30;
                          uVar29 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) - uVar29)
                                        * uVar15) / 0xff + uVar29;
                          if (bVar38) {
                            uVar30 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar17 + 1);
                            puVar28 = (undefined1 *)((int)local_b4 + iVar24 * 4 + iVar17 + 1);
                            if ((int)uVar29 < (int)uVar30) goto LAB_0040e9e0;
                          }
                          else {
                            uVar30 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar17 + 1);
                            puVar28 = (undefined1 *)((int)local_b4 + iVar24 * 4 + iVar17 + 1);
                            if ((int)uVar30 < (int)uVar29) {
LAB_0040e9e0:
                              uVar30 = uVar29;
                            }
                          }
                          *puVar28 = (char)uVar30;
                          uVar30 = CONCAT11(bVar14,bVar13) & 0xff;
                          uVar30 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar30) * uVar15) / 0xff
                                   + uVar30;
                          if (bVar39) {
                            uVar29 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar17 + 2);
                            puVar28 = (undefined1 *)((int)local_b4 + iVar24 * 4 + iVar17 + 2);
                            if ((int)uVar30 < (int)uVar29) goto LAB_0040ea42;
                          }
                          else {
                            uVar29 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar17 + 2);
                            puVar28 = (undefined1 *)((int)local_b4 + iVar24 * 4 + iVar17 + 2);
                            if ((int)uVar29 < (int)uVar30) {
LAB_0040ea42:
                              uVar29 = uVar30;
                            }
                          }
                          *puVar28 = (char)uVar29;
                          uVar15 = (int)(((uint)bVar10 - (uint)bVar14) * uVar15) / 0xff +
                                   (uint)bVar14;
                          if (bVar40) {
                            uVar30 = (uint)*(byte *)((int)local_b4 + iVar24 * 4 + iVar17 + 3);
                            pbVar33 = (byte *)((int)local_b4 + iVar24 * 4 + iVar17 + 3);
                            if ((int)uVar15 < (int)uVar30) {
                              uVar30 = uVar15;
                            }
                          }
                          else {
                            pbVar33 = (byte *)((int)local_b4 + iVar24 * 4 + iVar17 + 3);
                            uVar30 = (uint)*pbVar33;
                            if ((int)(uint)*pbVar33 < (int)uVar15) {
                              *pbVar33 = (byte)uVar15;
                              goto LAB_0040fa7f;
                            }
                          }
                          *pbVar33 = (byte)uVar30;
                        }
                      }
                    }
                  }
                }
LAB_0040fa7f:
                fVar41 = (float10)(int)local_74.gmCellIncX * (float10)in_stack_00000040;
                if (_DAT_00487ed4 <= in_stack_00000040) {
                  if (in_stack_00000040 <= _DAT_00487ed0) {
                    fVar42 = (float10)fsin(((float10)in_stack_00000040 - (float10)_DAT_00487ed4) *
                                           (float10)_DAT_00487ecc - (float10)_DAT_00487ec8);
                    fVar41 = ((float10)fVar4 - fVar41) *
                             (fVar42 + (float10)_DAT_00487590) * (float10)_DAT_00487e20 + fVar41;
                  }
                  else {
                    fVar41 = (float10)fVar4;
                  }
                }
                local_d8 = (float)(fVar41 + (float10)local_d8);
                goto LAB_0040fafd;
              }
              GetGlyphOutlineA(hdc_00,0x20,6,&local_74,0,(LPVOID)0x0,&local_88);
              iVar17 = *in_stack_00000058;
              floor((double)(local_bc + local_d8));
              iVar19 = ftol();
              if (iVar19 <= iVar17) {
                floor((double)(local_bc + local_d8));
                iVar17 = ftol();
              }
              iVar19 = in_stack_00000058[1];
              *in_stack_00000058 = iVar17;
              floor((double)fVar5);
              iVar17 = ftol();
              if (iVar17 <= iVar19) {
                floor((double)fVar5);
                iVar19 = ftol();
              }
              in_stack_00000058[1] = iVar19;
              fVar41 = (float10)(int)local_74.gmCellIncX * (float10)in_stack_00000040;
              if (_DAT_00487ed4 <= in_stack_00000040) {
                if (in_stack_00000040 <= _DAT_00487ed0) {
                  fVar42 = (float10)fsin(((float10)in_stack_00000040 - (float10)_DAT_00487ed4) *
                                         (float10)_DAT_00487ecc - (float10)_DAT_00487ec8);
                  fVar41 = ((float10)fVar4 - fVar41) *
                           (fVar42 + (float10)_DAT_00487590) * (float10)_DAT_00487e20 + fVar41;
                }
                else {
                  fVar41 = (float10)fVar4;
                }
              }
              fVar41 = fVar41 + (float10)local_d8;
              iVar17 = (int)local_74.gmCellIncY;
            }
            local_d8 = (float)fVar41;
            local_dc = (float)iVar17 * in_stack_00000044 + local_dc;
            iVar19 = ftol();
            iVar17 = in_stack_00000058[2];
            if (iVar17 <= iVar19) {
              iVar17 = ftol();
            }
            in_stack_00000058[2] = iVar17;
            iVar17 = ftol();
            if (iVar17 < in_stack_00000058[3]) {
              in_stack_00000058[3] = in_stack_00000058[3];
            }
            else if ((float10)_DAT_00487ee0 <= extraout_ST0_00) {
              iVar17 = ftol();
              in_stack_00000058[3] = iVar17;
            }
            else {
              iVar17 = ftol();
              in_stack_00000058[3] = iVar17;
            }
          }
        }
      }
LAB_0040fafd:
      local_c0 = (short *)((int)local_c0 + 1);
    } while ((int)local_c0 < param_4);
  }
  if (local_e0 != (byte *)0x0) {
    pvVar18 = GlobalHandle(local_e0);
    GlobalUnlock(pvVar18);
    pvVar18 = GlobalHandle(local_e0);
    GlobalFree(pvVar18);
  }
  ho = SelectObject(hdc_00,local_50);
  DeleteObject(ho);
  DeleteDC(hdc_00);
  return 0;
}


