/* Module: vidpcore.dll
   Function: FUN_5de899c0
   Address: 5de899c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5de899c0(int *param_1,int *param_2,short *param_3,int param_4,LOGFONTA *param_5,int param_6,
            int param_7)

{
  double _X;
  double _X_00;
  byte bVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short *psVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  ushort uVar15;
  uint uVar16;
  HDC hdc;
  HDC hdc_00;
  HFONT h;
  HGLOBAL pvVar17;
  DWORD DVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  HGDIOBJ ho;
  int iVar26;
  uint uVar27;
  byte *pbVar28;
  byte *pbVar29;
  int iVar30;
  short *psVar31;
  byte *pbVar32;
  _GLYPHMETRICS *p_Var33;
  uint uVar34;
  uint uVar35;
  short *psVar36;
  _GLYPHMETRICS *p_Var37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  float in_stack_00000030;
  float in_stack_00000034;
  float in_stack_00000038;
  float in_stack_0000003c;
  float in_stack_00000040;
  float in_stack_00000044;
  byte *local_140;
  int *local_128;
  int local_124;
  byte *local_108;
  int local_fc;
  undefined1 local_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  byte bStack_f1;
  short *local_ec;
  float local_e8;
  int local_e4;
  int local_e0;
  float local_dc;
  float local_d8;
  int *local_c8;
  uint local_c4;
  _GLYPHMETRICS local_c0;
  byte *local_ac;
  float local_a8;
  uint local_a4;
  float local_a0;
  uint local_9c;
  uint local_98;
  _GLYPHMETRICS local_94;
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  MAT2 local_6c;
  DWORD local_5c;
  int local_58;
  int *local_54;
  HGDIOBJ local_50;
  HDC local_4c;
  SIZE_T local_48;
  int local_44;
  uint local_40;
  undefined4 uStack_3c;
  tagTEXTMETRICA local_38;
  
  local_6c.eM11 = (FIXED)(in_stack_00000030 * in_stack_0000003c);
  local_6c.eM12 = (FIXED)(in_stack_00000034 * in_stack_0000003c);
  local_6c.eM21 = (FIXED)(in_stack_00000038 * in_stack_0000003c);
  bVar7 = ftol();
  bVar8 = ftol();
  bVar9 = ftol();
  bVar10 = ftol();
  bVar11 = ftol();
  bVar12 = ftol();
  bVar13 = ftol();
  bVar14 = ftol();
  bVar38 = bVar7 <= bVar11;
  bVar39 = bVar8 <= bVar12;
  bVar40 = bVar9 <= bVar13;
  bVar41 = bVar10 <= bVar14;
  FUN_5decf180(param_2,param_1,0,0,local_6c.eM21,local_6c.eM12,local_6c.eM11,in_stack_0000003c,3);
  if (param_3 == (short *)0x0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 == (int *)0x0) {
    if (param_2[4] == 0) {
      if (((param_2[8] == 0) && (uVar15 = *(ushort *)((int)param_2 + 0xe), uVar15 != 0)) &&
         (uVar15 < 9)) {
        local_54 = (int *)(*param_2 + (1 << ((byte)uVar15 & 0x1f)) * 4 + (int)param_2);
        goto LAB_5de89bd8;
      }
    }
    else if (param_2[4] == 3) {
      local_54 = param_2 + 0xd;
      goto LAB_5de89bd8;
    }
    local_54 = (int *)(*param_2 + param_2[8] * 4 + (int)param_2);
  }
  else {
    local_54 = param_1;
  }
LAB_5de89bd8:
  uVar16 = (uint)*(ushort *)((int)param_2 + 0xe) * param_2[1] + 0x1f;
  local_44 = (int)((uVar16 & 0xffffffe0) + ((int)uVar16 >> 0x1f & 7U)) >> 3;
  hdc = GetDC((HWND)0x0);
  hdc_00 = CreateCompatibleDC(hdc);
  local_4c = hdc_00;
  ReleaseDC((HWND)0x0,hdc);
  h = CreateFontIndirectA(param_5);
  local_50 = SelectObject(hdc_00,h);
  GetTextMetricsA(hdc_00,&local_38);
  uVar16 = param_5->lfHeight >> 0x1f;
  local_d8 = 0.0;
  local_e8 = (float)(int)((param_5->lfHeight ^ uVar16) - uVar16);
  local_94.gmBlackBoxX = 0;
  local_6c.eM12.fract = 0;
  local_6c.eM12.value = 0;
  local_94.gmBlackBoxY = 0;
  local_6c.eM21.fract = 0;
  local_6c.eM21.value = 0;
  local_94.gmptGlyphOrigin.x = 0;
  local_94.gmptGlyphOrigin.y = 0;
  local_c0.gmBlackBoxX = 0;
  local_94.gmCellIncX = 0;
  local_94.gmCellIncY = 0;
  local_74 = ((float)local_38.tmExternalLeading + local_e8) * in_stack_00000044;
  local_c0.gmBlackBoxY = 0;
  local_c0.gmptGlyphOrigin.x = 0;
  local_c0.gmptGlyphOrigin.y = 0;
  local_7c = 0.0;
  local_128 = (int *)0x0;
  local_dc = 0.0;
  local_80 = 0;
  local_6c.eM11.fract = 0;
  local_6c.eM11.value = 1;
  local_6c.eM22.fract = 0;
  local_6c.eM22.value = 1;
  local_98 = 0;
  local_9c = 0;
  local_c0.gmCellIncX = 0;
  local_c0.gmCellIncY = 0;
  local_5c = GetGlyphOutlineA(hdc_00,0x20,6,&local_94,0,(LPVOID)0x0,&local_6c);
  if (local_5c == 0xffffffff) {
    local_94.gmBlackBoxX = 0;
    local_94.gmptGlyphOrigin.x = 0;
    local_94.gmBlackBoxY = 0;
    local_94.gmptGlyphOrigin.y = 0;
    local_94.gmCellIncY = (short)local_38.tmHeight;
    local_94.gmCellIncX = (short)local_38.tmAveCharWidth;
  }
  iVar30 = 0;
  if (0 < param_4) {
    local_140 = (byte *)0x1;
    psVar36 = param_3;
    psVar6 = param_3;
    do {
      local_ec = psVar6 + 1;
      sVar2 = *psVar36;
      if (sVar2 == 0) break;
      if (sVar2 == 0xd) {
        local_128 = (int *)((int)local_128 + 1);
        if (((int)local_140 < param_4) && (*local_ec == 10)) {
          iVar30 = iVar30 + 1;
          local_ec = psVar6 + 2;
          local_140 = (byte *)((int)local_140 + 1);
          psVar36 = psVar36 + 1;
        }
      }
      else {
        uVar15 = FUN_5de96570(hdc_00,sVar2);
        if (uVar15 == 0) {
LAB_5de89e7d:
          p_Var33 = &local_94;
          p_Var37 = &local_c0;
          for (iVar26 = 5; iVar26 != 0; iVar26 = iVar26 + -1) {
            p_Var37->gmBlackBoxX = p_Var33->gmBlackBoxX;
            p_Var33 = (_GLYPHMETRICS *)&p_Var33->gmBlackBoxY;
            p_Var37 = (_GLYPHMETRICS *)&p_Var37->gmBlackBoxY;
          }
        }
        else {
          local_c0.gmBlackBoxX = 0;
          local_c0.gmBlackBoxY = 0;
          local_c0.gmptGlyphOrigin.x = 0;
          local_c0.gmptGlyphOrigin.y = 0;
          local_c0.gmCellIncX = 0;
          local_c0.gmCellIncY = 0;
          local_5c = GetGlyphOutlineA(hdc_00,(uint)uVar15,0x86,&local_c0,0,(LPVOID)0x0,&local_6c);
          if (local_5c == 0xffffffff) goto LAB_5de89e7d;
        }
        if ((int)local_dc < (int)local_c0.gmBlackBoxY) {
          local_dc = (float)local_c0.gmBlackBoxY;
        }
        if (local_98 < local_c0.gmBlackBoxX) {
          local_98 = local_c0.gmBlackBoxX;
        }
        if (local_9c < local_c0.gmBlackBoxY) {
          local_9c = local_c0.gmBlackBoxY;
        }
      }
      iVar30 = iVar30 + 1;
      local_140 = (byte *)((int)local_140 + 1);
      psVar36 = psVar36 + 1;
      psVar6 = local_ec;
    } while (iVar30 < param_4);
  }
  fVar3 = (float)local_98 * in_stack_00000040;
  if ((local_98 & 3) == 0) {
    iVar30 = 0;
  }
  else {
    iVar30 = 4 - (local_98 & 3);
  }
  local_108 = (byte *)0x0;
  local_48 = (iVar30 + local_98) * local_9c;
  if (local_48 != 0) {
    pvVar17 = GlobalAlloc(0x40,local_48);
    local_108 = GlobalLock(pvVar17);
    if (local_108 == (byte *)0x0) {
      return 0x8007000e;
    }
  }
  if (param_6 == 1) {
    local_dc = ((float)param_2[2] * (float)_DAT_5df1eec0 -
               ((float)(int)local_dc + (float)(int)local_128 * local_74) * (float)_DAT_5df1eec0) -
               (local_e8 - (float)(int)local_dc);
  }
  else if (param_6 == 2) {
    local_dc = ((float)param_2[2] - (float)(int)local_128 * local_74) - local_e8;
  }
  else {
    local_dc = -(local_e8 - (float)(int)local_dc);
  }
  local_ec = (short *)0x0;
  if (0 < param_4) {
    do {
      psVar6 = param_3 + (int)local_ec;
      if (param_3[(int)local_ec] == 0) break;
      if (param_3[(int)local_ec] == 0xd) {
        local_e8 = local_74 + local_e8;
        iVar30 = (int)local_ec + 1;
        local_d8 = 0.0;
        if ((iVar30 < param_4) && (param_3[iVar30] == 10)) {
          local_ec = (short *)iVar30;
        }
      }
      else {
        if (local_80 <= (int)local_ec) {
          local_a8 = 0.0;
          local_70 = 0.0;
          local_a0 = 0.0;
          local_78 = 0.0;
          psVar36 = psVar6;
          fVar4 = _DAT_5df205cc;
          for (psVar31 = local_ec; (int)psVar31 < param_4; psVar31 = (short *)((int)psVar31 + 1)) {
            local_78 = local_a0;
            sVar2 = *psVar36;
            if (sVar2 == 0) {
              local_80 = (int)psVar31;
              break;
            }
            if (sVar2 == 0xd) {
              local_80 = (int)psVar31 + 1;
              if ((local_80 < param_4) && (param_3[local_80] == 10)) {
                local_80 = (int)psVar31 + 2;
              }
              break;
            }
            if (sVar2 == 9) {
              iVar30 = (int)local_94.gmCellIncX;
              p_Var33 = &local_94;
              p_Var37 = &local_c0;
              for (iVar26 = 5; iVar26 != 0; iVar26 = iVar26 + -1) {
                p_Var37->gmBlackBoxX = p_Var33->gmBlackBoxX;
                p_Var33 = (_GLYPHMETRICS *)&p_Var33->gmBlackBoxY;
                p_Var37 = (_GLYPHMETRICS *)&p_Var37->gmBlackBoxY;
              }
              local_a0 = (float)iVar30 * _DAT_5df2bbe4;
              local_70 = local_a0 + local_70;
              fVar5 = (float)iVar30 * in_stack_00000040;
              fVar4 = fVar5;
              if ((_DAT_5df205c8 <= in_stack_00000040) &&
                 (fVar4 = fVar3, in_stack_00000040 <= _DAT_5df23598)) {
                fVar4 = (in_stack_00000040 - _DAT_5df205c8) * (fVar3 - fVar5) + fVar5;
              }
              fVar4 = fVar4 * _DAT_5df2bbe4;
              local_a8 = fVar4 + local_a8;
            }
            else {
              uVar15 = FUN_5de96570(hdc_00,CONCAT22((short)((uint)local_a0 >> 0x10),sVar2));
              if (uVar15 == 0) {
LAB_5de8a224:
                p_Var33 = &local_94;
                p_Var37 = &local_c0;
                for (iVar30 = 5; iVar30 != 0; iVar30 = iVar30 + -1) {
                  p_Var37->gmBlackBoxX = p_Var33->gmBlackBoxX;
                  p_Var33 = (_GLYPHMETRICS *)&p_Var33->gmBlackBoxY;
                  p_Var37 = (_GLYPHMETRICS *)&p_Var37->gmBlackBoxY;
                }
              }
              else {
                local_c0.gmBlackBoxX = 0;
                local_c0.gmBlackBoxY = 0;
                local_c0.gmptGlyphOrigin.x = 0;
                local_c0.gmptGlyphOrigin.y = 0;
                local_c0.gmCellIncX = 0;
                local_c0.gmCellIncY = 0;
                local_5c = GetGlyphOutlineA(hdc_00,(uint)uVar15,0x86,&local_c0,0,(LPVOID)0x0,
                                            &local_6c);
                if (((local_5c == 0xffffffff) || (local_98 < local_c0.gmBlackBoxX)) ||
                   (local_9c < local_c0.gmBlackBoxY)) goto LAB_5de8a224;
              }
              local_a0 = (float)(int)local_c0.gmCellIncX;
              local_70 = local_a0 + local_70;
              fVar5 = (float)(int)local_c0.gmCellIncX * in_stack_00000040;
              fVar4 = fVar5;
              if ((_DAT_5df205c8 <= in_stack_00000040) &&
                 (fVar4 = fVar3, in_stack_00000040 <= _DAT_5df23598)) {
                fVar4 = (in_stack_00000040 - _DAT_5df205c8) * (fVar3 - fVar5) + fVar5;
              }
              local_a8 = fVar4 + local_a8;
            }
            psVar36 = psVar36 + 1;
          }
          if (param_7 == 1) {
            local_7c = (float)(param_2[1] / 2) - (local_a8 - (fVar4 - local_78)) * _DAT_5df2bbe0;
          }
          else if (param_7 == 2) {
            fVar4 = local_78 * in_stack_00000040;
            fVar5 = fVar4;
            if ((_DAT_5df205c8 <= in_stack_00000040) &&
               (fVar5 = fVar3, in_stack_00000040 <= _DAT_5df23598)) {
              fVar5 = (in_stack_00000040 - _DAT_5df205c8) * (fVar3 - fVar4) + fVar4;
            }
            local_7c = ((float)param_2[1] - local_78) - (local_a8 - fVar5);
          }
          else {
            local_7c = 0.0;
          }
        }
        if ((_DAT_5df205cc <= (float)local_38.tmHeight + local_dc + local_e8) &&
           ((local_dc + local_e8) - (float)local_38.tmHeight <= (float)param_2[2])) {
          sVar2 = *psVar6;
          if (sVar2 == 9) {
            p_Var33 = &local_94;
            p_Var37 = &local_c0;
            for (iVar30 = 5; iVar30 != 0; iVar30 = iVar30 + -1) {
              p_Var37->gmBlackBoxX = p_Var33->gmBlackBoxX;
              p_Var33 = (_GLYPHMETRICS *)&p_Var33->gmBlackBoxY;
              p_Var37 = (_GLYPHMETRICS *)&p_Var37->gmBlackBoxY;
            }
            fVar4 = (float)(int)local_94.gmCellIncX * in_stack_00000040;
            fVar5 = fVar4;
            if ((_DAT_5df205c8 <= in_stack_00000040) &&
               (fVar5 = fVar3, in_stack_00000040 <= _DAT_5df23598)) {
              fVar5 = (in_stack_00000040 - _DAT_5df205c8) * (fVar3 - fVar4) + fVar4;
            }
            local_d8 = fVar5 * _DAT_5df2bbe4 + local_d8;
            local_e8 = (float)((int)local_94.gmCellIncY << 3) * in_stack_00000044 + local_e8;
          }
          else if (sVar2 == 0x20) {
            p_Var33 = &local_94;
            p_Var37 = &local_c0;
            for (iVar30 = 5; iVar30 != 0; iVar30 = iVar30 + -1) {
              p_Var37->gmBlackBoxX = p_Var33->gmBlackBoxX;
              p_Var33 = (_GLYPHMETRICS *)&p_Var33->gmBlackBoxY;
              p_Var37 = (_GLYPHMETRICS *)&p_Var37->gmBlackBoxY;
            }
            fVar4 = (float)(int)local_94.gmCellIncX * in_stack_00000040;
            fVar5 = fVar4;
            if ((_DAT_5df205c8 <= in_stack_00000040) &&
               (fVar5 = fVar3, in_stack_00000040 <= _DAT_5df23598)) {
              fVar5 = (in_stack_00000040 - _DAT_5df205c8) * (fVar3 - fVar4) + fVar4;
            }
            local_d8 = fVar5 + local_d8;
            local_e8 = (float)(int)local_94.gmCellIncY * in_stack_00000044 + local_e8;
          }
          else {
            uVar15 = FUN_5de96570(hdc_00,CONCAT22((short)((uint)psVar6 >> 0x10),sVar2));
            if (uVar15 != 0) {
              local_c0.gmBlackBoxX = 0;
              local_c0.gmBlackBoxY = 0;
              local_c0.gmptGlyphOrigin.x = 0;
              local_c0.gmptGlyphOrigin.y = 0;
              local_c0.gmCellIncX = 0;
              local_c0.gmCellIncY = 0;
              DVar18 = GetGlyphOutlineA(hdc_00,(uint)uVar15,0x86,&local_c0,local_48,local_108,
                                        &local_6c);
              if (((local_5c != 0xffffffff) && (local_c0.gmBlackBoxX <= local_98)) &&
                 (local_c0.gmBlackBoxY <= local_9c)) {
                if ((DVar18 != 0xffffffff) && (DVar18 != 0)) {
                  local_c4 = local_c0.gmBlackBoxX;
                  if ((local_c0.gmBlackBoxX & 3) != 0) {
                    local_c4 = (local_c0.gmBlackBoxX - (local_c0.gmBlackBoxX & 3)) + 4;
                  }
                  local_e0 = local_44;
                  local_c8 = local_54;
                  if (0 < local_44) {
                    local_e0 = -local_44;
                    local_c8 = (int *)((param_2[2] + -1) * local_44 + (int)local_54);
                  }
                  local_40 = local_c0.gmBlackBoxX;
                  uStack_3c = 0;
                  fVar5 = (float)local_c0.gmptGlyphOrigin.x + local_7c + local_d8;
                  fVar4 = (float)local_c0.gmptGlyphOrigin.y;
                  if ((_DAT_5df205cc <= (float)local_c0.gmBlackBoxX + fVar5) &&
                     (fVar5 <= (float)param_2[1])) {
                    _X = (double)fVar5;
                    floor(_X);
                    iVar19 = ftol();
                    _X_00 = (double)((local_e8 - fVar4) + local_dc);
                    floor(_X_00);
                    iVar20 = ftol();
                    floor(_X);
                    iVar30 = ftol();
                    floor(_X);
                    iVar21 = ftol();
                    iVar21 = iVar21 + local_c0.gmBlackBoxX;
                    floor(_X_00);
                    iVar22 = ftol();
                    floor(_X_00);
                    iVar23 = ftol();
                    iVar23 = iVar23 + local_c0.gmBlackBoxY;
                    local_e4 = 0;
                    iVar26 = (iVar20 * iVar19) / 0xff;
                    if (iVar26 < 0) {
                      local_f4 = 0;
                    }
                    else {
                      local_f4 = 0xff;
                      if (iVar26 < 0x100) {
                        local_f4 = (undefined1)iVar26;
                      }
                    }
                    iVar26 = ((0x101 - iVar19) * iVar20) / 0xff;
                    if (iVar26 < 0) {
                      uStack_f3 = 0;
                    }
                    else {
                      uStack_f3 = 0xff;
                      if (iVar26 < 0x100) {
                        uStack_f3 = (undefined1)iVar26;
                      }
                    }
                    iVar26 = ((0x101 - iVar20) * iVar19) / 0xff;
                    if (iVar26 < 0) {
                      uStack_f2 = 0;
                    }
                    else {
                      uStack_f2 = 0xff;
                      if (iVar26 < 0x100) {
                        uStack_f2 = (undefined1)iVar26;
                      }
                    }
                    iVar26 = ((0x101 - iVar20) * (0x101 - iVar19)) / 0xff;
                    if (iVar26 < 0) {
                      bStack_f1 = 0;
                    }
                    else {
                      bStack_f1 = 0xff;
                      if (iVar26 < 0x100) {
                        bStack_f1 = (byte)iVar26;
                      }
                    }
                    local_a4 = CONCAT12(bStack_f1,CONCAT11(uStack_f2,uStack_f3)) & 0xff;
                    uVar16 = CONCAT11(bStack_f1,uStack_f2) & 0xff;
                    uVar27 = CONCAT12(uStack_f2,CONCAT11(uStack_f3,local_f4)) & 0xff;
                    if (local_a4 + uVar27 == 0) {
                      if (uVar16 + uVar27 == 0) {
                        if (iVar22 < iVar23) {
                          local_128 = (int *)(iVar22 * local_e0 + (int)local_c8);
                          local_140 = local_108;
                          do {
                            if (((iVar22 < param_2[2]) && (-1 < iVar22)) && (iVar30 < iVar21)) {
                              pbVar29 = (byte *)((int)local_128 + iVar30 * 4 + 2);
                              iVar26 = iVar30;
                              do {
                                if ((iVar26 < param_2[1]) && (-1 < iVar26)) {
                                  if (local_140[iVar26 - iVar30] < 0x40) {
                                    uVar16 = (uint)local_140[iVar26 - iVar30];
                                  }
                                  else {
                                    uVar16 = 0x40;
                                  }
                                  uVar16 = (bStack_f1 * uVar16 * 4) / 0xff;
                                  if ((int)uVar16 < 0) {
                                    uVar16 = 0;
                                  }
                                  else if (0xff < uVar16) {
                                    uVar16 = 0xff;
                                  }
                                  uVar27 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                                  uVar27 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                                 uVar27) * uVar16) / 0xff + uVar27;
                                  if (bVar38) {
                                    uVar24 = (uint)pbVar29[-2];
                                    if ((int)uVar27 < (int)uVar24) goto LAB_5de8ca08;
                                  }
                                  else {
                                    uVar24 = (uint)pbVar29[-2];
                                    if ((int)(uint)pbVar29[-2] < (int)uVar27) {
LAB_5de8ca08:
                                      uVar24 = uVar27;
                                    }
                                  }
                                  uVar27 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                                  pbVar29[-2] = (byte)uVar24;
                                  uVar27 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                                 uVar27) * uVar16) / 0xff + uVar27;
                                  if (bVar39) {
                                    uVar24 = (uint)pbVar29[-1];
                                    if ((int)uVar24 <= (int)uVar27) goto LAB_5de8ca57;
                                  }
                                  else {
                                    uVar24 = (uint)pbVar29[-1];
                                    if ((int)uVar27 <= (int)uVar24) {
LAB_5de8ca57:
                                      uVar27 = uVar24;
                                    }
                                  }
                                  uVar24 = CONCAT11(bVar14,bVar13) & 0xff;
                                  pbVar29[-1] = (byte)uVar27;
                                  uVar24 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar24) * uVar16
                                                ) / 0xff + uVar24;
                                  if (bVar40) {
                                    uVar27 = (uint)*pbVar29;
                                    if ((int)uVar27 <= (int)uVar24) goto LAB_5de8caa4;
                                  }
                                  else {
                                    uVar27 = (uint)*pbVar29;
                                    if ((int)uVar24 <= (int)uVar27) {
LAB_5de8caa4:
                                      uVar24 = uVar27;
                                    }
                                  }
                                  *pbVar29 = (byte)uVar24;
                                  uVar16 = (int)(((uint)bVar10 - (uint)bVar14) * uVar16) / 0xff +
                                           (uint)bVar14;
                                  if (bVar41) {
                                    uVar27 = (uint)pbVar29[1];
                                    if ((int)uVar27 <= (int)uVar16) goto LAB_5de8caf2;
                                  }
                                  else {
                                    uVar27 = (uint)pbVar29[1];
                                    if ((int)uVar16 <= (int)uVar27) {
LAB_5de8caf2:
                                      uVar16 = uVar27;
                                    }
                                  }
                                  pbVar29[1] = (byte)uVar16;
                                }
                                iVar26 = iVar26 + 1;
                                pbVar29 = pbVar29 + 4;
                              } while (iVar26 < iVar21);
                            }
                            local_140 = local_140 + local_c4;
                            local_128 = (int *)((int)local_128 + local_e0);
                            iVar22 = iVar22 + 1;
                          } while (iVar22 < iVar23);
                        }
                      }
                      else {
                        for (; iVar22 < iVar23; iVar22 = iVar22 + 1) {
                          if ((iVar22 < param_2[2]) && (-1 < iVar22)) {
                            iVar26 = iVar22 * local_e0;
                            pbVar29 = local_108 + local_e4 * local_c4;
                            local_124 = 0;
                            if ((iVar30 < param_2[1]) && (-1 < iVar30)) {
                              if (*pbVar29 < 0x40) {
                                uVar27 = (uint)*pbVar29;
                              }
                              else {
                                uVar27 = 0x40;
                              }
                              uVar27 = (bStack_f1 * uVar27 * 4) / 0xff;
                              if ((int)uVar27 < 0) {
                                uVar27 = 0;
                              }
                              else if (0xff < uVar27) {
                                uVar27 = 0xff;
                              }
                              uVar24 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                              uVar24 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                             uVar24) * uVar27) / 0xff + uVar24;
                              if (bVar38) {
                                uVar34 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26);
                                if ((int)uVar34 <= (int)uVar24) goto LAB_5de8c40c;
                              }
                              else {
                                uVar34 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26);
                                if ((int)uVar24 <= (int)uVar34) {
LAB_5de8c40c:
                                  uVar24 = uVar34;
                                }
                              }
                              uVar34 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                              *(char *)((int)local_c8 + iVar30 * 4 + iVar26) = (char)uVar24;
                              uVar34 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                             uVar34) * uVar27) / 0xff + uVar34;
                              if (bVar39) {
                                uVar24 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26 + 1);
                                if ((int)uVar24 <= (int)uVar34) goto LAB_5de8c45e;
                              }
                              else {
                                uVar24 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26 + 1);
                                if ((int)uVar34 <= (int)uVar24) {
LAB_5de8c45e:
                                  uVar34 = uVar24;
                                }
                              }
                              uVar24 = CONCAT11(bVar14,bVar13) & 0xff;
                              *(char *)((int)local_c8 + iVar30 * 4 + iVar26 + 1) = (char)uVar34;
                              uVar24 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar24) * uVar27) /
                                       0xff + uVar24;
                              if (bVar40) {
                                uVar34 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26 + 2);
                                if ((int)uVar34 <= (int)uVar24) goto LAB_5de8c4b0;
                              }
                              else {
                                uVar34 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26 + 2);
                                if ((int)uVar24 <= (int)uVar34) {
LAB_5de8c4b0:
                                  uVar24 = uVar34;
                                }
                              }
                              *(char *)((int)local_c8 + iVar30 * 4 + iVar26 + 2) = (char)uVar24;
                              uVar27 = (int)(((uint)bVar10 - (uint)bVar14) * uVar27) / 0xff +
                                       (uint)bVar14;
                              if (bVar41) {
                                uVar24 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26 + 3);
                                if ((int)uVar24 <= (int)uVar27) goto LAB_5de8c502;
                              }
                              else {
                                uVar24 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26 + 3);
                                if ((int)uVar27 <= (int)uVar24) {
LAB_5de8c502:
                                  uVar27 = uVar24;
                                }
                              }
                              *(char *)((int)local_c8 + iVar30 * 4 + iVar26 + 3) = (char)uVar27;
                            }
                            local_fc = iVar30 + 1;
                            if (local_fc < iVar21) {
                              pbVar28 = (byte *)((int)local_c8 + local_fc * 4 + iVar26 + 2);
                              do {
                                if ((local_fc < param_2[1]) && (-1 < local_fc)) {
                                  if (pbVar29[local_124] < 0x40) {
                                    uVar27 = (uint)pbVar29[local_124];
                                  }
                                  else {
                                    uVar27 = 0x40;
                                  }
                                  if (pbVar29[local_124 + 1] < 0x40) {
                                    uVar24 = (uint)pbVar29[local_124 + 1];
                                  }
                                  else {
                                    uVar24 = 0x40;
                                  }
                                  uVar27 = (uVar16 * uVar27 * 4) / 0xff +
                                           (bStack_f1 * uVar24 * 4) / 0xff;
                                  if ((int)uVar27 < 0) {
                                    uVar27 = 0;
                                  }
                                  else if (0xff < uVar27) {
                                    uVar27 = 0xff;
                                  }
                                  uVar24 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                                  uVar24 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                                 uVar24) * uVar27) / 0xff + uVar24;
                                  if (bVar38) {
                                    uVar34 = (uint)pbVar28[-2];
                                    if ((int)uVar24 < (int)uVar34) goto LAB_5de8c60f;
                                  }
                                  else {
                                    uVar34 = (uint)pbVar28[-2];
                                    if ((int)(uint)pbVar28[-2] < (int)uVar24) {
LAB_5de8c60f:
                                      uVar34 = uVar24;
                                    }
                                  }
                                  uVar24 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                                  pbVar28[-2] = (byte)uVar34;
                                  uVar24 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                                 uVar24) * uVar27) / 0xff + uVar24;
                                  if (bVar39) {
                                    uVar34 = (uint)pbVar28[-1];
                                    if ((int)uVar34 <= (int)uVar24) goto LAB_5de8c65e;
                                  }
                                  else {
                                    uVar34 = (uint)pbVar28[-1];
                                    if ((int)uVar24 <= (int)uVar34) {
LAB_5de8c65e:
                                      uVar24 = uVar34;
                                    }
                                  }
                                  uVar34 = CONCAT11(bVar14,bVar13) & 0xff;
                                  pbVar28[-1] = (byte)uVar24;
                                  uVar34 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar34) * uVar27
                                                ) / 0xff + uVar34;
                                  if (bVar40) {
                                    uVar24 = (uint)*pbVar28;
                                    if ((int)uVar24 <= (int)uVar34) goto LAB_5de8c6ab;
                                  }
                                  else {
                                    uVar24 = (uint)*pbVar28;
                                    if ((int)uVar34 <= (int)uVar24) {
LAB_5de8c6ab:
                                      uVar34 = uVar24;
                                    }
                                  }
                                  *pbVar28 = (byte)uVar34;
                                  uVar27 = (int)(((uint)bVar10 - (uint)bVar14) * uVar27) / 0xff +
                                           (uint)bVar14;
                                  if (bVar41) {
                                    uVar24 = (uint)pbVar28[1];
                                    if ((int)uVar24 <= (int)uVar27) goto LAB_5de8c6f9;
                                  }
                                  else {
                                    uVar24 = (uint)pbVar28[1];
                                    if ((int)uVar27 <= (int)uVar24) {
LAB_5de8c6f9:
                                      uVar27 = uVar24;
                                    }
                                  }
                                  pbVar28[1] = (byte)uVar27;
                                }
                                local_124 = local_124 + 1;
                                local_fc = local_fc + 1;
                                pbVar28 = pbVar28 + 4;
                              } while (local_fc < iVar21);
                            }
                            if ((local_fc < param_2[1]) && (-1 < local_fc)) {
                              if (pbVar29[local_124] < 0x40) {
                                uVar27 = (uint)pbVar29[local_124];
                              }
                              else {
                                uVar27 = 0x40;
                              }
                              uVar27 = (uVar16 * uVar27 * 4) / 0xff;
                              if ((int)uVar27 < 0) {
                                uVar27 = 0;
                              }
                              else if (0xff < uVar27) {
                                uVar27 = 0xff;
                              }
                              uVar24 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                              uVar24 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                             uVar24) * uVar27) / 0xff + uVar24;
                              if (bVar38) {
                                uVar34 = (uint)*(byte *)((int)local_c8 + local_fc * 4 + iVar26);
                                if ((int)uVar34 <= (int)uVar24) goto LAB_5de8c7d4;
                              }
                              else {
                                uVar34 = (uint)*(byte *)((int)local_c8 + local_fc * 4 + iVar26);
                                if ((int)uVar24 <= (int)uVar34) {
LAB_5de8c7d4:
                                  uVar24 = uVar34;
                                }
                              }
                              uVar34 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                              *(char *)((int)local_c8 + local_fc * 4 + iVar26) = (char)uVar24;
                              uVar34 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                             uVar34) * uVar27) / 0xff + uVar34;
                              if (bVar39) {
                                uVar24 = (uint)*(byte *)((int)local_c8 + local_fc * 4 + iVar26 + 1);
                                if ((int)uVar24 <= (int)uVar34) goto LAB_5de8c826;
                              }
                              else {
                                uVar24 = (uint)*(byte *)((int)local_c8 + local_fc * 4 + iVar26 + 1);
                                if ((int)uVar34 <= (int)uVar24) {
LAB_5de8c826:
                                  uVar34 = uVar24;
                                }
                              }
                              uVar24 = CONCAT11(bVar14,bVar13) & 0xff;
                              *(char *)((int)local_c8 + local_fc * 4 + iVar26 + 1) = (char)uVar34;
                              uVar24 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar24) * uVar27) /
                                       0xff + uVar24;
                              if (bVar40) {
                                uVar34 = (uint)*(byte *)((int)local_c8 + local_fc * 4 + iVar26 + 2);
                                if ((int)uVar34 <= (int)uVar24) goto LAB_5de8c878;
                              }
                              else {
                                uVar34 = (uint)*(byte *)((int)local_c8 + local_fc * 4 + iVar26 + 2);
                                if ((int)uVar24 <= (int)uVar34) {
LAB_5de8c878:
                                  uVar24 = uVar34;
                                }
                              }
                              *(char *)((int)local_c8 + local_fc * 4 + iVar26 + 2) = (char)uVar24;
                              uVar27 = (int)(((uint)bVar10 - (uint)bVar14) * uVar27) / 0xff +
                                       (uint)bVar14;
                              pbVar29 = (byte *)((int)local_c8 + local_fc * 4 + iVar26 + 3);
                              if (bVar41) {
                                uVar24 = (uint)*pbVar29;
                                if ((int)uVar24 <= (int)uVar27) goto LAB_5de8c8ca;
                              }
                              else {
                                uVar24 = (uint)*pbVar29;
                                if ((int)uVar27 <= (int)uVar24) {
LAB_5de8c8ca:
                                  uVar27 = uVar24;
                                }
                              }
                              *pbVar29 = (byte)uVar27;
                            }
                          }
                          local_e4 = local_e4 + 1;
                        }
                      }
                    }
                    else if (uVar16 + uVar27 == 0) {
                      if (((iVar22 < param_2[2]) && (-1 < iVar22)) && (iVar30 < iVar21)) {
                        pbVar29 = (byte *)((int)local_c8 + iVar30 * 4 + iVar22 * local_e0 + 2);
                        iVar26 = iVar30;
                        do {
                          if ((iVar26 < param_2[1]) && (-1 < iVar26)) {
                            if (local_108[iVar26 - iVar30] < 0x40) {
                              uVar16 = (uint)local_108[iVar26 - iVar30];
                            }
                            else {
                              uVar16 = 0x40;
                            }
                            uVar16 = (bStack_f1 * uVar16 * 4) / 0xff;
                            if ((int)uVar16 < 0) {
                              uVar16 = 0;
                            }
                            else if (0xff < uVar16) {
                              uVar16 = 0xff;
                            }
                            uVar27 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                            uVar27 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) - uVar27)
                                          * uVar16) / 0xff + uVar27;
                            if (bVar38) {
                              uVar24 = (uint)pbVar29[-2];
                              if ((int)uVar27 < (int)uVar24) goto LAB_5de8bcff;
                            }
                            else {
                              uVar24 = (uint)pbVar29[-2];
                              if ((int)(uint)pbVar29[-2] < (int)uVar27) {
LAB_5de8bcff:
                                uVar24 = uVar27;
                              }
                            }
                            uVar27 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                            pbVar29[-2] = (byte)uVar24;
                            uVar27 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) - uVar27
                                           ) * uVar16) / 0xff + uVar27;
                            if (bVar39) {
                              uVar24 = (uint)pbVar29[-1];
                              if ((int)uVar24 <= (int)uVar27) goto LAB_5de8bd4e;
                            }
                            else {
                              uVar24 = (uint)pbVar29[-1];
                              if ((int)uVar27 <= (int)uVar24) {
LAB_5de8bd4e:
                                uVar27 = uVar24;
                              }
                            }
                            uVar24 = CONCAT11(bVar14,bVar13) & 0xff;
                            pbVar29[-1] = (byte)uVar27;
                            uVar24 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar24) * uVar16) /
                                     0xff + uVar24;
                            if (bVar40) {
                              uVar27 = (uint)*pbVar29;
                              if ((int)uVar27 <= (int)uVar24) goto LAB_5de8bd9b;
                            }
                            else {
                              uVar27 = (uint)*pbVar29;
                              if ((int)uVar24 <= (int)uVar27) {
LAB_5de8bd9b:
                                uVar24 = uVar27;
                              }
                            }
                            *pbVar29 = (byte)uVar24;
                            uVar16 = (int)(((uint)bVar10 - (uint)bVar14) * uVar16) / 0xff +
                                     (uint)bVar14;
                            if (bVar41) {
                              uVar27 = (uint)pbVar29[1];
                              if ((int)uVar27 <= (int)uVar16) goto LAB_5de8bde9;
                            }
                            else {
                              uVar27 = (uint)pbVar29[1];
                              if ((int)uVar16 <= (int)uVar27) {
LAB_5de8bde9:
                                uVar16 = uVar27;
                              }
                            }
                            pbVar29[1] = (byte)uVar16;
                          }
                          iVar26 = iVar26 + 1;
                          pbVar29 = pbVar29 + 4;
                        } while (iVar26 < iVar21);
                      }
                      iVar22 = iVar22 + 1;
                      if (iVar22 < iVar23) {
                        local_ac = (byte *)(iVar22 * local_e0 + (int)local_c8);
                        local_140 = local_108;
                        local_128 = (int *)((iVar30 - local_c4) - (int)local_108);
                        local_e4 = iVar23 - iVar22;
                        pbVar29 = local_108;
                        do {
                          pbVar29 = pbVar29 + local_c4;
                          if (((iVar22 < param_2[2]) && (-1 < iVar22)) && (iVar30 < iVar21)) {
                            pbVar28 = local_ac + iVar30 * 4 + 2;
                            local_58 = (int)local_140 - (int)pbVar29;
                            pbVar32 = pbVar29;
                            do {
                              if (((int)(pbVar32 + (int)local_128) < param_2[1]) &&
                                 (-1 < (int)(pbVar32 + (int)local_128))) {
                                if (pbVar32[(int)local_140 - (int)pbVar29] < 0x40) {
                                  uVar16 = (uint)pbVar32[(int)local_140 - (int)pbVar29];
                                }
                                else {
                                  uVar16 = 0x40;
                                }
                                if (*pbVar32 < 0x40) {
                                  uVar27 = (uint)*pbVar32;
                                }
                                else {
                                  uVar27 = 0x40;
                                }
                                uVar16 = (local_a4 * uVar16 * 4) / 0xff +
                                         (bStack_f1 * uVar27 * 4) / 0xff;
                                if ((int)uVar16 < 0) {
                                  uVar16 = 0;
                                }
                                else if (0xff < uVar16) {
                                  uVar16 = 0xff;
                                }
                                uVar27 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                                uVar27 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                               uVar27) * uVar16) / 0xff + uVar27;
                                if (bVar38) {
                                  uVar24 = (uint)pbVar28[-2];
                                  if ((int)uVar27 < (int)uVar24) goto LAB_5de8bf9c;
                                }
                                else {
                                  uVar24 = (uint)pbVar28[-2];
                                  if ((int)(uint)pbVar28[-2] < (int)uVar27) {
LAB_5de8bf9c:
                                    uVar24 = uVar27;
                                  }
                                }
                                uVar27 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                                pbVar28[-2] = (byte)uVar24;
                                uVar27 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                               uVar27) * uVar16) / 0xff + uVar27;
                                if (bVar39) {
                                  uVar24 = (uint)pbVar28[-1];
                                  if ((int)uVar24 <= (int)uVar27) goto LAB_5de8bfeb;
                                }
                                else {
                                  uVar24 = (uint)pbVar28[-1];
                                  if ((int)uVar27 <= (int)uVar24) {
LAB_5de8bfeb:
                                    uVar27 = uVar24;
                                  }
                                }
                                uVar24 = CONCAT11(bVar14,bVar13) & 0xff;
                                pbVar28[-1] = (byte)uVar27;
                                uVar24 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar24) * uVar16)
                                         / 0xff + uVar24;
                                if (bVar40) {
                                  uVar27 = (uint)*pbVar28;
                                  if ((int)uVar27 <= (int)uVar24) goto LAB_5de8c038;
                                }
                                else {
                                  uVar27 = (uint)*pbVar28;
                                  if ((int)uVar24 <= (int)uVar27) {
LAB_5de8c038:
                                    uVar24 = uVar27;
                                  }
                                }
                                *pbVar28 = (byte)uVar24;
                                uVar16 = (int)(((uint)bVar10 - (uint)bVar14) * uVar16) / 0xff +
                                         (uint)bVar14;
                                if (bVar41) {
                                  uVar27 = (uint)pbVar28[1];
                                  if ((int)uVar27 <= (int)uVar16) goto LAB_5de8c086;
                                }
                                else {
                                  uVar27 = (uint)pbVar28[1];
                                  if ((int)uVar16 <= (int)uVar27) {
LAB_5de8c086:
                                    uVar16 = uVar27;
                                  }
                                }
                                pbVar28[1] = (byte)uVar16;
                              }
                              pbVar32 = pbVar32 + 1;
                              pbVar28 = pbVar28 + 4;
                            } while ((int)(pbVar32 + (int)local_128) < iVar21);
                          }
                          local_128 = (int *)((int)local_128 - local_c4);
                          local_ac = local_ac + local_e0;
                          local_140 = local_140 + local_c4;
                          iVar22 = iVar22 + 1;
                        } while (iVar22 < iVar23);
                      }
                      if ((iVar22 < param_2[2]) && (-1 < iVar22)) {
                        if (iVar30 < iVar21) {
                          iVar26 = local_e4 * local_c4 - iVar30;
                          pbVar29 = (byte *)((int)local_c8 + iVar30 * 4 + iVar22 * local_e0 + 2);
                          do {
                            if ((iVar30 < param_2[1]) && (-1 < iVar30)) {
                              if (local_108[iVar30 + iVar26] < 0x40) {
                                uVar16 = (uint)local_108[iVar30 + iVar26];
                              }
                              else {
                                uVar16 = 0x40;
                              }
                              uVar16 = (local_a4 * uVar16 * 4) / 0xff;
                              if ((int)uVar16 < 0) {
                                uVar16 = 0;
                              }
                              else if (0xff < uVar16) {
                                uVar16 = 0xff;
                              }
                              uVar27 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                              uVar27 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                             uVar27) * uVar16) / 0xff + uVar27;
                              if (bVar38) {
                                uVar24 = (uint)pbVar29[-2];
                                if ((int)uVar27 < (int)uVar24) goto LAB_5de8c1f8;
                              }
                              else {
                                uVar24 = (uint)pbVar29[-2];
                                if ((int)(uint)pbVar29[-2] < (int)uVar27) {
LAB_5de8c1f8:
                                  uVar24 = uVar27;
                                }
                              }
                              uVar27 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                              pbVar29[-2] = (byte)uVar24;
                              uVar27 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                             uVar27) * uVar16) / 0xff + uVar27;
                              if (bVar39) {
                                uVar24 = (uint)pbVar29[-1];
                                if ((int)uVar24 <= (int)uVar27) goto LAB_5de8c247;
                              }
                              else {
                                uVar24 = (uint)pbVar29[-1];
                                if ((int)uVar27 <= (int)uVar24) {
LAB_5de8c247:
                                  uVar27 = uVar24;
                                }
                              }
                              uVar24 = CONCAT11(bVar14,bVar13) & 0xff;
                              pbVar29[-1] = (byte)uVar27;
                              uVar24 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar24) * uVar16) /
                                       0xff + uVar24;
                              if (bVar40) {
                                uVar27 = (uint)*pbVar29;
                                if ((int)uVar27 <= (int)uVar24) goto LAB_5de8c294;
                              }
                              else {
                                uVar27 = (uint)*pbVar29;
                                if ((int)uVar24 <= (int)uVar27) {
LAB_5de8c294:
                                  uVar24 = uVar27;
                                }
                              }
                              *pbVar29 = (byte)uVar24;
                              uVar16 = (int)(((uint)bVar10 - (uint)bVar14) * uVar16) / 0xff +
                                       (uint)bVar14;
                              if (bVar41) {
                                uVar27 = (uint)pbVar29[1];
                                if ((int)uVar27 <= (int)uVar16) goto LAB_5de8c2e2;
                              }
                              else {
                                uVar27 = (uint)pbVar29[1];
                                if ((int)uVar16 <= (int)uVar27) {
LAB_5de8c2e2:
                                  uVar16 = uVar27;
                                }
                              }
                              pbVar29[1] = (byte)uVar16;
                            }
                            iVar30 = iVar30 + 1;
                            pbVar29 = pbVar29 + 4;
                          } while (iVar30 < iVar21);
                        }
                      }
                    }
                    else {
                      iVar26 = iVar22 * local_e0;
                      local_124 = 0;
                      if ((iVar22 < param_2[2]) && (-1 < iVar22)) {
                        if ((iVar30 < param_2[1]) && (-1 < iVar30)) {
                          if (*local_108 < 0x40) {
                            uVar24 = (uint)*local_108;
                          }
                          else {
                            uVar24 = 0x40;
                          }
                          uVar24 = (bStack_f1 * uVar24 * 4) / 0xff;
                          if ((int)uVar24 < 0) {
                            uVar24 = 0;
                          }
                          else if (0xff < uVar24) {
                            uVar24 = 0xff;
                          }
                          uVar34 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                          uVar34 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) - uVar34) *
                                        uVar24) / 0xff + uVar34;
                          if (bVar38) {
                            uVar35 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26);
                            if ((int)uVar35 <= (int)uVar34) goto LAB_5de8aa82;
                          }
                          else {
                            uVar35 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26);
                            if ((int)uVar34 <= (int)uVar35) {
LAB_5de8aa82:
                              uVar34 = uVar35;
                            }
                          }
                          uVar35 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                          *(char *)((int)local_c8 + iVar30 * 4 + iVar26) = (char)uVar34;
                          uVar35 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) - uVar35)
                                        * uVar24) / 0xff + uVar35;
                          if (bVar39) {
                            uVar34 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26 + 1);
                            if ((int)uVar34 <= (int)uVar35) goto LAB_5de8aad4;
                          }
                          else {
                            uVar34 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26 + 1);
                            if ((int)uVar35 <= (int)uVar34) {
LAB_5de8aad4:
                              uVar35 = uVar34;
                            }
                          }
                          uVar34 = CONCAT11(bVar14,bVar13) & 0xff;
                          *(char *)((int)local_c8 + iVar30 * 4 + iVar26 + 1) = (char)uVar35;
                          uVar34 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar34) * uVar24) / 0xff
                                   + uVar34;
                          if (bVar40) {
                            uVar35 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26 + 2);
                            if ((int)uVar35 <= (int)uVar34) goto LAB_5de8ab26;
                          }
                          else {
                            uVar35 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26 + 2);
                            if ((int)uVar34 <= (int)uVar35) {
LAB_5de8ab26:
                              uVar34 = uVar35;
                            }
                          }
                          *(char *)((int)local_c8 + iVar30 * 4 + iVar26 + 2) = (char)uVar34;
                          uVar24 = (int)(((uint)bVar10 - (uint)bVar14) * uVar24) / 0xff +
                                   (uint)bVar14;
                          pbVar29 = (byte *)((int)local_c8 + iVar30 * 4 + iVar26 + 3);
                          if (bVar41) {
                            uVar34 = (uint)*pbVar29;
                            if ((int)uVar34 <= (int)uVar24) goto LAB_5de8ab78;
                          }
                          else {
                            uVar34 = (uint)*pbVar29;
                            if ((int)uVar24 <= (int)uVar34) {
LAB_5de8ab78:
                              uVar24 = uVar34;
                            }
                          }
                          *pbVar29 = (byte)uVar24;
                        }
                        iVar19 = iVar30 + 1;
                        if (iVar19 < iVar21) {
                          pbVar29 = (byte *)((int)local_c8 + iVar19 * 4 + iVar26 + 2);
                          do {
                            if ((iVar19 < param_2[1]) && (-1 < iVar19)) {
                              if (local_108[local_124] < 0x40) {
                                uVar24 = (uint)local_108[local_124];
                              }
                              else {
                                uVar24 = 0x40;
                              }
                              if (local_108[local_124 + 1] < 0x40) {
                                uVar34 = (uint)local_108[local_124 + 1];
                              }
                              else {
                                uVar34 = 0x40;
                              }
                              uVar24 = (uVar16 * uVar24 * 4) / 0xff +
                                       (bStack_f1 * uVar34 * 4) / 0xff;
                              if ((int)uVar24 < 0) {
                                uVar24 = 0;
                              }
                              else if (0xff < uVar24) {
                                uVar24 = 0xff;
                              }
                              uVar34 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                              uVar34 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                             uVar34) * uVar24) / 0xff + uVar34;
                              if (bVar38) {
                                uVar35 = (uint)pbVar29[-2];
                                if ((int)uVar34 < (int)uVar35) goto LAB_5de8ac7d;
                              }
                              else {
                                uVar35 = (uint)pbVar29[-2];
                                if ((int)(uint)pbVar29[-2] < (int)uVar34) {
LAB_5de8ac7d:
                                  uVar35 = uVar34;
                                }
                              }
                              uVar34 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                              pbVar29[-2] = (byte)uVar35;
                              uVar34 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                             uVar34) * uVar24) / 0xff + uVar34;
                              if (bVar39) {
                                uVar35 = (uint)pbVar29[-1];
                                if ((int)uVar35 <= (int)uVar34) goto LAB_5de8accc;
                              }
                              else {
                                uVar35 = (uint)pbVar29[-1];
                                if ((int)uVar34 <= (int)uVar35) {
LAB_5de8accc:
                                  uVar34 = uVar35;
                                }
                              }
                              uVar35 = CONCAT11(bVar14,bVar13) & 0xff;
                              pbVar29[-1] = (byte)uVar34;
                              uVar35 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar35) * uVar24) /
                                       0xff + uVar35;
                              if (bVar40) {
                                uVar34 = (uint)*pbVar29;
                                if ((int)uVar34 <= (int)uVar35) goto LAB_5de8ad19;
                              }
                              else {
                                uVar34 = (uint)*pbVar29;
                                if ((int)uVar35 <= (int)uVar34) {
LAB_5de8ad19:
                                  uVar35 = uVar34;
                                }
                              }
                              *pbVar29 = (byte)uVar35;
                              uVar24 = (int)(((uint)bVar10 - (uint)bVar14) * uVar24) / 0xff +
                                       (uint)bVar14;
                              if (bVar41) {
                                uVar34 = (uint)pbVar29[1];
                                if ((int)uVar34 <= (int)uVar24) goto LAB_5de8ad67;
                              }
                              else {
                                uVar34 = (uint)pbVar29[1];
                                if ((int)uVar24 <= (int)uVar34) {
LAB_5de8ad67:
                                  uVar24 = uVar34;
                                }
                              }
                              pbVar29[1] = (byte)uVar24;
                            }
                            local_124 = local_124 + 1;
                            iVar19 = iVar19 + 1;
                            pbVar29 = pbVar29 + 4;
                          } while (iVar19 < iVar21);
                        }
                        if ((iVar19 < param_2[1]) && (-1 < iVar19)) {
                          if (local_108[local_124] < 0x40) {
                            uVar24 = (uint)local_108[local_124];
                          }
                          else {
                            uVar24 = 0x40;
                          }
                          uVar24 = (uVar24 * uVar16 * 4) / 0xff;
                          if ((int)uVar24 < 0) {
                            uVar24 = 0;
                          }
                          else if (0xff < uVar24) {
                            uVar24 = 0xff;
                          }
                          uVar34 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                          uVar34 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) - uVar34) *
                                        uVar24) / 0xff + uVar34;
                          if (bVar38) {
                            uVar35 = (uint)*(byte *)((int)local_c8 + iVar19 * 4 + iVar26);
                            if ((int)uVar35 <= (int)uVar34) goto LAB_5de8ae3e;
                          }
                          else {
                            uVar35 = (uint)*(byte *)((int)local_c8 + iVar19 * 4 + iVar26);
                            if ((int)uVar34 <= (int)uVar35) {
LAB_5de8ae3e:
                              uVar34 = uVar35;
                            }
                          }
                          uVar35 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                          *(char *)((int)local_c8 + iVar19 * 4 + iVar26) = (char)uVar34;
                          uVar35 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) - uVar35)
                                        * uVar24) / 0xff + uVar35;
                          if (bVar39) {
                            uVar34 = (uint)*(byte *)((int)local_c8 + iVar19 * 4 + iVar26 + 1);
                            if ((int)uVar34 <= (int)uVar35) goto LAB_5de8ae8f;
                          }
                          else {
                            uVar34 = (uint)*(byte *)((int)local_c8 + iVar19 * 4 + iVar26 + 1);
                            if ((int)uVar35 <= (int)uVar34) {
LAB_5de8ae8f:
                              uVar35 = uVar34;
                            }
                          }
                          uVar34 = CONCAT11(bVar14,bVar13) & 0xff;
                          *(char *)((int)local_c8 + iVar19 * 4 + iVar26 + 1) = (char)uVar35;
                          uVar34 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar34) * uVar24) / 0xff
                                   + uVar34;
                          if (bVar40) {
                            uVar35 = (uint)*(byte *)((int)local_c8 + iVar19 * 4 + iVar26 + 2);
                            if ((int)uVar35 <= (int)uVar34) goto LAB_5de8aee1;
                          }
                          else {
                            uVar35 = (uint)*(byte *)((int)local_c8 + iVar19 * 4 + iVar26 + 2);
                            if ((int)uVar34 <= (int)uVar35) {
LAB_5de8aee1:
                              uVar34 = uVar35;
                            }
                          }
                          *(char *)((int)local_c8 + iVar19 * 4 + iVar26 + 2) = (char)uVar34;
                          uVar24 = (int)(((uint)bVar10 - (uint)bVar14) * uVar24) / 0xff +
                                   (uint)bVar14;
                          pbVar29 = (byte *)((int)local_c8 + iVar19 * 4 + iVar26 + 3);
                          if (bVar41) {
                            uVar34 = (uint)*pbVar29;
                            if ((int)uVar24 < (int)uVar34) goto LAB_5de8af33;
                          }
                          else {
                            uVar34 = (uint)*pbVar29;
                            if ((int)(uint)*pbVar29 < (int)uVar24) {
LAB_5de8af33:
                              uVar34 = uVar24;
                            }
                          }
                          *pbVar29 = (byte)uVar34;
                        }
                      }
                      while (iVar22 = iVar22 + 1, iVar22 < iVar23) {
                        if ((iVar22 < param_2[2]) && (-1 < iVar22)) {
                          pbVar29 = local_108 + local_e4 * local_c4;
                          iVar26 = iVar22 * local_e0;
                          pbVar28 = pbVar29 + local_c4;
                          local_124 = 0;
                          if ((iVar30 < param_2[1]) && (-1 < iVar30)) {
                            if (*pbVar29 < 0x40) {
                              uVar24 = (uint)*pbVar29;
                            }
                            else {
                              uVar24 = 0x40;
                            }
                            if (*pbVar28 < 0x40) {
                              uVar34 = (uint)*pbVar28;
                            }
                            else {
                              uVar34 = 0x40;
                            }
                            uVar24 = (uVar24 * local_a4 * 4) / 0xff +
                                     (bStack_f1 * uVar34 * 4) / 0xff;
                            if ((int)uVar24 < 0) {
                              uVar24 = 0;
                            }
                            else if (0xff < uVar24) {
                              uVar24 = 0xff;
                            }
                            uVar34 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                            uVar34 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) - uVar34)
                                          * uVar24) / 0xff + uVar34;
                            if (bVar38) {
                              uVar35 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26);
                              if ((int)uVar35 <= (int)uVar34) goto LAB_5de8b08d;
                            }
                            else {
                              uVar35 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26);
                              if ((int)uVar34 <= (int)uVar35) {
LAB_5de8b08d:
                                uVar34 = uVar35;
                              }
                            }
                            uVar35 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                            *(char *)((int)local_c8 + iVar30 * 4 + iVar26) = (char)uVar34;
                            uVar35 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) - uVar35
                                           ) * uVar24) / 0xff + uVar35;
                            if (bVar39) {
                              uVar34 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26 + 1);
                              if ((int)uVar34 <= (int)uVar35) goto LAB_5de8b0de;
                            }
                            else {
                              uVar34 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26 + 1);
                              if ((int)uVar35 <= (int)uVar34) {
LAB_5de8b0de:
                                uVar35 = uVar34;
                              }
                            }
                            uVar34 = CONCAT11(bVar14,bVar13) & 0xff;
                            *(char *)((int)local_c8 + iVar30 * 4 + iVar26 + 1) = (char)uVar35;
                            uVar34 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar34) * uVar24) /
                                     0xff + uVar34;
                            if (bVar40) {
                              uVar35 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26 + 2);
                              if ((int)uVar35 <= (int)uVar34) goto LAB_5de8b130;
                            }
                            else {
                              uVar35 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar26 + 2);
                              if ((int)uVar34 <= (int)uVar35) {
LAB_5de8b130:
                                uVar34 = uVar35;
                              }
                            }
                            *(char *)((int)local_c8 + iVar30 * 4 + iVar26 + 2) = (char)uVar34;
                            uVar24 = (int)(((uint)bVar10 - (uint)bVar14) * uVar24) / 0xff +
                                     (uint)bVar14;
                            pbVar32 = (byte *)((int)local_c8 + iVar30 * 4 + iVar26 + 3);
                            if (bVar41) {
                              uVar34 = (uint)*pbVar32;
                              if ((int)uVar24 < (int)uVar34) goto LAB_5de8b182;
                            }
                            else {
                              uVar34 = (uint)*pbVar32;
                              if ((int)(uint)*pbVar32 < (int)uVar24) {
LAB_5de8b182:
                                uVar34 = uVar24;
                              }
                            }
                            *pbVar32 = (byte)uVar34;
                          }
                          iVar19 = iVar30 + 1;
                          if (iVar19 < iVar21) {
                            local_ac = (byte *)((int)local_c8 + iVar19 * 4 + iVar26 + 2);
                            local_58 = (int)pbVar29 - (int)pbVar28;
                            do {
                              if ((iVar19 < param_2[1]) && (-1 < iVar19)) {
                                bVar1 = (pbVar28 + local_124)[(int)pbVar29 - (int)pbVar28];
                                if (bVar1 < 0x40) {
                                  uVar24 = (uint)bVar1;
                                }
                                else {
                                  uVar24 = 0x40;
                                }
                                if (pbVar29[local_124 + 1] < 0x40) {
                                  uVar34 = (uint)pbVar29[local_124 + 1];
                                }
                                else {
                                  uVar34 = 0x40;
                                }
                                bVar1 = pbVar28[local_124];
                                if (bVar1 < 0x40) {
                                  uVar35 = (uint)bVar1;
                                }
                                else {
                                  uVar35 = 0x40;
                                }
                                if (pbVar28[local_124 + 1] < 0x40) {
                                  uVar25 = (uint)pbVar28[local_124 + 1];
                                }
                                else {
                                  uVar25 = 0x40;
                                }
                                uVar24 = (uVar24 * uVar27 * 4) / 0xff +
                                         (uVar34 * local_a4 * 4) / 0xff +
                                         (uVar35 * uVar16 * 4) / 0xff +
                                         (bStack_f1 * uVar25 * 4) / 0xff;
                                if ((int)uVar24 < 0) {
                                  uVar24 = 0;
                                }
                                else if (0xff < uVar24) {
                                  uVar24 = 0xff;
                                }
                                uVar34 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                                uVar34 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                               uVar34) * uVar24) / 0xff + uVar34;
                                if (bVar38) {
                                  uVar35 = (uint)local_ac[-2];
                                  if ((int)uVar34 < (int)uVar35) goto LAB_5de8b324;
                                }
                                else {
                                  uVar35 = (uint)local_ac[-2];
                                  if ((int)(uint)local_ac[-2] < (int)uVar34) {
LAB_5de8b324:
                                    uVar35 = uVar34;
                                  }
                                }
                                uVar34 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                                local_ac[-2] = (byte)uVar35;
                                uVar34 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                               uVar34) * uVar24) / 0xff + uVar34;
                                if (bVar39) {
                                  uVar35 = (uint)local_ac[-1];
                                  if ((int)uVar35 <= (int)uVar34) goto LAB_5de8b373;
                                }
                                else {
                                  uVar35 = (uint)local_ac[-1];
                                  if ((int)uVar34 <= (int)uVar35) {
LAB_5de8b373:
                                    uVar34 = uVar35;
                                  }
                                }
                                uVar35 = CONCAT11(bVar14,bVar13) & 0xff;
                                local_ac[-1] = (byte)uVar34;
                                uVar35 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar35) * uVar24)
                                         / 0xff + uVar35;
                                if (bVar40) {
                                  uVar34 = (uint)*local_ac;
                                  if ((int)uVar34 <= (int)uVar35) goto LAB_5de8b3c0;
                                }
                                else {
                                  uVar34 = (uint)*local_ac;
                                  if ((int)uVar35 <= (int)uVar34) {
LAB_5de8b3c0:
                                    uVar35 = uVar34;
                                  }
                                }
                                *local_ac = (byte)uVar35;
                                uVar24 = (int)(((uint)bVar10 - (uint)bVar14) * uVar24) / 0xff +
                                         (uint)bVar14;
                                if (bVar41) {
                                  uVar34 = (uint)local_ac[1];
                                  if ((int)uVar34 <= (int)uVar24) goto LAB_5de8b40e;
                                }
                                else {
                                  uVar34 = (uint)local_ac[1];
                                  if ((int)uVar24 <= (int)uVar34) {
LAB_5de8b40e:
                                    uVar24 = uVar34;
                                  }
                                }
                                local_ac[1] = (byte)uVar24;
                              }
                              local_124 = local_124 + 1;
                              iVar19 = iVar19 + 1;
                              local_ac = local_ac + 4;
                            } while (iVar19 < iVar21);
                          }
                          if ((iVar19 < param_2[1]) && (-1 < iVar19)) {
                            if (pbVar29[local_124] < 0x40) {
                              uVar24 = (uint)pbVar29[local_124];
                            }
                            else {
                              uVar24 = 0x40;
                            }
                            if (pbVar28[local_124] < 0x40) {
                              uVar34 = (uint)pbVar28[local_124];
                            }
                            else {
                              uVar34 = 0x40;
                            }
                            uVar24 = (uVar24 * uVar27 * 4) / 0xff + (uVar34 * uVar16 * 4) / 0xff;
                            if ((int)uVar24 < 0) {
                              uVar24 = 0;
                            }
                            else if (0xff < uVar24) {
                              uVar24 = 0xff;
                            }
                            uVar34 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                            uVar34 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) - uVar34)
                                          * uVar24) / 0xff + uVar34;
                            if (bVar38) {
                              uVar35 = (uint)*(byte *)((int)local_c8 + iVar19 * 4 + iVar26);
                              if ((int)uVar35 <= (int)uVar34) goto LAB_5de8b539;
                            }
                            else {
                              uVar35 = (uint)*(byte *)((int)local_c8 + iVar19 * 4 + iVar26);
                              if ((int)uVar34 <= (int)uVar35) {
LAB_5de8b539:
                                uVar34 = uVar35;
                              }
                            }
                            uVar35 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                            *(char *)((int)local_c8 + iVar19 * 4 + iVar26) = (char)uVar34;
                            uVar35 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) - uVar35
                                           ) * uVar24) / 0xff + uVar35;
                            if (bVar39) {
                              uVar34 = (uint)*(byte *)((int)local_c8 + iVar19 * 4 + iVar26 + 1);
                              if ((int)uVar34 <= (int)uVar35) goto LAB_5de8b58a;
                            }
                            else {
                              uVar34 = (uint)*(byte *)((int)local_c8 + iVar19 * 4 + iVar26 + 1);
                              if ((int)uVar35 <= (int)uVar34) {
LAB_5de8b58a:
                                uVar35 = uVar34;
                              }
                            }
                            uVar34 = CONCAT11(bVar14,bVar13) & 0xff;
                            *(char *)((int)local_c8 + iVar19 * 4 + iVar26 + 1) = (char)uVar35;
                            uVar34 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar34) * uVar24) /
                                     0xff + uVar34;
                            if (bVar40) {
                              uVar35 = (uint)*(byte *)((int)local_c8 + iVar19 * 4 + iVar26 + 2);
                              if ((int)uVar35 <= (int)uVar34) goto LAB_5de8b5dc;
                            }
                            else {
                              uVar35 = (uint)*(byte *)((int)local_c8 + iVar19 * 4 + iVar26 + 2);
                              if ((int)uVar34 <= (int)uVar35) {
LAB_5de8b5dc:
                                uVar34 = uVar35;
                              }
                            }
                            *(char *)((int)local_c8 + iVar19 * 4 + iVar26 + 2) = (char)uVar34;
                            uVar24 = (int)(((uint)bVar10 - (uint)bVar14) * uVar24) / 0xff +
                                     (uint)bVar14;
                            pbVar29 = (byte *)((int)local_c8 + iVar19 * 4 + iVar26 + 3);
                            if (bVar41) {
                              uVar34 = (uint)*pbVar29;
                              if ((int)uVar24 < (int)uVar34) goto LAB_5de8b62e;
                            }
                            else {
                              uVar34 = (uint)*pbVar29;
                              if ((int)(uint)*pbVar29 < (int)uVar24) {
LAB_5de8b62e:
                                uVar34 = uVar24;
                              }
                            }
                            *pbVar29 = (byte)uVar34;
                          }
                        }
                        local_e4 = local_e4 + 1;
                      }
                      if ((iVar22 < param_2[2]) && (-1 < iVar22)) {
                        pbVar29 = local_108 + local_e4 * local_c4;
                        iVar22 = iVar22 * local_e0;
                        local_124 = 0;
                        if ((iVar30 < param_2[1]) && (-1 < iVar30)) {
                          if (*pbVar29 < 0x40) {
                            uVar16 = (uint)*pbVar29;
                          }
                          else {
                            uVar16 = 0x40;
                          }
                          uVar16 = (uVar16 * local_a4 * 4) / 0xff;
                          if ((int)uVar16 < 0) {
                            uVar16 = 0;
                          }
                          else if (0xff < uVar16) {
                            uVar16 = 0xff;
                          }
                          uVar24 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                          uVar24 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) - uVar24) *
                                        uVar16) / 0xff + uVar24;
                          if (bVar38) {
                            uVar34 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar22);
                            if ((int)uVar34 <= (int)uVar24) goto LAB_5de8b74e;
                          }
                          else {
                            uVar34 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar22);
                            if ((int)uVar24 <= (int)uVar34) {
LAB_5de8b74e:
                              uVar24 = uVar34;
                            }
                          }
                          uVar34 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                          *(char *)((int)local_c8 + iVar30 * 4 + iVar22) = (char)uVar24;
                          uVar34 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) - uVar34)
                                        * uVar16) / 0xff + uVar34;
                          if (bVar39) {
                            uVar24 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar22 + 1);
                            if ((int)uVar24 <= (int)uVar34) goto LAB_5de8b7a0;
                          }
                          else {
                            uVar24 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar22 + 1);
                            if ((int)uVar34 <= (int)uVar24) {
LAB_5de8b7a0:
                              uVar34 = uVar24;
                            }
                          }
                          uVar24 = CONCAT11(bVar14,bVar13) & 0xff;
                          *(char *)((int)local_c8 + iVar30 * 4 + iVar22 + 1) = (char)uVar34;
                          uVar24 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar24) * uVar16) / 0xff
                                   + uVar24;
                          if (bVar40) {
                            uVar34 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar22 + 2);
                            if ((int)uVar34 <= (int)uVar24) goto LAB_5de8b7f2;
                          }
                          else {
                            uVar34 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar22 + 2);
                            if ((int)uVar24 <= (int)uVar34) {
LAB_5de8b7f2:
                              uVar24 = uVar34;
                            }
                          }
                          *(char *)((int)local_c8 + iVar30 * 4 + iVar22 + 2) = (char)uVar24;
                          uVar16 = (int)(((uint)bVar10 - (uint)bVar14) * uVar16) / 0xff +
                                   (uint)bVar14;
                          pbVar28 = (byte *)((int)local_c8 + iVar30 * 4 + iVar22 + 3);
                          if (bVar41) {
                            uVar24 = (uint)*pbVar28;
                            if ((int)uVar16 < (int)uVar24) goto LAB_5de8b844;
                          }
                          else {
                            uVar24 = (uint)*pbVar28;
                            if ((int)(uint)*pbVar28 < (int)uVar16) {
LAB_5de8b844:
                              uVar24 = uVar16;
                            }
                          }
                          *pbVar28 = (byte)uVar24;
                        }
                        iVar30 = iVar30 + 1;
                        if (iVar30 < iVar21) {
                          pbVar28 = (byte *)((int)local_c8 + iVar30 * 4 + iVar22 + 2);
                          do {
                            if ((iVar30 < param_2[1]) && (-1 < iVar30)) {
                              if (pbVar29[local_124] < 0x40) {
                                uVar16 = (uint)pbVar29[local_124];
                              }
                              else {
                                uVar16 = 0x40;
                              }
                              if (pbVar29[local_124 + 1] < 0x40) {
                                uVar24 = (uint)pbVar29[local_124 + 1];
                              }
                              else {
                                uVar24 = 0x40;
                              }
                              uVar16 = (uVar27 * uVar16 * 4) / 0xff + (local_a4 * uVar24 * 4) / 0xff
                              ;
                              if ((int)uVar16 < 0) {
                                uVar16 = 0;
                              }
                              else if (0xff < uVar16) {
                                uVar16 = 0xff;
                              }
                              uVar24 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                              uVar24 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) -
                                             uVar24) * uVar16) / 0xff + uVar24;
                              if (bVar38) {
                                uVar34 = (uint)pbVar28[-2];
                                if ((int)uVar24 < (int)uVar34) goto LAB_5de8b946;
                              }
                              else {
                                uVar34 = (uint)pbVar28[-2];
                                if ((int)(uint)pbVar28[-2] < (int)uVar24) {
LAB_5de8b946:
                                  uVar34 = uVar24;
                                }
                              }
                              uVar24 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                              pbVar28[-2] = (byte)uVar34;
                              uVar24 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) -
                                             uVar24) * uVar16) / 0xff + uVar24;
                              if (bVar39) {
                                uVar34 = (uint)pbVar28[-1];
                                if ((int)uVar34 <= (int)uVar24) goto LAB_5de8b995;
                              }
                              else {
                                uVar34 = (uint)pbVar28[-1];
                                if ((int)uVar24 <= (int)uVar34) {
LAB_5de8b995:
                                  uVar24 = uVar34;
                                }
                              }
                              uVar34 = CONCAT11(bVar14,bVar13) & 0xff;
                              pbVar28[-1] = (byte)uVar24;
                              uVar34 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar34) * uVar16) /
                                       0xff + uVar34;
                              if (bVar40) {
                                uVar24 = (uint)*pbVar28;
                                if ((int)uVar24 <= (int)uVar34) goto LAB_5de8b9e2;
                              }
                              else {
                                uVar24 = (uint)*pbVar28;
                                if ((int)uVar34 <= (int)uVar24) {
LAB_5de8b9e2:
                                  uVar34 = uVar24;
                                }
                              }
                              *pbVar28 = (byte)uVar34;
                              uVar16 = (int)(((uint)bVar10 - (uint)bVar14) * uVar16) / 0xff +
                                       (uint)bVar14;
                              if (bVar41) {
                                uVar24 = (uint)pbVar28[1];
                                if ((int)uVar24 <= (int)uVar16) goto LAB_5de8ba30;
                              }
                              else {
                                uVar24 = (uint)pbVar28[1];
                                if ((int)uVar16 <= (int)uVar24) {
LAB_5de8ba30:
                                  uVar16 = uVar24;
                                }
                              }
                              pbVar28[1] = (byte)uVar16;
                            }
                            local_124 = local_124 + 1;
                            iVar30 = iVar30 + 1;
                            pbVar28 = pbVar28 + 4;
                          } while (iVar30 < iVar21);
                        }
                        if ((iVar30 < param_2[1]) && (-1 < iVar30)) {
                          if (pbVar29[local_124] < 0x40) {
                            uVar16 = (uint)pbVar29[local_124];
                          }
                          else {
                            uVar16 = 0x40;
                          }
                          uVar16 = (uVar27 * uVar16 * 4) / 0xff;
                          if ((int)uVar16 < 0) {
                            uVar16 = 0;
                          }
                          else if (0xff < uVar16) {
                            uVar16 = 0xff;
                          }
                          uVar27 = CONCAT12(bVar13,CONCAT11(bVar12,bVar11)) & 0xff;
                          uVar27 = (int)(((CONCAT12(bVar9,CONCAT11(bVar8,bVar7)) & 0xff) - uVar27) *
                                        uVar16) / 0xff + uVar27;
                          if (bVar38) {
                            uVar24 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar22);
                            if ((int)uVar24 <= (int)uVar27) goto LAB_5de8bb07;
                          }
                          else {
                            uVar24 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar22);
                            if ((int)uVar27 <= (int)uVar24) {
LAB_5de8bb07:
                              uVar27 = uVar24;
                            }
                          }
                          uVar24 = CONCAT12(bVar14,CONCAT11(bVar13,bVar12)) & 0xff;
                          *(char *)((int)local_c8 + iVar30 * 4 + iVar22) = (char)uVar27;
                          uVar24 = (int)(((CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) - uVar24)
                                        * uVar16) / 0xff + uVar24;
                          if (bVar39) {
                            uVar27 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar22 + 1);
                            if ((int)uVar27 <= (int)uVar24) goto LAB_5de8bb58;
                          }
                          else {
                            uVar27 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar22 + 1);
                            if ((int)uVar24 <= (int)uVar27) {
LAB_5de8bb58:
                              uVar24 = uVar27;
                            }
                          }
                          uVar27 = CONCAT11(bVar14,bVar13) & 0xff;
                          *(char *)((int)local_c8 + iVar30 * 4 + iVar22 + 1) = (char)uVar24;
                          uVar27 = (int)(((CONCAT11(bVar10,bVar9) & 0xff) - uVar27) * uVar16) / 0xff
                                   + uVar27;
                          if (bVar40) {
                            uVar24 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar22 + 2);
                            if ((int)uVar24 <= (int)uVar27) goto LAB_5de8bbaa;
                          }
                          else {
                            uVar24 = (uint)*(byte *)((int)local_c8 + iVar30 * 4 + iVar22 + 2);
                            if ((int)uVar27 <= (int)uVar24) {
LAB_5de8bbaa:
                              uVar27 = uVar24;
                            }
                          }
                          *(char *)((int)local_c8 + iVar30 * 4 + iVar22 + 2) = (char)uVar27;
                          uVar16 = (int)(((uint)bVar10 - (uint)bVar14) * uVar16) / 0xff +
                                   (uint)bVar14;
                          pbVar29 = (byte *)((int)local_c8 + iVar30 * 4 + iVar22 + 3);
                          if (bVar41) {
                            uVar27 = (uint)*pbVar29;
                            if ((int)uVar16 < (int)(uint)*pbVar29) {
                              uVar27 = uVar16;
                            }
                          }
                          else {
                            uVar27 = (uint)*pbVar29;
                            if ((int)(uint)*pbVar29 < (int)uVar16) {
                              *pbVar29 = (byte)uVar16;
                              goto LAB_5de8cb51;
                            }
                          }
                          *pbVar29 = (byte)uVar27;
                        }
                      }
                    }
                  }
                }
LAB_5de8cb51:
                fVar4 = (float)(int)local_c0.gmCellIncX * in_stack_00000040;
                fVar5 = fVar4;
                if ((_DAT_5df205c8 <= in_stack_00000040) &&
                   (fVar5 = fVar3, in_stack_00000040 <= _DAT_5df23598)) {
                  fVar5 = (in_stack_00000040 - _DAT_5df205c8) * (fVar3 - fVar4) + fVar4;
                }
                local_d8 = fVar5 + local_d8;
                hdc_00 = local_4c;
                goto LAB_5de8cbcc;
              }
            }
            iVar30 = (int)local_94.gmCellIncX;
            p_Var33 = &local_94;
            p_Var37 = &local_c0;
            for (iVar26 = 5; iVar26 != 0; iVar26 = iVar26 + -1) {
              p_Var37->gmBlackBoxX = p_Var33->gmBlackBoxX;
              p_Var33 = (_GLYPHMETRICS *)&p_Var33->gmBlackBoxY;
              p_Var37 = (_GLYPHMETRICS *)&p_Var37->gmBlackBoxY;
            }
            fVar4 = (float)iVar30 * in_stack_00000040;
            fVar5 = fVar4;
            if ((_DAT_5df205c8 <= in_stack_00000040) &&
               (fVar5 = fVar3, in_stack_00000040 <= _DAT_5df23598)) {
              fVar5 = (in_stack_00000040 - _DAT_5df205c8) * (fVar3 - fVar4) + fVar4;
            }
            local_d8 = fVar5 + local_d8;
            local_e8 = (float)(int)local_94.gmCellIncY * in_stack_00000044 + local_e8;
          }
        }
      }
LAB_5de8cbcc:
      local_ec = (short *)((int)local_ec + 1);
    } while ((int)local_ec < param_4);
  }
  if (local_108 != (byte *)0x0) {
    pvVar17 = GlobalHandle(local_108);
    GlobalUnlock(pvVar17);
    pvVar17 = GlobalHandle(local_108);
    GlobalFree(pvVar17);
  }
  ho = SelectObject(hdc_00,local_50);
  DeleteObject(ho);
  DeleteDC(hdc_00);
  return 0;
}


