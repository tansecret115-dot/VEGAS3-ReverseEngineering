/* Module: sftrans1.dll
   Function: FUN_004641c0
   Address: 004641c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004641c0(int *param_1,int *param_2,int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  int iVar12;
  undefined4 *puVar13;
  double *pdVar14;
  int iVar15;
  float10 fVar16;
  float10 extraout_ST0;
  float10 fVar17;
  float10 extraout_ST0_00;
  undefined4 local_e0;
  int local_dc;
  double local_d8;
  int local_cc;
  double local_c0;
  double local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  double local_90;
  int local_88;
  int local_84;
  undefined4 local_74;
  undefined8 local_50;
  
  dVar6 = *(double *)(param_2 + 0x2c);
  dVar3 = *(double *)(param_2 + 0x2c);
  iVar15 = *param_2;
  dVar2 = *(double *)(param_2 + 0x40);
  iVar12 = 1;
  if (1 < iVar15) {
    local_e0 = (double *)&local_50;
    pdVar14 = (double *)(param_2 + 0x42);
    dVar4 = _DAT_00555910;
    do {
      dVar1 = pdVar14[-10] - dVar3;
      dVar5 = *pdVar14 - dVar2;
      *local_e0 = ABS(dVar5);
      if (dVar4 < ABS(dVar1) + ABS(dVar5)) {
        dVar4 = ABS(dVar5 + dVar1);
        local_c0 = dVar5;
        local_b8 = dVar1;
      }
      iVar12 = iVar12 + 1;
      pdVar14 = pdVar14 + 1;
      local_e0 = local_e0 + 1;
    } while (iVar12 < iVar15);
  }
  if ((ABS(local_b8) < _DAT_00560e78) || (ABS(local_c0) < _DAT_00560e78)) {
    uVar9 = ftol();
    uVar8 = ftol();
    uVar10 = ftol();
    uVar11 = ftol();
    local_e0 = (double *)CONCAT13(uVar11,CONCAT21(CONCAT11(uVar9,uVar8),uVar10));
    iVar15 = 0;
    if (0 < param_1[1]) {
      puVar13 = (undefined4 *)*param_1;
      do {
        *puVar13 = local_e0;
        iVar15 = iVar15 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar15 < param_1[1]);
      return;
    }
  }
  else {
    local_dc = param_1[2];
    local_a8 = 0;
    uStack_a4 = 0xc12e8480;
    local_90 = 1.0;
    local_88 = 0;
    local_84 = 0;
    local_cc = 0;
    fVar16 = (float10)_DAT_00560e70;
    if (0 < param_1[1]) {
      puVar13 = (undefined4 *)(*param_1 + local_dc * 4);
      dVar2 = ABS((double)param_1[3] / (double)param_4 - dVar2);
      do {
        dVar3 = ABS(((double)local_dc / (double)param_3 - dVar6) * (local_c0 / local_b8));
        local_d8 = dVar2;
        if (dVar2 < dVar3) {
          local_d8 = dVar3;
        }
        if ((local_d8 < (double)CONCAT44(uStack_a4,local_a8)) || (fVar16 < (float10)local_d8)) {
          iVar15 = 1;
          fVar16 = (float10)_DAT_00560e68;
          local_a8 = 0;
          uStack_a4 = 0xc12e8480;
          if (1 < *param_2) {
            pdVar14 = (double *)&local_50;
            do {
              if ((*pdVar14 < local_d8) && ((double)CONCAT44(uStack_a4,local_a8) < *pdVar14)) {
                local_a8 = *(undefined4 *)pdVar14;
                uStack_a4 = *(undefined4 *)((int)pdVar14 + 4);
                local_88 = iVar15;
              }
              if ((local_d8 <= *pdVar14) && ((float10)*pdVar14 < fVar16)) {
                fVar16 = (float10)*pdVar14;
                local_84 = iVar15;
              }
              iVar15 = iVar15 + 1;
              pdVar14 = pdVar14 + 1;
            } while (iVar15 < *param_2);
          }
          if (_DAT_00560e60 <= (double)CONCAT44(uStack_a4,local_a8)) {
            if (fVar16 <= (float10)_DAT_00560e58) {
              fVar17 = fVar16 - (float10)(double)CONCAT44(uStack_a4,local_a8);
              if (fVar17 <= (float10)_DAT_00555910) {
                fVar17 = (float10)_DAT_00555908;
              }
              local_90 = (double)((float10)_DAT_00555908 / fVar17);
              goto LAB_0046457a;
            }
            local_84 = local_88;
            uVar9 = ftol();
            uVar8 = ftol();
            uVar7 = CONCAT11(uVar9,uVar8);
          }
          else {
            local_a8 = 0;
            uStack_a4 = 0xc12e847c;
            uVar9 = ftol();
            uVar8 = ftol();
            uVar7 = CONCAT11(uVar9,uVar8);
          }
          uVar9 = ftol();
          uVar8 = ftol();
          local_74 = CONCAT13(uVar8,CONCAT21(uVar7,uVar9));
          *puVar13 = local_74;
          fVar16 = extraout_ST0;
          local_88 = local_84;
        }
        else if (local_84 == local_88) {
          *puVar13 = local_74;
        }
        else {
LAB_0046457a:
          if ((double)((fVar16 - (float10)local_d8) * (float10)local_90 *
                      (float10)(float)param_2[(local_88 + 1) * 4 + 3]) +
              (local_d8 - (double)CONCAT44(uStack_a4,local_a8)) * local_90 *
              (double)(float)param_2[(local_84 + 1) * 4 + 3] <= _DAT_00555910) {
            *(undefined1 *)((int)puVar13 + 3) = 0;
            *(undefined1 *)puVar13 = 0;
            *(undefined1 *)((int)puVar13 + 1) = 0;
            *(undefined1 *)((int)puVar13 + 2) = 0;
          }
          else {
            uVar9 = ftol();
            *(undefined1 *)((int)puVar13 + 2) = uVar9;
            uVar9 = ftol();
            *(undefined1 *)((int)puVar13 + 1) = uVar9;
            uVar9 = ftol();
            *(undefined1 *)puVar13 = uVar9;
            uVar9 = ftol();
            *(undefined1 *)((int)puVar13 + 3) = uVar9;
            fVar16 = extraout_ST0_00;
          }
        }
        local_cc = local_cc + 1;
        local_dc = local_dc + 1;
        puVar13 = puVar13 + 1;
        if (param_1[1] <= local_cc) {
          return;
        }
      } while( true );
    }
  }
  return;
}


