/* Module: sftrans1.dll
   Function: FUN_0054e720
   Address: 0054e720
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_0054e720(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  double *pdVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  double local_60;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if ((-1 < *(int *)(param_1 + 0x14c)) && (*(int *)(param_1 + 0x14c) < *(int *)(param_1 + 0x148))) {
    uVar25 = 0;
    pdVar20 = &local_10;
    uVar24 = 0xffffffff;
    puVar23 = &local_68;
    uVar3 = *(undefined4 *)(param_1 + 0x1d0);
    puVar22 = &local_70;
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    uVar21 = 10;
    uVar13 = ftol(10,puVar22,puVar23,pdVar20,0xffffffff,0);
    uVar14 = ftol(uVar13);
    iVar15 = FUN_00550210(uVar14,uVar13,uVar21,puVar22,puVar23,pdVar20,uVar24,uVar25);
    if (iVar15 == 0) {
      *(undefined4 *)(param_1 + 0x1d0) = uVar3;
      iVar15 = FUN_0054eb40(param_2,param_3,param_4,param_5);
      return iVar15;
    }
    iVar15 = FUN_0054eb40(local_70,local_6c,local_68,local_64);
    if (-1 < iVar15) {
      iVar16 = *(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + 8);
      pdVar20 = *(double **)(iVar16 + iVar15 * 4);
      pdVar18 = *(double **)(iVar16 + -4 + iVar15 * 4);
      pdVar17 = *(double **)(iVar16 + 4 + iVar15 * 4);
      if (local_10 == _DAT_00555910) {
        pdVar17 = pdVar18 + 3;
        pdVar19 = pdVar20 + 3;
        for (iVar16 = 10; iVar16 != 0; iVar16 = iVar16 + -1) {
          *(undefined4 *)pdVar19 = *(undefined4 *)pdVar17;
          pdVar17 = (double *)((int)pdVar17 + 4);
          pdVar19 = (double *)((int)pdVar19 + 4);
        }
        pdVar18 = pdVar18 + 8;
        pdVar20 = pdVar20 + 8;
        for (iVar16 = 10; iVar16 != 0; iVar16 = iVar16 + -1) {
          *(undefined4 *)pdVar20 = *(undefined4 *)pdVar18;
          pdVar18 = (double *)((int)pdVar18 + 4);
          pdVar20 = (double *)((int)pdVar20 + 4);
        }
        FUN_0054ddf0();
      }
      else {
        local_50 = *pdVar18;
        local_30 = pdVar18[1];
        local_48 = *pdVar18 + pdVar18[10];
        local_28 = pdVar18[1] + pdVar18[0xb];
        local_40 = *pdVar17 + pdVar17[5];
        local_20 = pdVar17[1] + pdVar17[6];
        local_38 = *pdVar17;
        local_18 = pdVar17[1];
        dVar1 = _DAT_00555908 - local_10;
        dVar2 = local_40 * local_10 + local_48 * dVar1;
        dVar6 = local_20 * local_10 + local_28 * dVar1;
        dVar12 = local_48 * local_10 + local_50 * dVar1;
        local_60 = local_28 * local_10 + local_30 * dVar1;
        dVar11 = local_38 * local_10 + local_40 * dVar1;
        dVar10 = local_18 * local_10 + local_20 * dVar1;
        dVar4 = dVar2 * local_10 + dVar1 * dVar12;
        dVar9 = dVar6 * local_10 + dVar1 * local_60;
        dVar5 = dVar11 * local_10 + dVar1 * dVar2;
        dVar8 = dVar10 * local_10 + dVar1 * dVar6;
        dVar7 = dVar5 * local_10 + dVar1 * dVar4;
        dVar6 = dVar8 * local_10 + dVar1 * dVar9;
        dVar1 = *pdVar20;
        dVar2 = pdVar20[1];
        *pdVar20 = dVar7;
        pdVar20[1] = dVar6;
        dVar12 = dVar12 - *pdVar18;
        pdVar18[10] = dVar12;
        pdVar18[0xb] = local_60 - pdVar18[1];
        pdVar18[8] = dVar12 / (*pdVar20 - *pdVar18);
        if (dVar12 != _DAT_00555910) {
          pdVar18[9] = (local_60 - pdVar18[1]) / dVar12;
        }
        dVar4 = dVar4 - *pdVar20;
        pdVar20[5] = dVar4;
        dVar9 = dVar9 - pdVar20[1];
        pdVar20[6] = dVar9;
        pdVar20[3] = dVar4 / (*pdVar18 - *pdVar20);
        if (dVar4 != _DAT_00555910) {
          pdVar20[4] = dVar9 / dVar4;
        }
        dVar5 = dVar5 - *pdVar20;
        pdVar20[10] = dVar5;
        dVar8 = dVar8 - pdVar20[1];
        pdVar20[0xb] = dVar8;
        pdVar20[8] = dVar5 / (*pdVar17 - *pdVar20);
        if (dVar5 != _DAT_00555910) {
          pdVar20[9] = dVar8 / dVar5;
        }
        dVar11 = dVar11 - *pdVar17;
        pdVar17[5] = dVar11;
        dVar10 = dVar10 - pdVar17[1];
        pdVar17[6] = dVar10;
        pdVar17[3] = dVar11 / (*pdVar20 - *pdVar17);
        if (dVar11 != _DAT_00555910) {
          pdVar17[4] = dVar10 / dVar11;
        }
        FUN_0054e230(iVar15,dVar1 - dVar7,dVar2 - dVar6,0,0,0);
        FUN_0054da10(iVar15);
      }
      *(undefined4 *)(param_1 + 0x1d0) = uVar3;
      FUN_0054f0c0();
    }
    return iVar15;
  }
  return 0;
}


