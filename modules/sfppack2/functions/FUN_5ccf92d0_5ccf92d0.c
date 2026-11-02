/* Module: sfppack2.dll
   Function: FUN_5ccf92d0
   Address: 5ccf92d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5ccf92d0(void *this,int *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  int *local_28;
  int local_24;
  int local_20;
  undefined8 local_10;
  
  iVar12 = 0;
  piVar8 = *(int **)((int)this + 0x208);
  local_20 = 0;
  iVar4 = piVar8[6];
  pfVar5 = *(float **)(*(int *)((int)this + 0x20c) + 0x18);
  if (0 < *piVar8) {
    local_28 = param_1;
    do {
      if ((*(int *)(iVar12 + 0x20 + (int)piVar8) == 0) && (local_24 = 0, 0 < piVar8[5])) {
        pfVar11 = pfVar5;
        do {
          local_10 = (double)*(float *)((iVar4 - (int)pfVar5) + (int)pfVar11);
          iVar9 = *(int *)(iVar12 + 0x184 + (int)piVar8);
          if (iVar9 == 0) {
            dVar2 = (local_10 * *(double *)(iVar12 + 0x78 + (int)piVar8) +
                    *(double *)(iVar12 + 0x68 + (int)piVar8) *
                    *(double *)(iVar12 + 0x58 + (int)piVar8)) -
                    *(double *)(iVar12 + 0x70 + (int)piVar8) *
                    *(double *)(iVar12 + 0x60 + (int)piVar8);
            local_10._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
            uVar10 = local_10._4_4_ & 0x7ff00000;
            local_10 = dVar2;
            if (uVar10 < 0x3df00000) {
              local_10 = 0.0;
            }
            *(undefined4 *)(iVar12 + 0x60 + (int)piVar8) =
                 *(undefined4 *)(iVar12 + 0x58 + (int)piVar8);
            *(double *)(iVar12 + 0x58 + (int)piVar8) = local_10;
            *(undefined4 *)(iVar12 + 100 + (int)piVar8) =
                 *(undefined4 *)(iVar12 + 0x5c + (int)piVar8);
          }
          else if (iVar9 == 1) {
            dVar3 = *(double *)(iVar12 + 0x38 + (int)piVar8) *
                    *(double *)(iVar12 + 0x28 + (int)piVar8) +
                    (local_10 * *(double *)(iVar12 + 0x48 + (int)piVar8) -
                    *(double *)(iVar12 + 0x40 + (int)piVar8) *
                    *(double *)(iVar12 + 0x30 + (int)piVar8));
            dVar2 = *(double *)(iVar12 + 0x28 + (int)piVar8);
            local_10._4_4_ = (uint)((ulonglong)dVar3 >> 0x20);
            uVar10 = local_10._4_4_ & 0x7ff00000;
            local_10 = dVar3;
            if (uVar10 < 0x3df00000) {
              local_10 = 0.0;
            }
            *(undefined4 *)(iVar12 + 0x30 + (int)piVar8) =
                 *(undefined4 *)(iVar12 + 0x28 + (int)piVar8);
            *(double *)(iVar12 + 0x28 + (int)piVar8) = local_10;
            *(undefined4 *)(iVar12 + 0x34 + (int)piVar8) =
                 *(undefined4 *)(iVar12 + 0x2c + (int)piVar8);
            local_10 = (dVar2 - dVar3) * *(double *)(iVar12 + 0x50 + (int)piVar8);
          }
          else if (iVar9 == 2) {
            dVar2 = (local_10 * *(double *)(iVar12 + 0x80 + (int)piVar8) +
                    *(double *)(iVar12 + 0x68 + (int)piVar8) *
                    *(double *)(iVar12 + 0x58 + (int)piVar8)) -
                    *(double *)(iVar12 + 0x70 + (int)piVar8) *
                    *(double *)(iVar12 + 0x60 + (int)piVar8);
            local_10._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
            uVar10 = local_10._4_4_ & 0x7ff00000;
            local_10 = dVar2;
            if (uVar10 < 0x3df00000) {
              local_10 = 0.0;
            }
            dVar2 = *(double *)(iVar12 + 0x60 + (int)piVar8);
            dVar3 = *(double *)(iVar12 + 0x58 + (int)piVar8);
            *(undefined4 *)(iVar12 + 0x60 + (int)piVar8) =
                 *(undefined4 *)(iVar12 + 0x58 + (int)piVar8);
            *(undefined4 *)(iVar12 + 100 + (int)piVar8) =
                 *(undefined4 *)(iVar12 + 0x5c + (int)piVar8);
            *(double *)(iVar12 + 0x58 + (int)piVar8) = local_10;
            local_10 = (local_10 + dVar2) - (dVar3 + dVar3);
          }
          local_10 = ABS(local_10);
          pdVar1 = (double *)(iVar12 + 0x188 + *(int *)((int)this + 0x208));
          if (local_10 < *(double *)(iVar12 + 0x188 + *(int *)((int)this + 0x208))) {
            local_10 = *pdVar1;
          }
          *pdVar1 = local_10;
          local_10 = (double)*pfVar11;
          iVar9 = iVar12 + *(int *)((int)this + 0x20c);
          iVar6 = *(int *)(iVar12 + 0x184 + *(int *)((int)this + 0x20c));
          if (iVar6 == 0) {
            dVar2 = (local_10 * *(double *)(iVar9 + 0x78) +
                    *(double *)(iVar9 + 0x68) * *(double *)(iVar9 + 0x58)) -
                    *(double *)(iVar9 + 0x70) * *(double *)(iVar9 + 0x60);
            local_10._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
            uVar10 = local_10._4_4_ & 0x7ff00000;
            local_10 = dVar2;
            if (uVar10 < 0x3df00000) {
              local_10 = 0.0;
            }
            uVar7 = *(undefined4 *)(iVar9 + 0x58);
            *(double *)(iVar9 + 0x58) = local_10;
            *(undefined4 *)(iVar9 + 0x60) = uVar7;
            *(undefined4 *)(iVar9 + 100) = *(undefined4 *)(iVar9 + 0x5c);
          }
          else if (iVar6 == 1) {
            dVar3 = *(double *)(iVar9 + 0x38) * *(double *)(iVar9 + 0x28) +
                    (local_10 * *(double *)(iVar9 + 0x48) -
                    *(double *)(iVar9 + 0x40) * *(double *)(iVar9 + 0x30));
            dVar2 = *(double *)(iVar9 + 0x28);
            local_10._4_4_ = (uint)((ulonglong)dVar3 >> 0x20);
            uVar10 = local_10._4_4_ & 0x7ff00000;
            local_10 = dVar3;
            if (uVar10 < 0x3df00000) {
              local_10 = 0.0;
            }
            *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar9 + 0x28);
            *(undefined4 *)(iVar9 + 0x34) = *(undefined4 *)(iVar9 + 0x2c);
            *(undefined4 *)(iVar9 + 0x28) = (undefined4)local_10;
            *(uint *)(iVar9 + 0x2c) = local_10._4_4_;
            local_10 = (dVar2 - dVar3) * *(double *)(iVar9 + 0x50);
          }
          else if (iVar6 == 2) {
            dVar2 = (local_10 * *(double *)(iVar9 + 0x80) +
                    *(double *)(iVar9 + 0x68) * *(double *)(iVar9 + 0x58)) -
                    *(double *)(iVar9 + 0x70) * *(double *)(iVar9 + 0x60);
            local_10._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
            uVar10 = local_10._4_4_ & 0x7ff00000;
            local_10 = dVar2;
            if (uVar10 < 0x3df00000) {
              local_10 = 0.0;
            }
            dVar2 = *(double *)(iVar9 + 0x60);
            dVar3 = *(double *)(iVar9 + 0x58);
            *(undefined4 *)(iVar9 + 0x60) = *(undefined4 *)(iVar9 + 0x58);
            *(undefined4 *)(iVar9 + 100) = *(undefined4 *)(iVar9 + 0x5c);
            *(undefined4 *)(iVar9 + 0x58) = (undefined4)local_10;
            *(uint *)(iVar9 + 0x5c) = local_10._4_4_;
            local_10 = (local_10 + dVar2) - (dVar3 + dVar3);
          }
          local_10 = ABS(local_10);
          pdVar1 = (double *)(iVar12 + 0x188 + *(int *)((int)this + 0x20c));
          if (local_10 < *(double *)(iVar12 + 0x188 + *(int *)((int)this + 0x20c))) {
            local_10 = *pdVar1;
          }
          *pdVar1 = local_10;
          if (*(double *)(iVar12 + 0x188 + *(int *)((int)this + 0x208)) <=
              *(double *)(iVar12 + 0x188 + *(int *)((int)this + 0x20c))) {
            dVar2 = *(double *)(iVar12 + 0x188 + *(int *)((int)this + 0x20c));
          }
          else {
            dVar2 = *(double *)(iVar12 + 0x188 + *(int *)((int)this + 0x208));
          }
          if ((float10)dVar2 == (float10)_DAT_5cd51520) {
LAB_5ccf9654:
            *local_28 = -600;
          }
          else {
            log2((float10)dVar2);
            iVar9 = ftol();
            *local_28 = -0x3c - iVar9;
            if (-0x3c - iVar9 < -600) goto LAB_5ccf9654;
          }
          piVar8 = *(int **)((int)this + 0x208);
          local_24 = local_24 + 1;
          pfVar11 = pfVar11 + 1;
        } while (local_24 < piVar8[5]);
      }
      local_28 = local_28 + 1;
      local_20 = local_20 + 1;
      piVar8 = *(int **)((int)this + 0x208);
      iVar12 = iVar12 + 0x1c0;
    } while (local_20 < *piVar8);
  }
  return 0;
}


