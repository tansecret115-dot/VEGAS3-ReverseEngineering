/* Module: mpgaout.dll
   Function: FUN_10009ac0
   Address: 10009ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10009ac0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  double *pdVar18;
  int iVar19;
  int iVar20;
  double *pdVar21;
  int iVar22;
  int iVar23;
  undefined4 *puVar24;
  int iVar25;
  double dVar26;
  
  iVar22 = 0x1ff;
  puVar15 = (undefined4 *)(param_1 + 0x312f0);
  iVar20 = param_1 + 0x332f0;
  iVar19 = param_1 + 0x352f0;
  iVar16 = 0;
  do {
    *(undefined4 *)(param_1 + 0x352f0 + iVar16) = 0;
    *(undefined4 *)(param_1 + 0x352f4 + iVar16) = 0;
    *(undefined4 *)(param_1 + 0x332f0 + iVar16) = 0;
    *(undefined4 *)(param_1 + 0x332f4 + iVar16) = 0;
    *(undefined4 *)(param_1 + 0x312f0 + iVar16) = 0;
    *(undefined4 *)(param_1 + 0x312f4 + iVar16) = 0;
    iVar16 = iVar16 + 8;
    iVar22 = iVar22 + -1;
  } while (-1 < iVar22);
  iVar16 = 0;
  puVar24 = puVar15;
  for (iVar22 = 0x400; iVar14 = DAT_1001e714, iVar13 = DAT_1001e710, uVar12 = DAT_1001e70c,
      iVar22 != 0; iVar22 = iVar22 + -1) {
    *puVar24 = *param_2;
    param_2 = param_2 + 1;
    puVar24 = puVar24 + 1;
  }
  if (0 < DAT_1001e710) {
    do {
      iVar22 = iVar16 + 1;
      iVar11 = 1 << ((char)uVar12 - (char)iVar16 & 0x1fU);
      dVar9 = 1.0;
      iVar25 = iVar11 >> 1;
      dVar26 = 0.0;
      if (0 < iVar25) {
        iVar23 = 0;
        do {
          iVar1 = iVar23 + 1;
          for (; iVar23 < iVar14; iVar23 = iVar23 + iVar11) {
            iVar4 = iVar23 * 8;
            iVar3 = iVar25 + iVar23;
            iVar17 = iVar3 * 8;
            dVar5 = *(double *)(puVar15 + iVar23 * 2);
            dVar6 = *(double *)(puVar15 + iVar3 * 2);
            dVar7 = *(double *)(iVar4 + iVar20);
            dVar8 = *(double *)(iVar17 + iVar20);
            *(double *)(puVar15 + iVar3 * 2) = dVar5 - dVar6;
            *(double *)(iVar17 + iVar20) =
                 *(double *)(iVar4 + iVar20) - *(double *)(iVar17 + iVar20);
            *(double *)(puVar15 + iVar23 * 2) = dVar5 + dVar6;
            *(double *)(iVar4 + iVar20) = dVar7 + dVar8;
            dVar5 = *(double *)(puVar15 + iVar3 * 2);
            *(double *)(puVar15 + iVar3 * 2) = dVar5 * dVar9 - *(double *)(iVar17 + iVar20) * dVar26
            ;
            *(double *)(iVar17 + iVar20) = *(double *)(iVar17 + iVar20) * dVar9 + dVar5 * dVar26;
          }
          dVar5 = *(double *)(iVar16 * 8 + param_1 + 0x38340);
          dVar6 = *(double *)(iVar16 * 8 + param_1 + 0x382f0);
          dVar7 = dVar9 * dVar5;
          dVar9 = dVar9 * dVar6 - dVar26 * dVar5;
          dVar26 = dVar26 * dVar6 + dVar7;
          iVar23 = iVar1;
        } while (iVar1 < iVar25);
      }
      iVar16 = iVar22;
    } while (iVar22 < iVar13);
  }
  iVar16 = DAT_1001e714;
  if (0 < DAT_1001e714) {
    iVar20 = 8;
    pdVar21 = (double *)(param_1 + 0x332f8);
    pdVar18 = (double *)(param_1 + 0x312f8);
    iVar22 = 0;
    do {
      dVar9 = pdVar18[-1];
      iVar22 = iVar22 + 2;
      dVar26 = *pdVar18;
      dVar5 = pdVar21[-1] + *pdVar21;
      *pdVar18 = dVar9 - dVar26;
      *pdVar21 = pdVar21[-1] - *pdVar21;
      pdVar18[-1] = dVar9 + dVar26;
      pdVar21[-1] = dVar5;
      pdVar2 = pdVar18 + -1;
      pdVar21 = pdVar21 + 2;
      pdVar18 = pdVar18 + 2;
      *(double *)(param_1 + 0x352e8 + iVar20) = *pdVar2 * *pdVar2 + dVar5 * dVar5;
      iVar20 = iVar20 + 0x10;
    } while (iVar22 < iVar16);
  }
  iVar16 = 0;
  iVar20 = 0;
  do {
    iVar22 = *(int *)(param_1 + 0x372f0 + iVar16);
    if (iVar20 < iVar22) {
      uVar10 = *(undefined8 *)(iVar19 + iVar16 * 2);
      *(undefined8 *)(iVar19 + iVar16 * 2) = *(undefined8 *)(iVar19 + iVar22 * 8);
      *(undefined8 *)(*(int *)(param_1 + 0x372f0 + iVar16) * 8 + iVar19) = uVar10;
    }
    dVar9 = _DAT_10009aa8;
    iVar16 = iVar16 + 4;
    iVar20 = iVar20 + 1;
  } while (iVar20 < 0x200);
  iVar22 = 0;
  iVar16 = 0;
  iVar20 = 0xff;
  do {
    dVar26 = *(double *)(iVar19 + iVar16);
    if (0x3f < (byte)((dVar9 < dVar26 |
                       (byte)((ushort)((ushort)(NAN(dVar9) || NAN(dVar26)) << 10) >> 8) |
                      (byte)((ushort)((ushort)(dVar9 == dVar26) << 0xe) >> 8)) - 1)) {
      *(double *)(iVar19 + iVar16) = dVar9;
    }
    dVar26 = log10(*(double *)(iVar19 + iVar16));
    iVar16 = iVar16 + 8;
    dVar26 = dVar26 * _DAT_10009ab0;
    *(undefined4 *)(param_3 + 0xc + iVar22) = 0xffffff9c;
    *(undefined4 *)(param_3 + 8 + iVar22) = 0;
    *(double *)(param_3 + iVar22) = dVar26 + _DAT_10009ab8;
    iVar22 = iVar22 + 0x18;
    iVar20 = iVar20 + -1;
  } while (-1 < iVar20);
  return;
}


