/* Module: mpgaout.dll
   Function: FUN_100065e0
   Address: 100065e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100065e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  int local_28;
  int local_14;
  
  local_14 = 1;
  iVar21 = param_1 >> 2;
  dVar9 = _DAT_100065d8;
  iVar20 = param_1;
  while (iVar18 = iVar20, iVar4 = local_14, _DAT_100065d8 = dVar9, 4 < iVar18) {
    local_14 = iVar4 * 2;
    iVar12 = iVar18 >> 2;
    iVar13 = iVar18 >> 3;
    iVar20 = iVar18;
    while (iVar23 = iVar20, iVar23 <= param_1) {
      for (iVar26 = iVar23 - iVar18; iVar20 = iVar23 << 2, iVar26 < param_1;
          iVar26 = iVar26 + iVar23 * 2) {
        iVar20 = iVar12 + iVar26;
        dVar5 = *(double *)(param_2 + iVar26 * 8);
        iVar22 = iVar12 + iVar20;
        dVar6 = *(double *)(param_2 + iVar22 * 8);
        dVar7 = dVar5 - dVar6;
        *(double *)(param_2 + iVar26 * 8) = dVar5 + dVar6;
        dVar5 = *(double *)(param_2 + iVar20 * 8);
        dVar6 = *(double *)(param_2 + (iVar12 + iVar22) * 8);
        dVar8 = dVar5 - dVar6;
        *(double *)(param_2 + iVar20 * 8) = dVar5 + dVar6;
        *(double *)(param_2 + iVar22 * 8) = dVar7 + dVar8;
        *(double *)(param_2 + (iVar12 + iVar22) * 8) = dVar7 - dVar8;
        iVar20 = iVar13 + iVar26;
        iVar22 = iVar12 + iVar20;
        iVar25 = iVar12 + iVar22;
        iVar1 = iVar12 + iVar25;
        dVar5 = *(double *)(param_2 + iVar20 * 8);
        dVar6 = *(double *)(param_2 + iVar25 * 8);
        dVar7 = *(double *)(param_2 + iVar22 * 8);
        dVar8 = *(double *)(param_2 + iVar1 * 8);
        *(double *)(param_2 + iVar20 * 8) = dVar5 + dVar6;
        *(double *)(param_2 + iVar22 * 8) =
             *(double *)(param_2 + iVar22 * 8) + *(double *)(param_2 + iVar1 * 8);
        *(double *)(param_2 + iVar25 * 8) = (dVar5 - dVar6) * dVar9;
        *(double *)(param_2 + iVar1 * 8) = (dVar7 - dVar8) * dVar9;
      }
    }
    local_28 = 1;
    dVar9 = _DAT_100065d8;
    iVar20 = iVar18 >> 1;
    if (1 < iVar13) {
      do {
        iVar23 = local_28 * iVar4;
        dVar9 = *(double *)(param_3 + iVar23 * 8);
        dVar5 = *(double *)(param_3 + (iVar21 - iVar23) * 8);
        if (iVar23 * 3 < iVar21) {
          dVar6 = *(double *)(param_3 + iVar23 * 0x18);
          dVar7 = *(double *)(param_3 + (iVar21 + iVar23 * -3) * 8);
        }
        else {
          dVar6 = -*(double *)(param_3 + ((param_1 >> 1) + iVar23 * -3) * 8);
          dVar7 = *(double *)(param_3 + (iVar23 * 3 - iVar21) * 8);
        }
        iVar26 = local_28 + 1;
        iVar23 = iVar18;
        while (iVar22 = iVar23, iVar22 <= param_1) {
          for (iVar25 = iVar22 - iVar18; iVar23 = iVar22 << 2, iVar25 < param_1;
              iVar25 = iVar25 + iVar22 * 2) {
            iVar23 = local_28 + iVar25;
            iVar1 = iVar12 + iVar23;
            dVar8 = *(double *)(param_2 + iVar23 * 8);
            iVar2 = iVar12 + iVar1;
            dVar10 = *(double *)(param_2 + iVar2 * 8);
            dVar14 = dVar8 - dVar10;
            *(double *)(param_2 + iVar23 * 8) = dVar8 + dVar10;
            iVar19 = (iVar25 - local_28) + iVar12;
            iVar23 = iVar12 + iVar19;
            iVar3 = iVar12 + iVar23;
            dVar8 = *(double *)(param_2 + iVar19 * 8);
            dVar10 = *(double *)(param_2 + iVar3 * 8);
            dVar15 = dVar8 - dVar10;
            *(double *)(param_2 + iVar19 * 8) = dVar8 + dVar10;
            dVar16 = dVar14 - dVar15;
            dVar15 = dVar15 + dVar14;
            dVar8 = *(double *)(param_2 + iVar23 * 8);
            dVar10 = *(double *)(param_2 + (iVar12 + iVar3) * 8);
            dVar14 = dVar8 - dVar10;
            *(double *)(param_2 + iVar23 * 8) = dVar8 + dVar10;
            dVar8 = *(double *)(param_2 + iVar1 * 8);
            dVar10 = *(double *)(param_2 + (iVar12 + iVar2) * 8);
            dVar17 = dVar8 - dVar10;
            *(double *)(param_2 + iVar1 * 8) = dVar8 + dVar10;
            dVar8 = dVar14 + dVar17;
            dVar14 = dVar14 - dVar17;
            *(double *)(param_2 + iVar2 * 8) = dVar5 * dVar14 + dVar9 * dVar15;
            *(double *)(param_2 + iVar3 * 8) = dVar5 * dVar15 - dVar9 * dVar14;
            *(double *)(param_2 + (iVar12 + iVar2) * 8) = dVar6 * dVar16 + dVar7 * dVar8;
            *(double *)(param_2 + (iVar12 + iVar3) * 8) = dVar7 * dVar16 - dVar6 * dVar8;
          }
        }
        local_28 = iVar26;
        dVar9 = _DAT_100065d8;
      } while (iVar26 < iVar13);
    }
  }
  iVar21 = 4;
  if (3 < param_1) {
    do {
      iVar20 = iVar21 + -4;
      iVar4 = iVar21 * 4;
      if (iVar20 < param_1) {
        do {
          dVar9 = *(double *)(param_2 + iVar20 * 8);
          dVar5 = *(double *)(param_2 + 0x10 + iVar20 * 8);
          dVar6 = *(double *)(param_2 + 0x18 + iVar20 * 8);
          *(double *)(param_2 + iVar20 * 8) = dVar9 + dVar5;
          dVar7 = *(double *)(param_2 + 8 + iVar20 * 8);
          *(double *)(param_2 + 0x10 + iVar20 * 8) = dVar9 - dVar5;
          *(double *)(param_2 + 8 + iVar20 * 8) = dVar7 + dVar6;
          *(double *)(param_2 + 0x18 + iVar20 * 8) = dVar7 - dVar6;
          iVar20 = iVar20 + iVar21 * 2;
        } while (iVar20 < param_1);
      }
      iVar21 = iVar4;
    } while (iVar4 - param_1 == 0 || iVar4 < param_1);
  }
  iVar21 = 0;
  if (0 < param_1) {
    do {
      dVar9 = *(double *)(param_2 + iVar21 * 8);
      dVar5 = *(double *)(param_2 + 8 + iVar21 * 8);
      *(double *)(param_2 + iVar21 * 8) = dVar9 + dVar5;
      *(double *)(param_2 + 8 + iVar21 * 8) = dVar9 - dVar5;
      iVar21 = iVar21 + 2;
    } while (iVar21 < param_1);
  }
  if (0 < DAT_100224b0) {
    piVar24 = &DAT_100214b0;
    iVar21 = 0;
    do {
      iVar20 = *piVar24;
      iVar21 = iVar21 + 1;
      iVar4 = piVar24[1];
      piVar24 = piVar24 + 2;
      uVar11 = *(undefined8 *)(param_2 + iVar20 * 8);
      *(undefined8 *)(param_2 + iVar20 * 8) = *(undefined8 *)(param_2 + iVar4 * 8);
      *(undefined8 *)(param_2 + iVar4 * 8) = uVar11;
    } while (iVar21 < DAT_100224b0);
  }
  return;
}


