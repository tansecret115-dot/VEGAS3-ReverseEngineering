/* Module: sfppack2.dll
   Function: FUN_5ccf6240
   Address: 5ccf6240
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5ccf6240(int *param_1)

{
  int iVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double *pdVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  double *pdVar10;
  int iVar11;
  double *pdVar12;
  int iVar13;
  float10 fVar14;
  undefined8 local_f0;
  int *local_e4;
  int local_e0;
  uint local_dc;
  undefined1 local_c8 [8];
  double local_c0 [23];
  
  iVar5 = *(int *)(param_1[0x82] + 0x18);
  pdVar6 = *(double **)(param_1[0x82] + 0x1c);
  uVar7 = FUN_5ccf5620((int)param_1);
  local_dc = 0;
  if (*(int *)param_1[0x82] != 0) {
    pdVar12 = local_c0;
    local_e4 = param_1 + 0x8e;
    iVar13 = 0;
    do {
      iVar11 = 0;
      FUN_5ccf6670((int)(pdVar12 + -1));
      if (iVar13 < 0x380) {
        local_e0 = param_1[0x8a];
      }
      else {
        local_e0 = param_1[0x8b];
      }
      if (uVar7 == 0) {
        iVar8 = 1;
      }
      else {
        iVar8 = local_e4[4];
      }
      iVar1 = iVar13 + param_1[0x82];
      if ((*(int *)(iVar13 + 0x20 + param_1[0x82]) == 0) && (iVar8 != 0)) {
        *(undefined4 *)(iVar1 + 0x188) = 0;
        *(undefined4 *)(iVar1 + 0x18c) = 0;
        iVar8 = param_1[0x82];
        if (0 < *(int *)(iVar8 + 0x14)) {
          pdVar10 = pdVar6;
          do {
            iVar1 = *(int *)(iVar13 + 0x184 + iVar8);
            local_f0 = *(double *)((int)pdVar10 + (iVar5 - (int)pdVar6));
            if (iVar1 == 0) {
              dVar3 = (*(double *)(iVar13 + 0x68 + iVar8) * *(double *)(iVar13 + 0x58 + iVar8) +
                      local_f0 * *(double *)(iVar13 + 0x78 + iVar8)) -
                      *(double *)(iVar13 + 0x70 + iVar8) * *(double *)(iVar13 + 0x60 + iVar8);
              local_f0._4_4_ = (uint)((ulonglong)dVar3 >> 0x20);
              uVar9 = local_f0._4_4_ & 0x7ff00000;
              local_f0 = dVar3;
              if (uVar9 < 0x3df00000) {
                local_f0 = 0.0;
              }
              *(undefined4 *)(iVar13 + 0x60 + iVar8) = *(undefined4 *)(iVar13 + 0x58 + iVar8);
              *(double *)(iVar13 + 0x58 + iVar8) = local_f0;
              *(undefined4 *)(iVar13 + 100 + iVar8) = *(undefined4 *)(iVar13 + 0x5c + iVar8);
            }
            else if (iVar1 == 1) {
              dVar4 = *(double *)(iVar13 + 0x38 + iVar8) * *(double *)(iVar13 + 0x28 + iVar8) +
                      (local_f0 * *(double *)(iVar13 + 0x48 + iVar8) -
                      *(double *)(iVar13 + 0x40 + iVar8) * *(double *)(iVar13 + 0x30 + iVar8));
              dVar3 = *(double *)(iVar13 + 0x28 + iVar8);
              local_f0._4_4_ = (uint)((ulonglong)dVar4 >> 0x20);
              uVar9 = local_f0._4_4_ & 0x7ff00000;
              local_f0 = dVar4;
              if (uVar9 < 0x3df00000) {
                local_f0 = 0.0;
              }
              *(undefined4 *)(iVar13 + 0x30 + iVar8) = *(undefined4 *)(iVar13 + 0x28 + iVar8);
              *(double *)(iVar13 + 0x28 + iVar8) = local_f0;
              *(undefined4 *)(iVar13 + 0x34 + iVar8) = *(undefined4 *)(iVar13 + 0x2c + iVar8);
              local_f0 = (dVar3 - dVar4) * *(double *)(iVar13 + 0x50 + iVar8);
            }
            else if (iVar1 == 2) {
              dVar3 = (local_f0 * *(double *)(iVar13 + 0x80 + iVar8) +
                      *(double *)(iVar13 + 0x68 + iVar8) * *(double *)(iVar13 + 0x58 + iVar8)) -
                      *(double *)(iVar13 + 0x70 + iVar8) * *(double *)(iVar13 + 0x60 + iVar8);
              local_f0._4_4_ = (uint)((ulonglong)dVar3 >> 0x20);
              uVar9 = local_f0._4_4_ & 0x7ff00000;
              local_f0 = dVar3;
              if (uVar9 < 0x3df00000) {
                local_f0 = 0.0;
              }
              dVar3 = *(double *)(iVar13 + 0x60 + iVar8);
              dVar4 = *(double *)(iVar13 + 0x58 + iVar8);
              *(undefined4 *)(iVar13 + 0x60 + iVar8) = *(undefined4 *)(iVar13 + 0x58 + iVar8);
              *(undefined4 *)(iVar13 + 100 + iVar8) = *(undefined4 *)(iVar13 + 0x5c + iVar8);
              *(double *)(iVar13 + 0x58 + iVar8) = local_f0;
              local_f0 = (local_f0 + dVar3) - (dVar4 + dVar4);
            }
            pdVar2 = (double *)(iVar13 + 0x188 + param_1[0x82]);
            if (local_f0 <= *(double *)(iVar13 + 0x188 + param_1[0x82])) {
              if (*pdVar2 < -local_f0) {
                *pdVar2 = -local_f0;
              }
            }
            else {
              *pdVar2 = local_f0;
            }
            *pdVar10 = local_f0;
            iVar8 = param_1[0x82];
            iVar11 = iVar11 + 1;
            pdVar10 = pdVar10 + 1;
          } while (iVar11 < *(int *)(iVar8 + 0x14));
        }
        if (local_e0 != 0) {
          dVar3 = *(double *)(iVar13 + 0x188 + param_1[0x82]);
          *pdVar12 = dVar3;
          pdVar12[1] = dVar3;
        }
        if (param_1[0x8d] != 0) {
          if ((float10)*pdVar12 == (float10)_DAT_5cd51520) {
LAB_5ccf64fb:
            iVar11 = -600;
          }
          else {
            log2((float10)*pdVar12);
            iVar11 = ftol();
            iVar11 = -0x3c - iVar11;
            if (iVar11 < -600) goto LAB_5ccf64fb;
          }
          iVar8 = *local_e4;
          if (*local_e4 <= iVar11) {
            iVar8 = iVar11;
          }
          *local_e4 = iVar8;
        }
        iVar11 = param_1[0x82];
        if (*(double *)(iVar13 + 0x188 + iVar11) < *(double *)(iVar13 + 0x1a0 + iVar11)) {
          if (*(double *)(iVar13 + 0x188 + iVar11) < *(double *)(iVar13 + 0x1c0 + iVar11)) {
            *(undefined4 *)(iVar13 + 0x180 + iVar11) = 0;
          }
        }
        else {
          *(undefined4 *)(iVar13 + 0x180 + iVar11) = 2;
        }
        iVar11 = param_1[0x82];
        FUN_5ccf5d40(iVar11,iVar13 + 0x20 + iVar11,0,0,*(int *)(iVar11 + 0x14));
        if (local_e0 == 0) {
          iVar11 = param_1[0x82];
          if (*(int *)(iVar13 + 0x108 + iVar11) != 0) {
            FUN_5ccf5640(iVar11,iVar13 + 0x20 + iVar11,0,0,*(int *)(iVar11 + 0x14));
          }
        }
        else {
          fVar14 = FUN_5ccf6010(local_dc,param_1[0x82]);
          pdVar12[2] = (double)fVar14;
          if (*pdVar12 == _DAT_5cd51520) {
            *(undefined4 *)(pdVar12 + 4) = 0;
            *(undefined4 *)((int)pdVar12 + 0x24) = 0x3ff00000;
          }
          else {
            pdVar12[4] = (double)(fVar14 / (float10)*pdVar12);
          }
          iVar11 = param_1[0x82];
          if (*(int *)(iVar13 + 0x108 + iVar11) != 0) {
            FUN_5ccf5640(iVar11,iVar13 + 0x20 + iVar11,0,0,*(int *)(iVar11 + 0x14));
            fVar14 = FUN_5ccf6010(local_dc,param_1[0x82]);
            pdVar12[2] = (double)fVar14;
          }
          *(undefined4 *)(pdVar12 + 3) = *(undefined4 *)(pdVar12 + 2);
          *(undefined4 *)((int)pdVar12 + 0x1c) = *(undefined4 *)((int)pdVar12 + 0x14);
          *(uint *)(pdVar12 + -1) = local_dc;
        }
      }
      local_e4 = local_e4 + 1;
      local_dc = local_dc + 1;
      pdVar12 = pdVar12 + 6;
      iVar13 = iVar13 + 0x1c0;
    } while (local_dc < *(uint *)param_1[0x82]);
  }
  (**(code **)(*param_1 + 0x1a0))(param_1,local_c8);
  return;
}


