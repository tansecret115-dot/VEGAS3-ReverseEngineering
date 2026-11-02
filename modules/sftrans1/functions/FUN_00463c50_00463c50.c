/* Module: sftrans1.dll
   Function: FUN_00463c50
   Address: 00463c50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00463c50(int *param_1,int *param_2,int param_3,int param_4)

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
  int local_cc;
  double local_c0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  double local_98;
  int local_90;
  int local_8c;
  undefined4 local_7c;
  double local_78;
  undefined8 local_50;
  
  dVar6 = *(double *)(param_2 + 0x2c);
  dVar4 = *(double *)(param_2 + 0x2c);
  iVar15 = *param_2;
  dVar3 = *(double *)(param_2 + 0x40);
  iVar12 = 1;
  if (1 < iVar15) {
    local_e0 = (double *)&local_50;
    pdVar14 = (double *)(param_2 + 0x42);
    dVar5 = _DAT_00555910;
    do {
      dVar1 = pdVar14[-10] - dVar4;
      dVar2 = *pdVar14 - dVar3;
      *local_e0 = SQRT(dVar2 * dVar2 + dVar2 * dVar2);
      if (dVar5 < ABS(dVar1) + ABS(dVar2)) {
        dVar5 = ABS(dVar2 + dVar1);
        local_c0 = dVar2;
        local_78 = dVar1;
      }
      iVar12 = iVar12 + 1;
      pdVar14 = pdVar14 + 1;
      local_e0 = local_e0 + 1;
    } while (iVar12 < iVar15);
  }
  if ((ABS(local_78) < _DAT_00560e78) || (ABS(local_c0) < _DAT_00560e78)) {
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
    local_b0 = 0;
    uStack_ac = 0xc12e8480;
    local_98 = 1.0;
    local_90 = 0;
    local_8c = 0;
    local_cc = 0;
    fVar16 = (float10)_DAT_00560e70;
    dVar3 = (double)param_1[3] / (double)param_4 - dVar3;
    if (0 < param_1[1]) {
      puVar13 = (undefined4 *)(*param_1 + local_dc * 4);
      do {
        dVar4 = ((double)local_dc / (double)param_3 - dVar6) * (local_c0 / local_78);
        dVar4 = SQRT(dVar4 * dVar4 + dVar3 * dVar3);
        if ((dVar4 < (double)CONCAT44(uStack_ac,local_b0)) || (fVar16 < (float10)dVar4)) {
          iVar15 = 1;
          fVar16 = (float10)_DAT_00560e68;
          local_b0 = 0;
          uStack_ac = 0xc12e8480;
          if (1 < *param_2) {
            pdVar14 = (double *)&local_50;
            do {
              if ((*pdVar14 < dVar4) && ((double)CONCAT44(uStack_ac,local_b0) < *pdVar14)) {
                local_b0 = *(undefined4 *)pdVar14;
                uStack_ac = *(undefined4 *)((int)pdVar14 + 4);
                local_90 = iVar15;
              }
              if ((dVar4 <= *pdVar14) && ((float10)*pdVar14 < fVar16)) {
                fVar16 = (float10)*pdVar14;
                local_8c = iVar15;
              }
              iVar15 = iVar15 + 1;
              pdVar14 = pdVar14 + 1;
            } while (iVar15 < *param_2);
          }
          if (_DAT_00560e60 <= (double)CONCAT44(uStack_ac,local_b0)) {
            if (fVar16 <= (float10)_DAT_00560e58) {
              fVar17 = fVar16 - (float10)(double)CONCAT44(uStack_ac,local_b0);
              if (fVar17 <= (float10)_DAT_00555910) {
                fVar17 = (float10)_DAT_00555908;
              }
              local_98 = (double)((float10)_DAT_00555908 / fVar17);
              goto LAB_00464001;
            }
            local_8c = local_90;
            uVar9 = ftol();
            uVar8 = ftol();
            uVar7 = CONCAT11(uVar9,uVar8);
          }
          else {
            local_b0 = 0;
            uStack_ac = 0xc12e847c;
            uVar9 = ftol();
            uVar8 = ftol();
            uVar7 = CONCAT11(uVar9,uVar8);
          }
          uVar9 = ftol();
          uVar8 = ftol();
          local_7c = CONCAT13(uVar8,CONCAT21(uVar7,uVar9));
          *puVar13 = local_7c;
          fVar16 = extraout_ST0;
          local_90 = local_8c;
        }
        else if (local_8c == local_90) {
          *puVar13 = local_7c;
        }
        else {
LAB_00464001:
          if ((double)((fVar16 - (float10)dVar4) * (float10)local_98 *
                      (float10)(float)param_2[(local_90 + 1) * 4 + 3]) +
              (dVar4 - (double)CONCAT44(uStack_ac,local_b0)) * local_98 *
              (double)(float)param_2[(local_8c + 1) * 4 + 3] <= _DAT_00555910) {
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


