/* Module: sfppack2.dll
   Function: FUN_5ccf9080
   Address: 5ccf9080
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5ccf9080(void *this,int *param_1)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  int *local_1c;
  int local_18;
  undefined8 local_10;
  
  iVar8 = 0;
  piVar5 = *(int **)((int)this + 0x208);
  local_18 = 0;
  pfVar3 = (float *)piVar5[6];
  if (0 < *piVar5) {
    local_1c = param_1;
    do {
      if (*(int *)(iVar8 + 0x20 + (int)piVar5) == 0) {
        iVar9 = 0;
        pfVar7 = pfVar3;
        if (0 < piVar5[5]) {
          do {
            iVar4 = *(int *)(iVar8 + 0x184 + (int)piVar5);
            local_10 = (double)*pfVar7;
            if (iVar4 == 0) {
              dVar1 = (local_10 * *(double *)(iVar8 + 0x78 + (int)piVar5) +
                      *(double *)(iVar8 + 0x68 + (int)piVar5) *
                      *(double *)(iVar8 + 0x58 + (int)piVar5)) -
                      *(double *)(iVar8 + 0x70 + (int)piVar5) *
                      *(double *)(iVar8 + 0x60 + (int)piVar5);
              local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
              uVar6 = local_10._4_4_ & 0x7ff00000;
              local_10 = dVar1;
              if (uVar6 < 0x3df00000) {
                local_10 = 0.0;
              }
              *(undefined4 *)(iVar8 + 0x60 + (int)piVar5) =
                   *(undefined4 *)(iVar8 + 0x58 + (int)piVar5);
              *(double *)(iVar8 + 0x58 + (int)piVar5) = local_10;
              *(undefined4 *)(iVar8 + 100 + (int)piVar5) =
                   *(undefined4 *)(iVar8 + 0x5c + (int)piVar5);
            }
            else if (iVar4 == 1) {
              dVar2 = *(double *)(iVar8 + 0x38 + (int)piVar5) *
                      *(double *)(iVar8 + 0x28 + (int)piVar5) +
                      (local_10 * *(double *)(iVar8 + 0x48 + (int)piVar5) -
                      *(double *)(iVar8 + 0x40 + (int)piVar5) *
                      *(double *)(iVar8 + 0x30 + (int)piVar5));
              dVar1 = *(double *)(iVar8 + 0x28 + (int)piVar5);
              local_10._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
              uVar6 = local_10._4_4_ & 0x7ff00000;
              local_10 = dVar2;
              if (uVar6 < 0x3df00000) {
                local_10 = 0.0;
              }
              *(undefined4 *)(iVar8 + 0x30 + (int)piVar5) =
                   *(undefined4 *)(iVar8 + 0x28 + (int)piVar5);
              *(double *)(iVar8 + 0x28 + (int)piVar5) = local_10;
              *(undefined4 *)(iVar8 + 0x34 + (int)piVar5) =
                   *(undefined4 *)(iVar8 + 0x2c + (int)piVar5);
              local_10 = (dVar1 - dVar2) * *(double *)(iVar8 + 0x50 + (int)piVar5);
            }
            else if (iVar4 == 2) {
              dVar1 = (*(double *)(iVar8 + 0x68 + (int)piVar5) *
                       *(double *)(iVar8 + 0x58 + (int)piVar5) +
                      local_10 * *(double *)(iVar8 + 0x80 + (int)piVar5)) -
                      *(double *)(iVar8 + 0x70 + (int)piVar5) *
                      *(double *)(iVar8 + 0x60 + (int)piVar5);
              local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
              uVar6 = local_10._4_4_ & 0x7ff00000;
              local_10 = dVar1;
              if (uVar6 < 0x3df00000) {
                local_10 = 0.0;
              }
              dVar1 = *(double *)(iVar8 + 0x60 + (int)piVar5);
              dVar2 = *(double *)(iVar8 + 0x58 + (int)piVar5);
              *(undefined4 *)(iVar8 + 0x60 + (int)piVar5) =
                   *(undefined4 *)(iVar8 + 0x58 + (int)piVar5);
              *(undefined4 *)(iVar8 + 100 + (int)piVar5) =
                   *(undefined4 *)(iVar8 + 0x5c + (int)piVar5);
              *(double *)(iVar8 + 0x58 + (int)piVar5) = local_10;
              local_10 = (local_10 + dVar1) - (dVar2 + dVar2);
            }
            local_10 = ABS(local_10);
            iVar4 = iVar8 + *(int *)((int)this + 0x208);
            if (local_10 < *(double *)(iVar8 + 0x188 + *(int *)((int)this + 0x208))) {
              local_10 = *(double *)(iVar4 + 0x188);
            }
            *(double *)(iVar4 + 0x188) = local_10;
            piVar5 = *(int **)((int)this + 0x208);
            iVar9 = iVar9 + 1;
            pfVar7 = pfVar7 + 1;
          } while (iVar9 < piVar5[5]);
        }
        fVar10 = (float10)*(double *)(iVar8 + 0x188 + *(int *)((int)this + 0x208));
        if (fVar10 == (float10)_DAT_5cd51520) {
          *local_1c = -600;
        }
        else {
          log2(fVar10);
          iVar9 = ftol();
          *local_1c = -0x3c - iVar9;
          if (-0x3c - iVar9 < -600) {
            *local_1c = -600;
          }
        }
      }
      piVar5 = *(int **)((int)this + 0x208);
      local_18 = local_18 + 1;
      iVar8 = iVar8 + 0x1c0;
      local_1c = local_1c + 1;
    } while (local_18 < *piVar5);
  }
  return 0;
}


