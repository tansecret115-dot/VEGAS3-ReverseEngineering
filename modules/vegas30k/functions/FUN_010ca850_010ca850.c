/* Module: vegas30k.dll
   Function: FUN_010ca850
   Address: 010ca850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010ca850(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint unaff_EBP;
  int iVar11;
  uint uVar12;
  int unaff_ESI;
  uint uVar13;
  int local_2c4;
  int local_2c0;
  int local_2b8;
  uint local_2b0;
  int local_298;
  undefined4 local_290;
  undefined2 local_28c;
  undefined2 local_28a;
  undefined2 local_288;
  undefined2 local_286;
  undefined4 local_284;
  undefined2 local_280;
  undefined2 local_27e;
  undefined1 local_27c;
  undefined1 local_27b;
  undefined1 local_27a;
  undefined1 local_279;
  undefined2 local_278;
  undefined1 local_276;
  undefined1 local_275;
  int local_274;
  uint local_270;
  int local_26c;
  undefined1 local_268 [4];
  int local_264;
  undefined1 local_260 [8];
  code *pcStack_258;
  code *pcStack_240;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1a0 [2];
  int local_198;
  uint local_194 [7];
  code *pcStack_178;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int local_120;
  int local_108;
  int local_104;
  int local_100;
  short sStack_f8;
  undefined1 uStack_ee;
  undefined1 local_d8 [4];
  code *pcStack_d4;
  code *local_cc;
  code *local_c4;
  code *local_b4;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int local_7c;
  uint local_78;
  int local_64;
  uint local_60;
  uint local_5c;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_1c [7];
  
  iVar1 = param_1[0x1b];
  local_2b8 = param_1[0x13];
  local_2c4 = param_1[7];
  iVar2 = param_1[0xf];
  uVar5 = _SfGetPixelType_4(param_1[0x11]);
  uVar6 = _SfGetPixelType_4(param_1[5]);
  iVar7 = _SfGetPixelBitsPerChannel_8(uVar5,local_268);
  _SfGetPixelBitsPerChannel_8(uVar6,local_268);
  local_290 = **(undefined4 **)param_1[0x23];
  local_284 = ftol();
  local_278 = ftol();
  local_280 = ftol();
  local_276 = ftol();
  local_27e = ftol();
  local_275 = ftol();
  local_288 = ftol();
  local_28a = ftol();
  local_28c = ftol();
  local_286 = ftol();
  local_27a = ftol();
  local_27b = ftol();
  local_27c = ftol();
  local_279 = ftol();
  _SfXCHGGetFunctionPointers_20(uVar6,uVar5,param_1[0x22],local_d8,&local_290);
  local_4c = param_1[0x1c];
  local_48 = param_1[0x10];
  _SfXCHGGetFunctionPointers_20(uVar5,uVar6,param_1[0x22],local_260,&local_290);
  local_1d4 = param_1[0x10];
  local_1cc = param_1[0x1d];
  local_1c[0] = 3;
  local_1d0 = local_1d4;
  _SfXCHGGetFunctionPointers_20(uVar5,uVar6,param_1[0x22],local_194,local_1c);
  local_104 = param_1[0x1c];
  local_108 = param_1[0x10];
  local_100 = param_1[0x1d];
  local_120 = iVar2;
  if (*param_1 == 0) {
    iVar7 = param_1[0x1a];
    iVar3 = param_1[0x19];
    local_2c0 = 0;
    iVar11 = iVar3;
    if (0 < iVar7) {
      do {
        local_200 = param_1[0x14];
        local_7c = local_2b8;
        local_1f8 = param_1[8];
        local_78 = 0;
        local_204 = local_2c4;
        local_1fc = local_2c4;
        if (local_50 != 0) {
          iVar11 = 0;
          if (((param_1[0x1f] + local_2c0 < local_50) && ((local_194[0] & 0x2000) != 0)) &&
             (iVar8 = (local_50 - param_1[0x1f]) - local_2c0, -1 < iVar8)) {
            iVar11 = iVar8;
          }
          if (((iVar7 - local_50 <= local_2c0 - param_1[0x21]) && ((local_194[0] & 0x1000) != 0)) &&
             (iVar8 = ((local_2c0 - param_1[0x21]) - iVar7) + 1 + local_50, iVar11 < iVar8)) {
            iVar11 = iVar8;
          }
        }
        iVar8 = 0;
        if (0 < iVar3) {
          do {
            (*local_cc)(local_d8);
            (*pcStack_258)(&local_264);
            uStack_220 = uStack_a0;
            uStack_224 = uStack_a4;
            uStack_158 = uStack_22c;
            uStack_154 = uStack_228;
            (*pcStack_240)(local_268);
            if (local_50 != 0) {
              iVar10 = iVar11;
              if (((param_1[0x1e] + iVar8 < local_50) && ((unaff_EBP & 0x4000) != 0)) &&
                 (iVar9 = (local_50 - param_1[0x1e]) - iVar8, iVar11 < iVar9)) {
                iVar10 = iVar9;
              }
              if (((unaff_ESI - local_50 <= iVar8 - param_1[0x20]) && ((unaff_EBP & 0x8000) != 0))
                 && (iVar9 = ((iVar8 - param_1[0x20]) - unaff_ESI) + 1 + local_50, iVar10 < iVar9))
              {
                iVar10 = iVar9;
              }
              if (iVar10 != 0) {
                uStack_164 = uStack_230;
                uStack_160 = uStack_22c;
                sStack_f8 = (short)local_2c0 * (short)iVar10;
                uStack_ee = (undefined1)
                            (iVar10 * local_2c0 + (iVar10 * local_2c0 >> 0x1f & 0xffU) >> 8);
                (*pcStack_178)(local_1a0);
                uStack_230 = uStack_164;
                uStack_22c = uStack_160;
              }
            }
            (*pcStack_d4)(&local_26c);
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar3);
        }
        local_2b8 = local_2b8 + iVar1;
        local_2c4 = local_2c4 + iVar2;
        local_2c0 = local_2c0 + 1;
      } while (local_2c0 < iVar7);
      return 0;
    }
  }
  else {
    local_264 = param_1[4];
    local_26c = param_1[0xd];
    local_270 = param_1[1];
    iVar3 = param_1[0xe];
    local_1a0[0] = (int)(param_1[0x1f] * local_264 + (param_1[0x1f] * local_264 >> 0x1f & 0x3fffU))
                   >> 0xe;
    local_274 = param_1[3];
    local_198 = (int)(param_1[0x21] * local_264 + (param_1[0x21] * local_264 >> 0x1f & 0x3fffU)) >>
                0xe;
    iVar11 = local_264;
    if (local_264 <= local_274) {
      iVar11 = local_274;
    }
    iVar11 = (int)(iVar11 * local_50 + (iVar11 * local_50 >> 0x1f & 0x3fffU)) >> 0xe;
    if (param_1[0x19] == 1) {
      local_c4 = local_b4;
    }
    local_64 = iVar1;
    if (param_1[0x1a] == 1) {
      local_64 = 0;
    }
    local_2b0 = param_1[2];
    local_2c0 = 1;
    if (0 < iVar3) {
      do {
        local_204 = local_2c4;
        local_1fc = local_2c4;
        iVar8 = (local_2b0 >> 0xe) * iVar1 + local_2b8;
        local_200 = param_1[8];
        if (iVar3 <= local_2c0) {
          local_64 = 0;
        }
        local_5c = local_2b0 & 0x3fff;
        uVar12 = local_270;
        local_1f8 = local_200;
        if (1 < local_26c) {
          local_298 = local_26c + -1;
          do {
            uVar13 = uVar12 >> 0xe;
            local_60 = uVar12 & 0x3fff;
            local_78 = uVar13 * iVar7 & 7;
            local_7c = (uVar13 * iVar7 >> 3) + iVar8;
            (*local_c4)(local_d8);
            (*pcStack_258)(&local_264);
            uStack_220 = uStack_a0;
            uStack_224 = uStack_a4;
            uStack_158 = uStack_22c;
            uStack_154 = uStack_228;
            (*pcStack_240)(local_268);
            if (iVar11 != 0) {
              iVar10 = unaff_ESI;
              if ((((int)(param_1[0x1e] + uVar13) < iVar11) && ((unaff_EBP & 0x4000) != 0)) &&
                 (iVar9 = (iVar11 - param_1[0x1e]) - uVar13, unaff_ESI < iVar9)) {
                iVar10 = iVar9;
              }
              if ((((int)(local_194[0] - iVar11) <= (int)(uVar13 - param_1[0x20])) &&
                  ((unaff_EBP & 0x8000) != 0)) &&
                 (iVar9 = ((uVar13 - param_1[0x20]) - local_194[0]) + 1 + iVar11, iVar10 < iVar9)) {
                iVar10 = iVar9;
              }
              if (iVar10 != 0) {
                uStack_164 = uStack_230;
                uStack_160 = uStack_22c;
                sStack_f8 = (short)local_2c0 * (short)iVar10;
                uStack_ee = (undefined1)
                            (iVar10 * local_2c0 + (iVar10 * local_2c0 >> 0x1f & 0xffU) >> 8);
                (*pcStack_178)(local_1a0);
                uStack_230 = uStack_164;
                uStack_22c = uStack_160;
              }
            }
            (*pcStack_d4)(&local_26c);
            uVar12 = uVar12 + local_274;
            local_298 = local_298 + -1;
          } while (local_298 != 0);
        }
        local_60 = uVar12 & 0x3fff;
        uVar12 = uVar12 >> 0xe;
        local_7c = (uVar12 * iVar7 >> 3) + iVar8;
        local_78 = uVar12 * iVar7 & 7;
        (*local_b4)(local_d8);
        (*pcStack_258)(&local_264);
        uStack_220 = uStack_a0;
        uStack_224 = uStack_a4;
        uStack_158 = uStack_22c;
        uStack_154 = uStack_228;
        (*pcStack_240)(local_268);
        if (iVar11 != 0) {
          iVar8 = unaff_ESI;
          if ((((int)(param_1[0x1e] + uVar12) < iVar11) && ((unaff_EBP & 0x4000) != 0)) &&
             (iVar10 = (iVar11 - param_1[0x1e]) - uVar12, unaff_ESI < iVar10)) {
            iVar8 = iVar10;
          }
          if ((((int)(local_194[0] - iVar11) <= (int)(uVar12 - param_1[0x20])) &&
              ((unaff_EBP & 0x8000) != 0)) &&
             (iVar10 = ((uVar12 - param_1[0x20]) - local_194[0]) + 1 + iVar11, iVar8 < iVar10)) {
            iVar8 = iVar10;
          }
          if (iVar8 != 0) {
            uStack_164 = uStack_230;
            uStack_160 = uStack_22c;
            sStack_f8 = (short)local_2c0 * (short)iVar8;
            uStack_ee = (undefined1)(iVar8 * local_2c0 + (iVar8 * local_2c0 >> 0x1f & 0xffU) >> 8);
            (*pcStack_178)(local_1a0);
            uStack_230 = uStack_164;
            uStack_22c = uStack_160;
          }
        }
        (*pcStack_d4)(&local_26c);
        local_2c4 = local_2c4 + iVar2;
        local_2b0 = local_2b0 + local_264;
        bVar4 = local_2c0 < iVar3;
        local_2c0 = local_2c0 + 1;
      } while (bVar4);
    }
  }
  return 0;
}


