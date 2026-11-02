/* Module: sftrans1.dll
   Function: FUN_004b0350
   Address: 004b0350
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004b1a71) */
/* WARNING: Removing unreachable block (ram,0x004b1a75) */
/* WARNING: Removing unreachable block (ram,0x004b1a81) */
/* WARNING: Removing unreachable block (ram,0x004b1a9d) */
/* WARNING: Removing unreachable block (ram,0x004b1b83) */
/* WARNING: Removing unreachable block (ram,0x004b1b8b) */
/* WARNING: Removing unreachable block (ram,0x004b1a96) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004b0350(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint3 uVar4;
  double dVar5;
  double dVar6;
  byte *pbVar7;
  LPCVOID pvVar8;
  char cVar9;
  char cVar10;
  LPVOID pvVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  HGLOBAL pvVar15;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  LPVOID pvVar23;
  byte *pbVar24;
  int unaff_ESI;
  uint uVar25;
  LPCVOID *ppvVar26;
  uint uVar27;
  float10 fVar28;
  float10 extraout_ST0;
  float10 fVar29;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 extraout_ST1_02;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  byte bStack_331;
  byte bStack_330;
  byte bStack_32f;
  byte bStack_32e;
  byte bStack_32d;
  undefined1 uStack_32c;
  undefined1 uStack_32b;
  undefined1 uStack_32a;
  undefined1 uStack_329;
  byte bStack_328;
  byte bStack_327;
  byte bStack_326;
  byte bStack_325;
  LPCVOID pvStack_314;
  undefined4 *puStack_310;
  byte *pbStack_304;
  byte **ppbStack_2fc;
  uint uStack_2f8;
  int iStack_2f4;
  int iStack_2f0;
  byte abStack_2dc [4];
  undefined *puStack_2d8;
  int iStack_2d4;
  int *piStack_2d0;
  uint uStack_2cc;
  undefined *puStack_2c8;
  undefined4 *puStack_2c4;
  int iStack_2c0;
  LPVOID pvStack_2bc;
  undefined4 *puStack_2b8;
  undefined8 uStack_2b4;
  int local_2ac;
  byte *pbStack_2a8;
  byte *pbStack_2a4;
  byte *local_2a0;
  byte *pbStack_29c;
  int local_294;
  undefined4 uStack_28c;
  undefined4 *puStack_288;
  int iStack_284;
  uint uStack_280;
  LPVOID pvStack_27c;
  int iStack_278;
  undefined8 uStack_274;
  int *piStack_268;
  undefined8 uStack_264;
  int iStack_258;
  double dStack_254;
  double dStack_24c;
  double dStack_244;
  undefined4 uStack_238;
  double dStack_234;
  int iStack_228;
  byte *pbStack_224;
  int iStack_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int iStack_210;
  double dStack_20c;
  int *piStack_204;
  int *local_1fc;
  undefined8 local_1f0;
  int iStack_1e8;
  int iStack_1e4;
  undefined4 auStack_1e0 [2];
  undefined4 uStack_1d8;
  undefined4 auStack_1d0 [7];
  byte *pbStack_1b4;
  int iStack_1b0;
  byte *pbStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  byte *pbStack_1a0;
  undefined4 uStack_19c;
  tagRECT tStack_198;
  undefined4 uStack_188;
  int *piStack_174;
  int *piStack_16c;
  int *piStack_148;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  LPCVOID pvStack_124;
  int iStack_120;
  LPCVOID pvStack_11c;
  int iStack_118;
  uint uStack_100;
  LPVOID pvStack_f8;
  undefined8 uStack_f4;
  double dStack_ec;
  double dStack_e4;
  double dStack_dc;
  double dStack_d4;
  double dStack_cc;
  double dStack_c4;
  undefined1 auStack_bc [8];
  double dStack_b4;
  undefined1 auStack_a4 [160];
  
  local_1fc = (int *)(uint)(_DAT_00557838 < *(double *)(param_1 + 0x138));
  local_2a0 = (byte *)(param_2 + 0x50);
  local_2ac = *(int *)(param_2 + 0x5c) - *(int *)(param_2 + 0x58);
  iVar20 = *(int *)(param_2 + 100) - *(int *)(param_2 + 0x60);
  uStack_2b4 = (double)CONCAT44(iVar20,(undefined4)uStack_2b4);
  local_294 = local_2ac;
  if (iVar20 <= local_2ac) {
    local_294 = iVar20;
  }
  local_1f0 = (double)local_294 / _DAT_005662f0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x234));
  if (*(int *)(param_1 + 0x148) == 0) {
    iStack_2f4 = 0x4b0419;
    (**(code **)(*(int *)(param_1 + 0xf0) + 0x24))();
  }
  else {
    iStack_2f4 = param_1 + 0x1c0;
    (**(code **)(*(int *)(param_1 + 0xf0) + 0x28))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x234));
  local_294 = 0xff;
  piVar22 = *(int **)(*(int *)(param_1 + 0xa0) + 4);
  pbStack_2a4 = (byte *)(param_2 + 8);
  uStack_12c = 0;
  pvStack_124 = (LPCVOID)0x0;
  ppvVar26 = &pvStack_11c;
  for (iVar20 = 8; iVar20 != 0; iVar20 = iVar20 + -1) {
    *ppvVar26 = (LPCVOID)0x0;
    ppvVar26 = ppvVar26 + 1;
  }
  dStack_dc = 0.0;
  dStack_d4 = (double)((ulonglong)dStack_d4 & 0xffffffff00000000);
  dStack_244 = (double)CONCAT44(dStack_244._4_4_,piVar22);
  iVar20 = (**(code **)(*piVar22 + 0x28))();
  if (-1 < iVar20) {
    if (iStack_2c0 == 0) {
      (**(code **)(*piVar22 + 0x1c))();
      FUN_0046eef0();
    }
    else {
      FUN_0045df30();
    }
    bStack_328 = 0xee;
    bStack_327 = 4;
    bStack_326 = 0x4b;
    bStack_325 = 0;
    iVar20 = (**(code **)(*piVar22 + 0x18))();
    if (-1 < iVar20) {
      if (puStack_2c8 == (undefined *)0x60001) {
        (**(code **)(*piStack_148 + 0x10))();
        pvStack_f8 = pvStack_27c;
        uStack_100 = uStack_280;
      }
      else {
        uStack_f4 = (double)CONCAT44((iStack_134 - iStack_138) * 4,(int)uStack_f4);
        iVar20 = FUN_0046eee0();
        iVar16 = FUN_0046eed0();
        pvVar15 = GlobalAlloc(0x40,iVar20 * iVar16 * 4);
        pvStack_27c = GlobalLock(pvVar15);
        if (pvStack_27c == (LPVOID)0x0) {
          pvStack_27c = (LPVOID)0x0;
        }
        else {
          bStack_328 = (byte)pvStack_27c;
          bStack_327 = (byte)((uint)pvStack_27c >> 8);
          bStack_326 = (byte)((uint)pvStack_27c >> 0x10);
          bStack_325 = (byte)((uint)pvStack_27c >> 0x18);
          uStack_32c = 0x9a;
          uStack_32b = 5;
          uStack_32a = 0x4b;
          uStack_329 = 0;
          FUN_004029a0();
        }
        if (pvStack_27c == (LPVOID)0x0) {
          iVar20 = -0x7ff8fff2;
          pvStack_f8 = (LPCVOID)0x0;
          goto LAB_004b06d2;
        }
        uStack_f4 = (double)CONCAT44(uStack_f4._4_4_,1);
        iStack_278 = 1;
        pvStack_f8 = pvStack_27c;
        FUN_0046eff0();
        bStack_328 = 5;
        bStack_327 = 6;
        bStack_326 = 0x4b;
        bStack_325 = 0;
        OffsetRect((LPRECT)&uStack_274,-iStack_138,-iStack_130);
        uStack_264 = (double)((ulonglong)uStack_264._4_4_ << 0x20);
        (**(code **)(*piStack_148 + 0x2c))();
        piVar22 = piStack_268;
      }
      bStack_328 = (byte)piVar22;
      bStack_327 = (byte)((uint)piVar22 >> 8);
      bStack_326 = (byte)((uint)piVar22 >> 0x10);
      bStack_325 = (byte)((uint)piVar22 >> 0x18);
      uStack_32c = 0x3a;
      uStack_32b = 6;
      uStack_32a = 0x4b;
      uStack_329 = 0;
      FUN_0046ee70();
      piVar22 = *(int **)(param_1 + 0xa8);
      auStack_1e0[0] = 0;
      uStack_1d8 = 0;
      puVar13 = auStack_1d0;
      for (iVar20 = 8; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      tStack_198.right = 0;
      bStack_328 = (byte)auStack_1e0;
      bStack_327 = (byte)((uint)auStack_1e0 >> 8);
      bStack_326 = (byte)((uint)auStack_1e0 >> 0x10);
      bStack_325 = (byte)((uint)auStack_1e0 >> 0x18);
      uStack_32c = 0;
      uStack_32b = 0x48;
      uStack_32a = 0x55;
      uStack_329 = 0;
      bStack_330 = 1;
      bStack_32f = 0;
      bStack_32e = 0;
      bStack_32d = 0;
      tStack_198.bottom = 0;
      uStack_188 = 0;
      piStack_2d0 = piVar22;
      iVar20 = (**(code **)(*piVar22 + 0x28))(piVar22,puStack_2d8);
      if (-1 < iVar20) {
        if (iStack_2f4 == 0) {
          (**(code **)(*piVar22 + 0x1c))(piVar22,auStack_a4);
          FUN_0046eef0(auStack_a4);
        }
        else {
          FUN_0045df30(iStack_2f4);
        }
        iVar20 = (**(code **)(*piVar22 + 0x18))(piVar22,auStack_bc,&stack0xfffffd1c);
        if (-1 < iVar20) {
          if (unaff_ESI == 0x60001) {
            (**(code **)(*local_1fc + 0x10))(local_1fc,&local_2a0);
            pbStack_1ac = local_2a0;
            pbStack_1b4 = pbStack_2a4;
            FUN_0046ee70(piVar22,&tStack_198.bottom);
          }
          else {
            iStack_1a4 = (iStack_1e8 - local_1f0._4_4_) * 4;
            iVar20 = FUN_0046eee0();
            iVar16 = FUN_0046eed0();
            pvVar15 = GlobalAlloc(0x40,iVar20 * iVar16 * 4);
            pbStack_1ac = GlobalLock(pvVar15);
            if (pbStack_1ac == (byte *)0x0) {
              pbStack_1ac = (byte *)0x0;
            }
            else {
              FUN_004029a0(pbStack_1ac,4,iVar20 * iVar16,&LAB_0046f010);
            }
            if (pbStack_1ac == (byte *)0x0) {
              iVar20 = -0x7ff8fff2;
              pbStack_1ac = (LPCVOID)0x0;
              goto LAB_004b0809;
            }
            iStack_1a8 = 1;
            uStack_19c = 1;
            pbStack_1a0 = pbStack_1ac;
            FUN_0046eff0(&tStack_198);
            OffsetRect(&tStack_198,-local_1f0._4_4_,-iStack_1e4);
            uStack_188 = 0;
            (**(code **)(*local_1fc + 0x2c))(local_1fc,&pbStack_1a0);
            FUN_0046ee70(iStack_2f4,&tStack_198.bottom);
          }
          pvVar8 = pvStack_124;
          pbVar7 = pbStack_1b4;
          dStack_254 = 5588976.0;
          iStack_284 = *(int *)(param_1 + 0x2d8);
          puStack_310 = (undefined4 *)ftol();
          uStack_264 = 0.0;
          pvVar11 = (LPVOID)ftol();
          pvVar23 = pvVar11;
          fVar28 = (float10)_CIpow();
          uStack_2b4 = (double)fVar28;
          if ((iStack_258 == 0) && (_DAT_00561890 < uStack_2b4)) {
            uStack_2b4 = uStack_2b4 * _DAT_00557838 + _DAT_005610d0;
          }
          _CIpow();
          iStack_228 = ftol();
          dStack_254 = dStack_254 * *(double *)(param_1 + 0x2e0);
          if (dStack_254 < _DAT_00555908) {
            dStack_254 = _DAT_00555908;
          }
          dStack_d4 = _DAT_00555908 / dStack_254;
          uStack_264 = uStack_264 * *(double *)(param_1 + 0x2e8);
          if (uStack_264 < _DAT_00555908) {
            uStack_264 = _DAT_00555908;
          }
          dStack_cc = _DAT_00555908 / uStack_264;
          uStack_264 = _DAT_00555908 - *(double *)(param_1 + 0x2f0);
          if (_DAT_00555908 == uStack_264) {
            dStack_254 = 0.0;
          }
          else {
            dStack_254 = _DAT_00555908 / (_DAT_00555908 - uStack_264);
          }
          iStack_214 = ftol();
          iStack_21c = ftol();
          ftol();
          uStack_238 = ftol();
          uStack_28c = ftol();
          ftol();
          if (puStack_310 == &DAT_005547f0) {
            puStack_310 = (undefined4 *)&UNK_005547ef;
          }
          if (pvVar11 == (LPVOID)0x0) {
            pvVar23 = (LPVOID)0xffffffff;
          }
          ppbStack_2fc = &pbStack_2a8;
          bStack_331 = 0;
          iStack_2f0 = 0;
          do {
            pvStack_314 = pvVar8;
            if ((((bStack_331 != 1) && (bStack_331 != 3)) ||
                (puStack_310 != (undefined4 *)&UNK_005547ef)) &&
               (((bStack_331 != 2 && (bStack_331 != 3)) || (pvVar23 != (LPVOID)0xffffffff)))) {
              uVar18 = (int)pbStack_1ac >> 0x1f;
              uVar19 = (int)pvStack_11c >> 0x1f;
              pbVar24 = pbVar7;
              switch(iStack_2f0) {
              case 0:
                puStack_2b8 = puStack_310;
                puStack_2c8 = (undefined *)((int)puStack_310 + 1);
                iStack_278 = (int)pvVar23 + 1;
                piStack_2d0 = (int *)0xffffffff;
                iStack_2c0 = -1;
                pvStack_2bc = pvVar23;
                break;
              case 1:
                piStack_2d0 = (int *)0x1;
                iStack_2c0 = -1;
                puStack_2b8 = (undefined4 *)((int)puStack_310 + 1);
                iStack_278 = (int)pvVar23 + 1;
                puStack_2c8 = &UNK_005547ef + -(int)puStack_310;
                pvStack_2bc = pvVar23;
                break;
              case 2:
                piStack_2d0 = (int *)0xffffffff;
                iStack_278 = -1 - (int)pvVar23;
                iStack_2c0 = 1;
                puStack_2c8 = (undefined *)((int)puStack_310 + 1);
                puStack_2b8 = puStack_310;
                pbVar24 = pbVar7 + ((int)(pbStack_1ac + (uVar18 & 3)) >> 2) * 4;
                pvStack_314 = (LPCVOID)((int)pvVar8 +
                                       ((int)((int)pvStack_11c + (uVar19 & 3)) >> 2) * 4);
                pvStack_2bc = (LPVOID)((int)pvVar23 + 1);
                break;
              case 3:
                puStack_2b8 = (undefined4 *)((int)puStack_310 + 1);
                piStack_2d0 = (int *)0x1;
                iStack_2c0 = 1;
                puStack_2c8 = &UNK_005547ef + -(int)puStack_310;
                iStack_278 = -1 - (int)pvVar23;
                pbVar24 = pbVar7 + ((int)(pbStack_1ac + (uVar18 & 3)) >> 2) * 4;
                pvStack_314 = (LPCVOID)((int)pvVar8 +
                                       ((int)((int)pvStack_11c + (uVar19 & 3)) >> 2) * 4);
                pvStack_2bc = (LPVOID)((int)pvVar23 + 1);
              }
              pbVar24 = pbVar24 + ((int)(pbStack_1ac + (uVar18 & 3)) >> 2) * (int)pvVar23 * 4;
              pvStack_314 = (LPCVOID)((int)pvStack_314 +
                                     ((int)((int)pvStack_11c + (uVar19 & 3)) >> 2) * (int)pvVar23 *
                                     4);
              pbVar24[(int)puStack_310 * 4 + 2] =
                   *(byte *)((int)pvStack_314 + (int)puStack_310 * 4 + 2);
              pbVar24[(int)puStack_310 * 4 + 1] =
                   *(byte *)((int)pvStack_314 + (int)puStack_310 * 4 + 1);
              pbVar24[(int)puStack_310 * 4] = *(byte *)((int)pvStack_314 + (int)puStack_310 * 4);
              iVar20 = (int)puStack_310 * 4 + 3;
              pbVar24[iVar20] = *(byte *)(iVar20 + (int)pvStack_314);
              pvStack_27c = pvStack_2bc;
              if (0 < iStack_278) {
                piStack_268 = (int *)-iStack_2c0;
                uStack_2f8 = (int)pvVar23 - (int)pvStack_2bc;
                iStack_2d4 = iStack_278;
                do {
                  iStack_210 = uStack_2f8 * uStack_2f8;
                  puStack_288 = puStack_2b8;
                  if (0 < (int)puStack_2c8) {
                    iStack_220 = -(int)piStack_2d0;
                    uStack_280 = (int)puStack_310 - (int)puStack_2b8;
                    dStack_dc = (double)(int)uStack_2f8;
                    pbStack_224 = pbVar24 + (int)puStack_2b8 * 4 + 3;
                    pbStack_304 = (byte *)((int)pvStack_314 + (int)puStack_2b8 * 4 + 1);
                    iStack_218 = (int)pbVar24 - (int)pvStack_314;
                    puStack_2d8 = puStack_2c8;
                    do {
                      uVar18 = uStack_280;
                      fVar28 = SQRT((float10)(int)(uStack_280 * uStack_280 + iStack_210));
                      uVar19 = (int)uStack_280 >> 0x1f;
                      uVar21 = (int)uStack_2f8 >> 0x1f;
                      if (iStack_284 != 0) {
                        dVar5 = (double)(int)((uStack_280 ^ uVar19) - uVar19) * dStack_d4;
                        dVar6 = (double)(int)((uStack_2f8 ^ uVar21) - uVar21) * dStack_cc;
                        dVar5 = SQRT(dVar5 * dVar5 + dVar6 * dVar6);
                        if (dVar5 <= uStack_264) {
                          unaff_ESI = 0x10000;
                        }
                        else if (dVar5 < _DAT_00555908) {
                          iVar20 = ftol();
                          unaff_ESI = 0x10000 - iVar20;
                          fVar28 = extraout_ST0;
                        }
                        else {
                          unaff_ESI = 0;
                        }
                      }
                      if ((float10)_DAT_00555910 == fVar28) {
                        fVar28 = (float10)_DAT_00555910;
                      }
                      else {
                        fVar28 = (float10)_DAT_00555908 / fVar28;
                      }
                      iVar20 = 3;
                      dStack_244 = 0.3333333333333333;
                      iVar16 = (uVar18 ^ uVar19) - uVar19;
                      if ((iVar16 < 3) && (iVar12 = (uStack_2f8 ^ uVar21) - uVar21, iVar12 < 3)) {
                        iVar20 = iVar16;
                        if (iVar16 <= iVar12) {
                          iVar20 = iVar12;
                        }
                        if (iVar20 == 0) {
                          dStack_244 = 0.0;
                        }
                        else {
                          dStack_244 = _DAT_00555908 / (double)iVar20;
                        }
                      }
                      fVar29 = (float10)(int)uStack_280 * fVar28;
                      if ((float10)_DAT_005667f8 <= fVar29) {
                        if (fVar29 <= (float10)_DAT_005667f0) {
                          dStack_234 = (double)fVar29;
                        }
                        else {
                          dStack_234 = 0.99;
                        }
                      }
                      else {
                        dStack_234 = -0.99;
                      }
                      fVar28 = fVar28 * (float10)dStack_dc;
                      if ((float10)_DAT_005667f8 <= fVar28) {
                        if (fVar28 <= (float10)_DAT_005667f0) {
                          uStack_2b4 = (double)fVar28;
                        }
                        else {
                          uStack_2b4 = 0.99;
                        }
                      }
                      else {
                        uStack_2b4 = -0.99;
                      }
                      if (iVar20 == 0) {
                        bStack_326 = pbStack_304[1];
                        bStack_327 = *pbStack_304;
                        bStack_328 = pbStack_304[-1];
                        bStack_325 = pbStack_304[2];
                      }
                      else {
                        dStack_24c = (double)(int)puStack_288;
                        uStack_274 = (double)(int)pvStack_27c;
                        uStack_f4 = _DAT_00555910;
                        dStack_ec = _DAT_00555910;
                        fVar28 = (float10)_DAT_00555910;
                        dStack_e4 = _DAT_00555910;
                        dStack_c4 = uStack_274;
                        dStack_b4 = dStack_24c;
                        if (0 < iVar20) {
                          fVar29 = (float10)dStack_244;
                          do {
                            uStack_274 = uStack_274 + uStack_2b4;
                            puVar13 = (undefined4 *)ftol();
                            fVar30 = extraout_ST1;
                            puStack_2c4 = puVar13;
                            pvVar11 = (LPVOID)ftol();
                            if (iStack_258 == 0) {
                              if (((bStack_331 == 0) || (bStack_331 == 1)) && (pvVar11 != pvVar23))
                              {
                                pvVar11 = (LPVOID)((int)pvVar11 + 1);
                              }
                              if (((bStack_331 == 0) || (bStack_331 == 2)) &&
                                 (puVar13 != puStack_310)) {
                                puVar13 = (undefined4 *)((int)puVar13 + 1);
                              }
                              puVar17 = (undefined4 *)
                                        (((int)(pbStack_1ac + ((int)pbStack_1ac >> 0x1f & 3)) >> 2)
                                         * (int)pvVar11 + (int)puVar13);
                              if ((puVar13 == puStack_288) && (pvVar11 == pvStack_27c)) {
                                bVar1 = *(byte *)((int)pvVar8 + (int)puVar17 * 4 + 1);
                                bVar2 = *(byte *)((int)pvVar8 + (int)puVar17 * 4);
                                bVar3 = *(byte *)((int)pvVar8 + (int)puVar17 * 4 + 3);
                              }
                              else {
                                bVar1 = pbVar7[(int)puVar17 * 4 + 1];
                                bVar2 = pbVar7[(int)puVar17 * 4];
                                bVar3 = pbVar7[(int)puVar17 * 4 + 3];
                              }
                              fVar32 = (float10)bVar1 * extraout_ST1_00 + fVar28;
                              fVar31 = (float10)bVar2 * extraout_ST1_00 + fVar29;
                              fVar28 = (float10)bVar3 * extraout_ST1_00 + fVar30;
                              fVar29 = extraout_ST1_00;
                            }
                            else {
                              dStack_20c = (double)(extraout_ST0_00 - (float10)(int)puStack_2c4);
                              dStack_24c = uStack_274 - (double)(int)pvVar11;
                              fVar31 = extraout_ST1_00;
                              iVar16 = ftol();
                              iVar16 = 0x100 - iVar16;
                              fVar28 = extraout_ST1_01;
                              iVar12 = ftol();
                              uStack_2cc = 0x100 - iVar12;
                              iVar12 = (int)(pbStack_1ac + ((int)pbStack_1ac >> 0x1f & 3)) >> 2;
                              puVar17 = (undefined4 *)((int)pvVar11 * iVar12 + (int)puVar13);
                              pbStack_2a8 = pbVar7 + (int)puVar17 * 4;
                              if ((puVar13 == (undefined4 *)&UNK_005547ef) ||
                                 (puVar13 = puStack_2c4, pvVar11 == (LPVOID)0xffffffff)) {
                                pbStack_29c = abStack_2dc;
                                if (puVar13 == (undefined4 *)&UNK_005547ef) {
                                  pbStack_2a4 = abStack_2dc;
                                }
                                else {
                                  pbStack_2a4 = pbVar7 + (int)puVar17 * 4 + 4;
                                }
                                if (pvVar11 == (LPVOID)0xffffffff) {
                                  local_2a0 = abStack_2dc;
                                }
                                else {
                                  local_2a0 = pbVar7 + (int)((int)puVar17 + iVar12) * 4;
                                }
                              }
                              else {
                                pbStack_2a4 = pbVar7 + (int)puVar17 * 4 + 4;
                                local_2a0 = pbVar7 + (int)((int)puVar17 + iVar12) * 4;
                                pbStack_29c = pbVar7 + (int)((int)puVar17 + iVar12) * 4 + 4;
                              }
                              if ((ABS(extraout_ST0_01 - (float10)dStack_b4) <
                                   (float10)_DAT_00555908) &&
                                 (ABS(uStack_274 - dStack_c4) < _DAT_00555908)) {
                                if ((dStack_20c == _DAT_00555910) && (dStack_24c == _DAT_00555910))
                                {
                                  if (iStack_284 == 0) {
                                    pbStack_2a8 = pbStack_304 + -1;
                                  }
                                  else {
                                    bStack_32e = (byte)((uint)pbStack_304[1] * unaff_ESI >> 0x10);
                                    bStack_32f = (byte)((uint)*pbStack_304 * unaff_ESI >> 0x10);
                                    bStack_330 = (byte)((uint)pbStack_304[-1] * unaff_ESI >> 0x10);
                                    bStack_32d = pbStack_304[2];
                                    pbStack_2a8 = &bStack_330;
                                  }
                                }
                                else if (iStack_284 == 0) {
                                  *ppbStack_2fc = pbStack_304 + -1;
                                }
                                else {
                                  bStack_32e = (byte)((uint)pbStack_304[1] * unaff_ESI >> 0x10);
                                  bStack_32f = (byte)((uint)*pbStack_304 * unaff_ESI >> 0x10);
                                  bStack_330 = (byte)((uint)pbStack_304[-1] * unaff_ESI >> 0x10);
                                  bStack_32d = pbStack_304[2];
                                  *ppbStack_2fc = &bStack_330;
                                }
                              }
                              iVar14 = 0x100 - uStack_2cc;
                              iVar12 = 0x100 - iVar16;
                              bStack_326 = (byte)(((uint)pbStack_2a8[2] * iVar16 +
                                                  (uint)pbStack_2a4[2] * iVar12) * uStack_2cc +
                                                  ((uint)local_2a0[2] * iVar16 +
                                                  (uint)pbStack_29c[2] * iVar12) * iVar14 >> 0x10);
                              bStack_327 = (byte)(((uint)pbStack_2a8[1] * iVar16 +
                                                  (uint)pbStack_2a4[1] * iVar12) * uStack_2cc +
                                                  ((uint)local_2a0[1] * iVar16 +
                                                  (uint)pbStack_29c[1] * iVar12) * iVar14 >> 0x10);
                              bStack_328 = (byte)(((uint)*pbStack_29c * iVar12 +
                                                  (uint)*local_2a0 * iVar16) * iVar14 +
                                                  ((uint)*pbStack_2a4 * iVar12 +
                                                  (uint)*pbStack_2a8 * iVar16) * uStack_2cc >> 0x10)
                              ;
                              bStack_325 = (byte)(((uint)pbStack_2a8[3] * iVar16 +
                                                  (uint)pbStack_2a4[3] * iVar12) * uStack_2cc +
                                                  ((uint)local_2a0[3] * iVar16 +
                                                  (uint)pbStack_29c[3] * iVar12) * iVar14 >> 0x10);
                              fVar32 = (float10)bStack_327 * extraout_ST1_02 + fVar30;
                              fVar31 = (float10)bStack_328 * extraout_ST1_02 + fVar31;
                              fVar28 = (float10)bStack_325 * extraout_ST1_02 + fVar28;
                              fVar29 = extraout_ST1_02;
                            }
                            iVar20 = iVar20 + -1;
                          } while (iVar20 != 0);
                          dStack_e4 = (double)fVar28;
                          dStack_ec = (double)fVar31;
                          uStack_f4 = (double)fVar32;
                        }
                        bStack_326 = ftol();
                        bStack_327 = ftol();
                        bStack_328 = ftol();
                        bStack_325 = ftol();
                      }
                      bStack_32e = pbStack_304[1];
                      bStack_32f = *pbStack_304;
                      bStack_330 = pbStack_304[-1];
                      bStack_32d = pbStack_304[2];
                      if (iStack_284 != 0) {
                        bStack_32e = (byte)((CONCAT12(uStack_32c,*(undefined2 *)(pbStack_304 + 1)) &
                                            0xff) * unaff_ESI >> 0x10);
                        bStack_32f = (byte)((CONCAT12(bStack_32d,CONCAT11(bStack_32e,bStack_32f)) &
                                            0xff) * unaff_ESI >> 0x10);
                        bStack_330 = (byte)((CONCAT12(bStack_32e,CONCAT11(bStack_32f,bStack_330)) &
                                            0xff) * unaff_ESI >> 0x10);
                      }
                      uVar4 = CONCAT12(bStack_326,CONCAT11(bStack_327,bStack_328));
                      uVar18 = CONCAT12(bStack_325,CONCAT11(bStack_326,bStack_327)) & 0xff;
                      uVar21 = CONCAT11(bStack_325,bStack_326) & 0xff;
                      uStack_274 = (double)(CONCAT44(uStack_274._4_4_,CONCAT13(bStack_325,uVar4)) &
                                           0xffffffff000000ff);
                      uStack_2cc = CONCAT12(bStack_32d,CONCAT11(bStack_32e,bStack_32f)) & 0xff;
                      puStack_2c4 = (undefined4 *)
                                    (CONCAT12(bStack_32e,CONCAT11(bStack_32f,bStack_330)) & 0xff);
                      uVar25 = CONCAT12(uStack_32c,CONCAT11(bStack_32d,bStack_32e)) & 0xff;
                      uVar19 = (uVar18 + (uVar4 & 0xff) + uVar21) / 3;
                      uVar27 = (uint)((int)puStack_2c4 + uVar25 + uStack_2cc) / 3;
                      iVar20 = iStack_228;
                      if (uVar19 < uVar27) {
                        iVar20 = ((uVar19 - uVar27) + 0x100) *
                                 ((uint)(iStack_214 * iStack_228) >> 0x10);
                      }
                      iVar16 = 0x10000 - iVar20;
                      if (iStack_21c != 0) {
                        DAT_0057b3a0 = DAT_0057b3a0 * 0x6255 + 0x3619 & 0x8000ffff;
                        if ((int)DAT_0057b3a0 < 0) {
                          DAT_0057b3a0 = (DAT_0057b3a0 - 1 | 0xffff0000) + 1;
                        }
                        if (1 < uVar27) {
                          iVar12 = uVar27 * DAT_0057b3a0 * 2;
                          iVar12 = (((int)(iVar12 + (iVar12 >> 0x1f & 0xffffU)) >> 0x10) - uVar27) *
                                   iStack_21c;
                          iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0xffU)) >> 8;
                          if (iVar12 < 1) {
                            if (-1 < iVar12) goto LAB_004b18bc;
                            cVar9 = (char)(iVar12 * uVar25 +
                                           ((int)(iVar12 * uVar25) >> 0x1f & 0xffU) >> 8);
                            cVar10 = (char)(iVar12 * uStack_2cc +
                                            ((int)(iVar12 * uStack_2cc) >> 0x1f & 0xffU) >> 8);
                            puVar13 = puStack_2c4;
                          }
                          else {
                            iVar14 = (0xff - uVar25) * iVar12;
                            cVar9 = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8);
                            iVar14 = (0xff - uStack_2cc) * iVar12;
                            cVar10 = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8);
                            puVar13 = (undefined4 *)(0xff - (int)puStack_2c4);
                          }
                          bStack_32e = bStack_32e + cVar9;
                          bStack_32f = bStack_32f + cVar10;
                          bStack_330 = bStack_330 +
                                       (char)((int)puVar13 * iVar12 +
                                              ((int)puVar13 * iVar12 >> 0x1f & 0xffU) >> 8);
                        }
                      }
LAB_004b18bc:
                      pbStack_224[-1] =
                           (byte)((CONCAT12(uStack_32c,CONCAT11(bStack_32d,bStack_32e)) & 0xff) *
                                  iVar16 + uVar21 * iVar20 >> 0x10);
                      pbStack_304[iStack_218] =
                           (byte)((CONCAT12(bStack_32d,CONCAT11(bStack_32e,bStack_32f)) & 0xff) *
                                  iVar16 + uVar18 * iVar20 >> 0x10);
                      pbStack_224[-3] =
                           (byte)((CONCAT12(bStack_32e,CONCAT11(bStack_32f,bStack_330)) & 0xff) *
                                  iVar16 + (int)uStack_274 * iVar20 >> 0x10);
                      *pbStack_224 = (byte)((uint)bStack_325 * iVar20 +
                                            (CONCAT12(uStack_32b,CONCAT11(uStack_32c,bStack_32d)) &
                                            0xff) * iVar16 >> 0x10);
                      puStack_288 = (undefined4 *)((int)puStack_288 + (int)piStack_2d0);
                      uStack_280 = uStack_280 + iStack_220;
                      pbStack_224 = pbStack_224 + (int)piStack_2d0 * 4;
                      pbStack_304 = pbStack_304 + (int)piStack_2d0 * 4;
                      puStack_2d8 = puStack_2d8 + -1;
                    } while (puStack_2d8 != (undefined *)0x0);
                  }
                  pvStack_27c = (LPVOID)((int)pvStack_27c + iStack_2c0);
                  pbVar24 = pbVar24 + ((int)(pbStack_1ac + ((int)pbStack_1ac >> 0x1f & 3)) >> 2) *
                                      iStack_2c0 * 4;
                  pvStack_314 = (LPCVOID)((int)pvStack_314 +
                                         ((int)((int)pvStack_11c + ((int)pvStack_11c >> 0x1f & 3U))
                                         >> 2) * iStack_2c0 * 4);
                  uStack_2f8 = uStack_2f8 + (int)piStack_268;
                  iStack_2d4 = iStack_2d4 + -1;
                } while (iStack_2d4 != 0);
              }
            }
            bStack_331 = bStack_331 + 1;
            iStack_2f0 = iStack_2f0 + 1;
            ppbStack_2fc = ppbStack_2fc + 1;
            if (3 < bStack_331) {
              if (iStack_1b0 != 0) {
                (**(code **)(*piStack_204 + 0x38))(piStack_204,&iStack_1a8);
                pbVar7 = pbStack_1b4;
                pvVar15 = GlobalHandle(pbStack_1b4);
                GlobalUnlock(pvVar15);
                pvVar15 = GlobalHandle(pbVar7);
                GlobalFree(pvVar15);
              }
              if (piStack_204 != (int *)0x0) {
                (**(code **)(*piStack_204 + 8))(piStack_204);
              }
              pvVar8 = pvStack_124;
              if (iStack_120 != 0) {
                pvVar15 = GlobalHandle(pvStack_124);
                GlobalUnlock(pvVar15);
                pvVar15 = GlobalHandle(pvVar8);
                GlobalFree(pvVar15);
              }
              if (piStack_174 != (int *)0x0) {
                (**(code **)(*piStack_174 + 8))(piStack_174);
              }
              return 0;
            }
          } while( true );
        }
      }
LAB_004b0809:
      if (iStack_1a8 != 0) {
        (**(code **)(*local_1fc + 0x38))(local_1fc,&pbStack_1a0);
        pbVar7 = pbStack_1ac;
        pvVar15 = GlobalHandle(pbStack_1ac);
        GlobalUnlock(pvVar15);
        pvVar15 = GlobalHandle(pbVar7);
        GlobalFree(pvVar15);
      }
      if (local_1fc != (int *)0x0) {
        (**(code **)(*local_1fc + 8))(local_1fc);
      }
      if (iStack_118 != 0) {
        pvVar15 = GlobalHandle(pvStack_11c);
        GlobalUnlock(pvVar15);
        pvVar15 = GlobalHandle(pvStack_11c);
        GlobalFree(pvVar15);
      }
      if (piStack_16c != (int *)0x0) {
        (**(code **)(*piStack_16c + 8))(piStack_16c);
      }
      return iVar20;
    }
  }
LAB_004b06d2:
  pvVar23 = pvStack_f8;
  if ((int)uStack_f4 != 0) {
    pvVar15 = GlobalHandle(pvStack_f8);
    GlobalUnlock(pvVar15);
    pvVar15 = GlobalHandle(pvVar23);
    GlobalFree(pvVar15);
  }
  if (piStack_148 != (int *)0x0) {
    (**(code **)(*piStack_148 + 8))();
  }
  return iVar20;
}


