/* Module: sfppack2.dll
   Function: FUN_5ccf7f80
   Address: 5ccf7f80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5ccf7f80(int *param_1)

{
  int iVar1;
  double *pdVar2;
  double dVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  double *pdVar11;
  int iVar12;
  float10 fVar13;
  undefined8 local_f0;
  int *local_e4;
  int local_e0;
  uint local_dc;
  undefined1 local_c8 [8];
  double local_c0 [23];
  
  iVar4 = *(int *)(param_1[0x82] + 0x18);
  pfVar5 = *(float **)(param_1[0x82] + 0x1c);
  uVar6 = FUN_5ccf5620((int)param_1);
  local_dc = 0;
  if (*(int *)param_1[0x82] != 0) {
    pdVar11 = local_c0;
    local_e4 = param_1 + 0x8e;
    iVar12 = 0;
    do {
      iVar10 = 0;
      FUN_5ccf6670((int)(pdVar11 + -1));
      if (iVar12 < 0x380) {
        local_e0 = param_1[0x8a];
      }
      else {
        local_e0 = param_1[0x8b];
      }
      if (uVar6 == 0) {
        iVar7 = 1;
      }
      else {
        iVar7 = local_e4[4];
      }
      iVar1 = iVar12 + param_1[0x82];
      if ((*(int *)(iVar12 + 0x20 + param_1[0x82]) == 0) && (iVar7 != 0)) {
        *(undefined4 *)(iVar1 + 0x188) = 0;
        *(undefined4 *)(iVar1 + 0x18c) = 0;
        iVar7 = param_1[0x82];
        if (0 < *(int *)(iVar7 + 0x14)) {
          pfVar9 = pfVar5;
          do {
            iVar1 = *(int *)(iVar12 + 0x184 + iVar7);
            fVar13 = (float10)*(float *)((int)pfVar9 + (iVar4 - (int)pfVar5));
            if (iVar1 == 0) {
              fVar13 = ((float10)*(double *)(iVar12 + 0x68 + iVar7) *
                        (float10)*(double *)(iVar12 + 0x58 + iVar7) +
                       fVar13 * (float10)*(double *)(iVar12 + 0x78 + iVar7)) -
                       (float10)*(double *)(iVar12 + 0x70 + iVar7) *
                       (float10)*(double *)(iVar12 + 0x60 + iVar7);
              local_f0._4_4_ = (uint)((ulonglong)(double)fVar13 >> 0x20);
              if ((local_f0._4_4_ & 0x7ff00000) < 0x3df00000) {
                fVar13 = (float10)0.0;
              }
              *(undefined4 *)(iVar12 + 0x60 + iVar7) = *(undefined4 *)(iVar12 + 0x58 + iVar7);
              *(double *)(iVar12 + 0x58 + iVar7) = (double)fVar13;
              *(undefined4 *)(iVar12 + 100 + iVar7) = *(undefined4 *)(iVar12 + 0x5c + iVar7);
            }
            else if (iVar1 == 1) {
              dVar3 = (double)((float10)*(double *)(iVar12 + 0x38 + iVar7) *
                               (float10)*(double *)(iVar12 + 0x28 + iVar7) +
                              (fVar13 * (float10)*(double *)(iVar12 + 0x48 + iVar7) -
                              (float10)*(double *)(iVar12 + 0x40 + iVar7) *
                              (float10)*(double *)(iVar12 + 0x30 + iVar7)));
              local_f0._4_4_ = (uint)((ulonglong)dVar3 >> 0x20);
              uVar8 = local_f0._4_4_ & 0x7ff00000;
              fVar13 = ((float10)*(double *)(iVar12 + 0x28 + iVar7) - (float10)dVar3) *
                       (float10)*(double *)(iVar12 + 0x50 + iVar7);
              local_f0 = dVar3;
              if (uVar8 < 0x3df00000) {
                local_f0 = 0.0;
              }
              *(undefined4 *)(iVar12 + 0x30 + iVar7) = *(undefined4 *)(iVar12 + 0x28 + iVar7);
              *(double *)(iVar12 + 0x28 + iVar7) = local_f0;
              *(undefined4 *)(iVar12 + 0x34 + iVar7) = *(undefined4 *)(iVar12 + 0x2c + iVar7);
            }
            else if (iVar1 == 2) {
              dVar3 = (double)((fVar13 * (float10)*(double *)(iVar12 + 0x80 + iVar7) +
                               (float10)*(double *)(iVar12 + 0x68 + iVar7) *
                               (float10)*(double *)(iVar12 + 0x58 + iVar7)) -
                              (float10)*(double *)(iVar12 + 0x70 + iVar7) *
                              (float10)*(double *)(iVar12 + 0x60 + iVar7));
              local_f0._4_4_ = (uint)((ulonglong)dVar3 >> 0x20);
              uVar8 = local_f0._4_4_ & 0x7ff00000;
              local_f0 = dVar3;
              if (uVar8 < 0x3df00000) {
                local_f0 = 0.0;
              }
              dVar3 = *(double *)(iVar12 + 0x60 + iVar7);
              fVar13 = (float10)*(double *)(iVar12 + 0x58 + iVar7);
              *(undefined4 *)(iVar12 + 0x60 + iVar7) = *(undefined4 *)(iVar12 + 0x58 + iVar7);
              *(undefined4 *)(iVar12 + 100 + iVar7) = *(undefined4 *)(iVar12 + 0x5c + iVar7);
              fVar13 = ((float10)local_f0 + (float10)dVar3) - (fVar13 + fVar13);
              *(double *)(iVar12 + 0x58 + iVar7) = local_f0;
            }
            pdVar2 = (double *)(iVar12 + 0x188 + param_1[0x82]);
            if (fVar13 <= (float10)*(double *)(iVar12 + 0x188 + param_1[0x82])) {
              if ((float10)*pdVar2 < -fVar13) {
                *pdVar2 = (double)-fVar13;
              }
            }
            else {
              *pdVar2 = (double)fVar13;
            }
            *pfVar9 = (float)fVar13;
            iVar7 = param_1[0x82];
            iVar10 = iVar10 + 1;
            pfVar9 = pfVar9 + 1;
          } while (iVar10 < *(int *)(iVar7 + 0x14));
        }
        if (local_e0 != 0) {
          dVar3 = *(double *)(iVar12 + 0x188 + param_1[0x82]);
          *pdVar11 = dVar3;
          pdVar11[1] = dVar3;
        }
        if (param_1[0x8d] != 0) {
          if ((float10)*pdVar11 == (float10)_DAT_5cd51520) {
LAB_5ccf823b:
            iVar10 = -600;
          }
          else {
            log2((float10)*pdVar11);
            iVar10 = ftol();
            iVar10 = -0x3c - iVar10;
            if (iVar10 < -600) goto LAB_5ccf823b;
          }
          iVar7 = *local_e4;
          if (*local_e4 <= iVar10) {
            iVar7 = iVar10;
          }
          *local_e4 = iVar7;
        }
        iVar10 = param_1[0x82];
        if (*(double *)(iVar12 + 0x188 + iVar10) < *(double *)(iVar12 + 0x1a0 + iVar10)) {
          if (*(double *)(iVar12 + 0x188 + iVar10) < *(double *)(iVar12 + 0x1c0 + iVar10)) {
            *(undefined4 *)(iVar12 + 0x180 + iVar10) = 0;
          }
        }
        else {
          *(undefined4 *)(iVar12 + 0x180 + iVar10) = 2;
        }
        iVar10 = param_1[0x82];
        FUN_5ccf7a80(iVar10,iVar12 + 0x20 + iVar10,0,0,*(int *)(iVar10 + 0x14));
        if (local_e0 == 0) {
          iVar10 = param_1[0x82];
          if (*(int *)(iVar12 + 0x108 + iVar10) != 0) {
            FUN_5ccf7370(iVar10,iVar12 + 0x20 + iVar10,0,0,*(int *)(iVar10 + 0x14));
          }
        }
        else {
          fVar13 = FUN_5ccf7d50(local_dc,param_1[0x82]);
          pdVar11[2] = (double)fVar13;
          if (*pdVar11 == _DAT_5cd51520) {
            *(undefined4 *)(pdVar11 + 4) = 0;
            *(undefined4 *)((int)pdVar11 + 0x24) = 0x3ff00000;
          }
          else {
            pdVar11[4] = (double)(fVar13 / (float10)*pdVar11);
          }
          iVar10 = param_1[0x82];
          if (*(int *)(iVar12 + 0x108 + iVar10) != 0) {
            FUN_5ccf7370(iVar10,iVar12 + 0x20 + iVar10,0,0,*(int *)(iVar10 + 0x14));
            fVar13 = FUN_5ccf7d50(local_dc,param_1[0x82]);
            pdVar11[2] = (double)fVar13;
          }
          *(undefined4 *)(pdVar11 + 3) = *(undefined4 *)(pdVar11 + 2);
          *(undefined4 *)((int)pdVar11 + 0x1c) = *(undefined4 *)((int)pdVar11 + 0x14);
          *(uint *)(pdVar11 + -1) = local_dc;
        }
      }
      local_e4 = local_e4 + 1;
      local_dc = local_dc + 1;
      pdVar11 = pdVar11 + 6;
      iVar12 = iVar12 + 0x1c0;
    } while (local_dc < *(uint *)param_1[0x82]);
  }
  (**(code **)(*param_1 + 0x1a0))(param_1,local_c8);
  return;
}


