/* Module: vegas30.exe
   Function: FUN_005a8c10
   Address: 005a8c10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_005a8c10(byte *param_1,int *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  LONG LVar17;
  HRGN pHVar18;
  int iVar19;
  int iVar20;
  byte *pbVar21;
  int iVar22;
  int iVar23;
  LONG *pLVar24;
  bool bVar25;
  float local_558;
  float local_554;
  int local_550;
  float local_54c;
  float local_548;
  float local_544;
  float local_540;
  float local_53c;
  float local_538;
  float local_534;
  float local_530;
  float local_52c;
  float local_528;
  float local_524;
  float local_520;
  float local_51c;
  float local_518 [253];
  int local_124;
  POINT local_120 [36];
  
  if ((*(int *)(param_1 + 0x1394) == 4) || (*(int *)(param_1 + 0x1394) == 0)) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  iVar23 = 0;
  iVar22 = *(int *)(param_1 + 8);
  bVar25 = false;
  iVar19 = 0;
  if (0 < *(int *)(param_1 + 5000)) {
    pbVar21 = (byte *)(*(int *)(param_1 + 0x138c) + 0x48);
    do {
      if ((*pbVar21 & 1) != 0) {
        return false;
      }
      iVar19 = iVar19 + 1;
      pbVar21 = pbVar21 + 0x50;
    } while (iVar19 < *(int *)(param_1 + 5000));
  }
  *param_3 = 0;
  fVar1 = *(float *)(param_1 + 0x13c0);
  fVar2 = *(float *)(param_1 + 0x13b0);
  pfVar15 = local_518;
  for (iVar19 = 0xfe; iVar19 != 0; iVar19 = iVar19 + -1) {
    *pfVar15 = 0.0;
    pfVar15 = pfVar15 + 1;
  }
  local_554 = 0.0;
  local_550 = 0;
  local_54c = 0.0;
  if (((((bVar13) && (*(int *)(param_1 + 0x1390) == 0x3f800000)) &&
       (*(int *)(param_1 + 0x13b0) == 0x3f800000)) && (*(int *)(param_1 + 0x13c0) == 0x3f800000)) ||
     (((*(int *)(param_1 + 0x1394) == 3 && (iVar22 == 0)) && (_DAT_00610f20 == fVar1 * fVar2)))) {
    if ((*param_1 & 1) != 0) {
      iVar22 = 4;
      pfVar15 = local_518 + 1;
      local_124 = 4;
      pfVar14 = (float *)(param_1 + 0x13d8);
      do {
        pfVar15[-1] = pfVar14[-1];
        *pfVar15 = *pfVar14;
        pfVar15 = pfVar15 + 7;
        iVar22 = iVar22 + -1;
        pfVar14 = pfVar14 + 4;
      } while (iVar22 != 0);
LAB_005a90ea:
      if (2 < local_124) {
        if (0 < local_124) {
          pLVar24 = &local_120[0].y;
          iVar22 = local_124;
          do {
            LVar17 = ftol();
            ((POINT *)(pLVar24 + -1))->x = LVar17;
            LVar17 = ftol();
            *pLVar24 = LVar17;
            pLVar24 = pLVar24 + 2;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        pHVar18 = CreatePolygonRgn(local_120,local_124,2);
        *param_3 = (int)pHVar18;
      }
LAB_005a914f:
      return *param_3 != 0;
    }
    iVar22 = (*(int *)(param_1 + 0x13c4) - 1U | 0x3fff) + 1;
    iVar23 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar22 = (*(int *)(param_1 + 0x13c8) - 1U | 0x3fff) + 1;
    local_554 = (float)((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe);
    local_550 = (int)((*(uint *)(param_1 + 0x13cc) & 0xffffc000) +
                     ((int)*(uint *)(param_1 + 0x13cc) >> 0x1f & 0x3fffU)) >> 0xe;
    local_54c = (float)((int)((*(uint *)(param_1 + 0x13d0) & 0xffffc000) +
                             ((int)*(uint *)(param_1 + 0x13d0) >> 0x1f & 0x3fffU)) >> 0xe);
  }
  else if (((iVar22 == 1) && (*(int *)(param_1 + 0x1390) == 0x3f800000)) && (bVar13)) {
    iVar22 = FUN_005a8b80(param_1 + 0x10);
    if (iVar22 == 0) {
      iVar22 = *param_2;
      iVar19 = param_2[1];
      if ((param_1[0x10] & 2) == 0) {
        pfVar15 = (float *)(param_1 + 0x70);
        for (iVar23 = 0xfe; iVar23 != 0; iVar23 = iVar23 + -1) {
          *pfVar15 = 0.0;
          pfVar15 = pfVar15 + 1;
        }
        fVar1 = (float)*(int *)(param_1 + 0x60) * _DAT_00629dc8;
        param_1[0x464] = 4;
        param_1[0x465] = 0;
        param_1[0x466] = 0;
        param_1[0x467] = 0;
        *(float *)(param_1 + 0x70) = fVar1;
        fVar2 = (float)*(int *)(param_1 + 100) * _DAT_00629dc8;
        *(float *)(param_1 + 0x74) = fVar2;
        fVar3 = (float)*(int *)(param_1 + 0x68) * _DAT_00629dc8;
        *(float *)(param_1 + 0x8c) = fVar3;
        *(float *)(param_1 + 0x90) = fVar2;
        *(float *)(param_1 + 0xa8) = fVar3;
        fVar2 = (float)*(int *)(param_1 + 0x6c) * _DAT_00629dc8;
        *(float *)(param_1 + 0xac) = fVar2;
        *(float *)(param_1 + 0xc4) = fVar1;
        *(float *)(param_1 + 200) = fVar2;
      }
      if ((*param_1 & 1) == 0) {
        iVar23 = *(int *)(param_1 + 0x13c4);
        iVar16 = *(int *)(param_1 + 0x13cc);
        iVar9 = *(int *)(param_1 + 0x13d0);
        iVar10 = *(int *)(param_1 + 0x13c8);
        iVar20 = *(int *)(param_1 + 0x464);
        local_124 = iVar20;
        if (0 < iVar20) {
          pfVar15 = local_518 + 1;
          pfVar14 = (float *)(param_1 + 0x74);
          do {
            iVar20 = iVar20 + -1;
            pfVar15[-1] = (pfVar14[-1] / (float)iVar22) * (float)(iVar16 - iVar23) * _DAT_00629dc8 +
                          (float)iVar23 * _DAT_00629dc8;
            *pfVar15 = (*pfVar14 / (float)iVar19) * (float)(iVar9 - iVar10) * _DAT_00629dc8 +
                       (float)iVar10 * _DAT_00629dc8;
            pfVar15 = pfVar15 + 7;
            pfVar14 = pfVar14 + 7;
          } while (iVar20 != 0);
        }
      }
      else {
        fVar1 = *(float *)(param_1 + 0x13e4);
        fVar2 = *(float *)(param_1 + 0x13d4);
        local_124 = *(int *)(param_1 + 0x464);
        iVar23 = 0;
        fVar3 = *(float *)(param_1 + 0x13e8);
        fVar4 = *(float *)(param_1 + 0x13d8);
        fVar5 = *(float *)(param_1 + 0x13f4);
        fVar6 = *(float *)(param_1 + 0x1404);
        fVar7 = *(float *)(param_1 + 0x13f8);
        fVar8 = *(float *)(param_1 + 0x1408);
        local_548 = *(float *)(param_1 + 0x1404) - *(float *)(param_1 + 0x13d4);
        local_544 = *(float *)(param_1 + 0x1408) - *(float *)(param_1 + 0x13d8);
        local_540 = *(float *)(param_1 + 0x13f4) - *(float *)(param_1 + 0x13e4);
        local_53c = *(float *)(param_1 + 0x13f8) - *(float *)(param_1 + 0x13e8);
        if (0 < local_124) {
          pfVar15 = (float *)(param_1 + 0x74);
          pfVar14 = local_518 + 1;
          do {
            fVar11 = pfVar15[-1] / (float)iVar22;
            fVar12 = *pfVar15 / (float)iVar19;
            local_538 = fVar11 * (fVar1 - fVar2) + *(float *)(param_1 + 0x13d4);
            local_534 = fVar11 * (fVar3 - fVar4) + *(float *)(param_1 + 0x13d8);
            local_530 = fVar11 * (fVar5 - fVar6) + *(float *)(param_1 + 0x1404);
            local_52c = fVar11 * (fVar7 - fVar8) + *(float *)(param_1 + 0x1408);
            local_528 = fVar12 * local_548 + *(float *)(param_1 + 0x13d4);
            local_524 = fVar12 * local_544 + *(float *)(param_1 + 0x13d8);
            local_520 = fVar12 * local_540 + *(float *)(param_1 + 0x13e4);
            local_51c = fVar12 * local_53c + *(float *)(param_1 + 0x13e8);
            iVar16 = SfGetLineIntersection(&local_558,&local_538,&local_530,&local_528,&local_520);
            if (iVar16 == 0) goto LAB_005a914f;
            pfVar14[-1] = local_558;
            *pfVar14 = local_554;
            iVar23 = iVar23 + 1;
            pfVar15 = pfVar15 + 7;
            pfVar14 = pfVar14 + 7;
          } while (iVar23 < *(int *)(param_1 + 0x464));
        }
      }
      goto LAB_005a90ea;
    }
  }
  if ((local_550 != iVar23 && -1 < local_550 - iVar23) &&
     (local_54c != local_554 && -1 < (int)local_54c - (int)local_554)) {
    pHVar18 = CreateRectRgn(iVar23,(int)local_554,local_550,(int)local_54c);
    bVar25 = pHVar18 != (HRGN)0x0;
    *param_3 = (int)pHVar18;
  }
  return bVar25;
}


