/* Module: sfppack2.dll
   Function: FUN_5cd27a20
   Address: 5cd27a20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cd27a20(double *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  HGLOBAL pvVar19;
  undefined4 *pMem;
  undefined4 *puVar20;
  int iVar21;
  double *pdVar22;
  int iVar23;
  double *pdVar24;
  double *pdVar25;
  int iVar26;
  float10 fVar27;
  float10 fVar28;
  int local_64;
  int local_54;
  int local_4c;
  int local_40;
  undefined8 local_38;
  
  if (param_2 == 0) {
    return 0xc;
  }
  iVar26 = 1 << ((byte)param_2 & 0x1f);
  iVar18 = iVar26 / 2;
  pvVar19 = GlobalAlloc(0x42,(iVar18 + 0xfffffff) * 0x10);
  pMem = GlobalLock(pvVar19);
  if (pMem != (undefined4 *)0x0) {
    iVar21 = iVar18 + -1;
    puVar20 = pMem;
    if (0 < iVar21) {
      do {
        *puVar20 = 0;
        puVar20[2] = 0;
        puVar20[1] = 0;
        puVar20[3] = 0;
        puVar20 = puVar20 + 4;
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
    }
    fVar28 = (float10)fpatan((float10)_DAT_5cd51510,(float10)1);
    fVar28 = (fVar28 * (float10)_DAT_5cd58e60) / (float10)iVar18;
    fVar27 = (float10)fcos(fVar28);
    dVar1 = (double)fVar27;
    fVar28 = (float10)fsin(fVar28);
    dVar2 = (double)fVar28;
    if (1 < iVar18) {
      iVar21 = iVar18 + -1;
      puVar20 = pMem;
      local_38 = dVar1;
      do {
        *(double *)(puVar20 + 2) = (double)fVar28;
        fVar27 = (float10)dVar2 * fVar28;
        *puVar20 = (undefined4)local_38;
        puVar20[1] = local_38._4_4_;
        puVar20 = puVar20 + 4;
        iVar21 = iVar21 + -1;
        fVar28 = (float10)dVar2 * (float10)local_38 + fVar28 * (float10)dVar1;
        local_38 = (double)((float10)dVar1 * (float10)local_38 - fVar27);
      } while (iVar21 != 0);
    }
    local_54 = 1;
    if (0 < param_2) {
      local_40 = param_2;
      iVar21 = iVar26;
      do {
        local_64 = 0;
        iVar21 = iVar21 / 2;
        if (0 < iVar26) {
          pdVar22 = param_1 + iVar21 * 2;
          pdVar25 = param_1;
          do {
            dVar1 = *pdVar22;
            dVar2 = *pdVar25;
            dVar3 = pdVar22[iVar21 * -2 + 1];
            dVar4 = pdVar22[1];
            *pdVar22 = *pdVar25 - *pdVar22;
            pdVar22[1] = pdVar22[iVar21 * -2 + 1] - pdVar22[1];
            pdVar22 = pdVar22 + iVar21 * 4;
            *pdVar25 = dVar1 + dVar2;
            pdVar25[1] = dVar3 + dVar4;
            local_64 = local_64 + iVar21 * 2;
            pdVar25 = pdVar25 + iVar21 * 4;
          } while (local_64 < iVar26);
        }
        pdVar22 = (double *)(pMem + local_54 * 4 + -4);
        local_4c = 1;
        if (1 < iVar21) {
          iVar23 = 0x10;
          do {
            dVar4 = *pdVar22;
            dVar1 = *pdVar22;
            dVar3 = pdVar22[1];
            dVar2 = pdVar22[1];
            if (local_4c < iVar26) {
              pdVar24 = (double *)(iVar23 + iVar21 * 0x10 + (int)param_1);
              pdVar25 = (double *)(iVar23 + (int)param_1);
              local_64 = local_4c;
              do {
                dVar5 = *pdVar24;
                dVar6 = *pdVar25;
                dVar7 = pdVar24[1];
                dVar8 = pdVar24[iVar21 * -2 + 1];
                dVar9 = *pdVar25;
                dVar10 = *pdVar24;
                dVar11 = pdVar24[iVar21 * -2 + 1];
                *pdVar24 = dVar1 * (dVar9 - dVar10) - dVar2 * (dVar11 - pdVar24[1]);
                pdVar24[1] = dVar4 * (dVar11 - pdVar24[1]) + dVar3 * (dVar9 - dVar10);
                *pdVar25 = dVar5 + dVar6;
                pdVar24 = pdVar24 + iVar21 * 4;
                pdVar25[1] = dVar7 + dVar8;
                local_64 = local_64 + iVar21 * 2;
                pdVar25 = pdVar25 + iVar21 * 4;
              } while (local_64 < iVar26);
            }
            pdVar22 = pdVar22 + local_54 * 2;
            local_4c = local_4c + 1;
            iVar23 = iVar23 + 0x10;
          } while (local_4c < iVar21);
        }
        local_54 = local_54 * 2;
        local_40 = local_40 + -1;
      } while (local_40 != 0);
    }
    iVar21 = 0;
    local_64 = 1;
    pdVar22 = param_1;
    if (1 < iVar26 + -1) {
      do {
        pdVar25 = pdVar22 + 2;
        iVar23 = iVar18;
        if (iVar18 <= iVar21) {
          do {
            iVar21 = iVar21 - iVar23;
            iVar23 = iVar23 / 2;
          } while (iVar23 <= iVar21);
        }
        iVar21 = iVar21 + iVar23;
        if (local_64 < iVar21) {
          pdVar24 = param_1 + iVar21 * 2;
          uVar12 = *(undefined4 *)pdVar24;
          uVar13 = *(undefined4 *)((int)pdVar24 + 4);
          uVar14 = *(undefined4 *)(pdVar24 + 1);
          uVar15 = *(undefined4 *)((int)pdVar24 + 0xc);
          *(undefined4 *)pdVar24 = *(undefined4 *)pdVar25;
          *(undefined4 *)((int)pdVar24 + 4) = *(undefined4 *)((int)pdVar22 + 0x14);
          *(undefined4 *)(pdVar24 + 1) = *(undefined4 *)(pdVar22 + 3);
          *(undefined4 *)((int)pdVar24 + 0xc) = *(undefined4 *)((int)pdVar22 + 0x1c);
          *(undefined4 *)pdVar25 = uVar12;
          *(undefined4 *)((int)pdVar22 + 0x14) = uVar13;
          *(undefined4 *)(pdVar22 + 3) = uVar14;
          *(undefined4 *)((int)pdVar22 + 0x1c) = uVar15;
        }
        local_64 = local_64 + 1;
        pdVar22 = pdVar25;
      } while (local_64 < iVar26 + -1);
    }
    fVar16 = (float)iVar26;
    fVar17 = (float)_DAT_5cd51510;
    if (0 < iVar26) {
      do {
        iVar26 = iVar26 + -1;
        *param_1 = (double)((fVar17 / fVar16) * (float)*param_1);
        param_1[1] = (double)((fVar17 / fVar16) * (float)param_1[1]);
        param_1 = param_1 + 2;
      } while (iVar26 != 0);
    }
    pvVar19 = GlobalHandle(pMem);
    GlobalUnlock(pvVar19);
    pvVar19 = GlobalHandle(pMem);
    GlobalFree(pvVar19);
    return 0;
  }
  return 8;
}


