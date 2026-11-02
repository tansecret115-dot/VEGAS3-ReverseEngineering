/* Module: sfppack2.dll
   Function: FUN_5cd27e40
   Address: 5cd27e40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cd27e40(double *param_1,int param_2)

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
  int iVar16;
  HGLOBAL pvVar17;
  undefined4 *pMem;
  undefined4 *puVar18;
  double *pdVar19;
  int iVar20;
  double *pdVar21;
  double *pdVar22;
  int iVar23;
  int iVar24;
  float10 fVar25;
  float10 fVar26;
  int local_64;
  int local_5c;
  int local_4c;
  int local_40;
  undefined8 local_38;
  
  if (param_2 == 0) {
    return 0xc;
  }
  iVar23 = 1 << ((byte)param_2 & 0x1f);
  iVar16 = iVar23 / 2;
  pvVar17 = GlobalAlloc(0x42,(iVar16 + 0xfffffff) * 0x10);
  pMem = GlobalLock(pvVar17);
  if (pMem != (undefined4 *)0x0) {
    fVar26 = (float10)fpatan((float10)_DAT_5cd51510,(float10)1);
    fVar26 = (fVar26 * (float10)_DAT_5cd58e60) / (float10)iVar16;
    fVar25 = (float10)fcos(fVar26);
    dVar1 = (double)fVar25;
    fVar26 = (float10)fsin(fVar26);
    fVar26 = -fVar26;
    dVar2 = (double)fVar26;
    if (1 < iVar16) {
      iVar24 = iVar16 + -1;
      puVar18 = pMem;
      local_38 = dVar1;
      do {
        *(double *)(puVar18 + 2) = (double)fVar26;
        fVar25 = (float10)dVar2 * fVar26;
        *puVar18 = (undefined4)local_38;
        puVar18[1] = local_38._4_4_;
        puVar18 = puVar18 + 4;
        iVar24 = iVar24 + -1;
        fVar26 = (float10)dVar2 * (float10)local_38 + fVar26 * (float10)dVar1;
        local_38 = (double)((float10)dVar1 * (float10)local_38 - fVar25);
      } while (iVar24 != 0);
    }
    local_5c = 1;
    if (0 < param_2) {
      local_40 = param_2;
      iVar24 = iVar23;
      do {
        local_64 = 0;
        iVar24 = iVar24 / 2;
        if (0 < iVar23) {
          pdVar19 = param_1 + iVar24 * 2;
          pdVar22 = param_1;
          do {
            dVar1 = *pdVar22;
            dVar2 = *pdVar19;
            dVar3 = pdVar19[iVar24 * -2 + 1];
            dVar4 = pdVar19[1];
            *pdVar19 = *pdVar22 - *pdVar19;
            pdVar19[1] = pdVar19[iVar24 * -2 + 1] - pdVar19[1];
            pdVar19 = pdVar19 + iVar24 * 4;
            *pdVar22 = dVar1 + dVar2;
            pdVar22[1] = dVar3 + dVar4;
            local_64 = local_64 + iVar24 * 2;
            pdVar22 = pdVar22 + iVar24 * 4;
          } while (local_64 < iVar23);
        }
        pdVar19 = (double *)(pMem + local_5c * 4 + -4);
        local_4c = 1;
        if (1 < iVar24) {
          iVar20 = 0x10;
          do {
            dVar3 = *pdVar19;
            dVar1 = *pdVar19;
            dVar4 = pdVar19[1];
            dVar2 = pdVar19[1];
            if (local_4c < iVar23) {
              pdVar21 = (double *)(iVar20 + iVar24 * 0x10 + (int)param_1);
              pdVar22 = (double *)(iVar20 + (int)param_1);
              local_64 = local_4c;
              do {
                dVar5 = *pdVar21;
                dVar6 = *pdVar22;
                dVar7 = pdVar21[iVar24 * -2 + 1];
                dVar8 = pdVar21[1];
                dVar9 = *pdVar22;
                dVar10 = *pdVar21;
                dVar11 = pdVar21[iVar24 * -2 + 1];
                *pdVar21 = dVar1 * (dVar9 - dVar10) - dVar2 * (dVar11 - pdVar21[1]);
                pdVar21[1] = dVar4 * (dVar9 - dVar10) + dVar3 * (dVar11 - pdVar21[1]);
                *pdVar22 = dVar5 + dVar6;
                pdVar21 = pdVar21 + iVar24 * 4;
                pdVar22[1] = dVar7 + dVar8;
                local_64 = local_64 + iVar24 * 2;
                pdVar22 = pdVar22 + iVar24 * 4;
              } while (local_64 < iVar23);
            }
            pdVar19 = pdVar19 + local_5c * 2;
            local_4c = local_4c + 1;
            iVar20 = iVar20 + 0x10;
          } while (local_4c < iVar24);
        }
        local_5c = local_5c * 2;
        local_40 = local_40 + -1;
      } while (local_40 != 0);
    }
    iVar24 = 0;
    local_64 = 1;
    pdVar19 = param_1;
    if (1 < iVar23 + -1) {
      do {
        pdVar22 = pdVar19 + 2;
        iVar20 = iVar16;
        if (iVar16 <= iVar24) {
          do {
            iVar24 = iVar24 - iVar20;
            iVar20 = iVar20 / 2;
          } while (iVar20 <= iVar24);
        }
        iVar24 = iVar24 + iVar20;
        if (local_64 < iVar24) {
          pdVar21 = param_1 + iVar24 * 2;
          uVar12 = *(undefined4 *)pdVar21;
          uVar13 = *(undefined4 *)((int)pdVar21 + 4);
          uVar14 = *(undefined4 *)(pdVar21 + 1);
          uVar15 = *(undefined4 *)((int)pdVar21 + 0xc);
          *(undefined4 *)pdVar21 = *(undefined4 *)pdVar22;
          *(undefined4 *)((int)pdVar21 + 4) = *(undefined4 *)((int)pdVar19 + 0x14);
          *(undefined4 *)(pdVar21 + 1) = *(undefined4 *)(pdVar19 + 3);
          *(undefined4 *)((int)pdVar21 + 0xc) = *(undefined4 *)((int)pdVar19 + 0x1c);
          *(undefined4 *)pdVar22 = uVar12;
          *(undefined4 *)((int)pdVar19 + 0x14) = uVar13;
          *(undefined4 *)(pdVar19 + 3) = uVar14;
          *(undefined4 *)((int)pdVar19 + 0x1c) = uVar15;
        }
        local_64 = local_64 + 1;
        pdVar19 = pdVar22;
      } while (local_64 < iVar23 + -1);
    }
    pvVar17 = GlobalHandle(pMem);
    GlobalUnlock(pvVar17);
    pvVar17 = GlobalHandle(pMem);
    GlobalFree(pvVar17);
    return 0;
  }
  return 8;
}


