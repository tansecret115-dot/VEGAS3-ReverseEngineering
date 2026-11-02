/* Module: aviplug.dll
   Function: FUN_5f9d07a0
   Address: 5f9d07a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f9d07a0(int param_1,double *param_2,double *param_3,uint param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  double *pdVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  undefined4 *puVar11;
  float10 fVar12;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((*(int *)(param_1 + 4) != 0) && (0x1f < param_4)) {
    if (*(int *)(param_1 + 0xc) == 0x20) {
      pdVar6 = param_3;
      puVar11 = *(undefined4 **)(param_1 + 0x28);
      for (iVar7 = (*(uint *)(param_1 + 0x10) & 0x1ffffff) << 5; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *(undefined4 *)pdVar6;
        pdVar6 = (double *)((int)pdVar6 + 4);
        puVar11 = puVar11 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined1 *)puVar11 = *(undefined1 *)pdVar6;
        pdVar6 = (double *)((int)pdVar6 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
    }
    else {
      iVar7 = 0;
      pdVar6 = param_3;
      if (0 < *(int *)(param_1 + 0x10) << 5) {
        do {
          iVar7 = iVar7 + 1;
          *(float *)(*(int *)(param_1 + 0x28) + -4 + iVar7 * 4) = (float)*pdVar6;
          pdVar6 = pdVar6 + 1;
        } while (iVar7 < *(int *)(param_1 + 0x10) * 0x20);
      }
    }
    local_14 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        local_20 = 0;
        if (0 < *(int *)(param_1 + 0x14)) {
          local_18 = 0;
          local_1c = 0;
          do {
            if (*(int *)(*(int *)(param_1 + 0x18) + local_20 * 4) != 0) {
              iVar7 = *(int *)(*(int *)(param_1 + 0x24) + 0x18 + local_1c);
              if (iVar7 == 0) {
                FUN_5f9d2f50((float *)(*(int *)(param_1 + 0x28) + local_14 * 4),0x20,
                             *(int *)(param_1 + 0x10),
                             (double *)
                             (*(int *)(*(int *)(param_1 + 0x20) + local_14 * 4) + local_18));
              }
              else if (iVar7 == 1) {
                pfVar8 = (float *)(*(int *)(param_1 + 0x28) + local_14 * 4);
                pdVar6 = (double *)(*(int *)(*(int *)(param_1 + 0x20) + local_14 * 4) + local_18);
                iVar7 = *(int *)(param_1 + 0x10);
                pfVar9 = pfVar8 + iVar7 * 0x20;
                if ((*(uint *)((int)pdVar6 + 0x84) & 0x7ff00000) < 0x3df00000) {
                  *(undefined4 *)(pdVar6 + 0x10) = 0;
                  *(undefined4 *)((int)pdVar6 + 0x84) = 0;
                }
                if ((*(uint *)((int)pdVar6 + 0x8c) & 0x7ff00000) < 0x3df00000) {
                  *(undefined4 *)(pdVar6 + 0x11) = 0;
                  *(undefined4 *)((int)pdVar6 + 0x8c) = 0;
                }
                fVar12 = (float10)pdVar6[0x10];
                fVar5 = (float10)pdVar6[0x11];
                for (; fVar4 = fVar12, pfVar8 < pfVar9; pfVar8 = pfVar8 + iVar7) {
                  fVar12 = (float10)(double)fVar5 * (float10)pdVar6[1] +
                           (float10)*pfVar8 * (float10)pdVar6[0x1a] + fVar4 * (float10)*pdVar6;
                  *pfVar8 = (float)(((float10)*pfVar8 + fVar12) - (float10)(double)fVar5);
                  fVar5 = fVar4;
                }
                pdVar6[0x11] = (double)fVar5;
                pdVar6[0x10] = (double)fVar4;
              }
              else if (iVar7 == 2) {
                FUN_5f9d3000((float *)(*(int *)(param_1 + 0x28) + local_14 * 4),0x20,
                             *(int *)(param_1 + 0x10),
                             (double *)
                             (*(int *)(*(int *)(param_1 + 0x20) + local_14 * 4) + local_18));
              }
            }
            local_1c = local_1c + 0x20;
            local_20 = local_20 + 1;
            local_18 = local_18 + 0xe0;
          } while (local_20 < *(int *)(param_1 + 0x14));
        }
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(param_1 + 0x10));
    }
  }
  if (param_2 != param_3) {
    pdVar6 = param_2;
    for (iVar7 = (*(int *)(param_1 + 0x10) * param_4 & 0x1fffffff) << 1; iVar7 != 0;
        iVar7 = iVar7 + -1) {
      *(undefined4 *)pdVar6 = *(undefined4 *)param_3;
      param_3 = (double *)((int)param_3 + 4);
      pdVar6 = (double *)((int)pdVar6 + 4);
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)pdVar6 = *(undefined1 *)param_3;
      param_3 = (double *)((int)param_3 + 1);
      pdVar6 = (double *)((int)pdVar6 + 1);
    }
  }
  iVar7 = 0;
  pdVar6 = param_2;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar10 = 0;
      local_20 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        local_1c = 0;
        do {
          if (*(int *)(*(int *)(param_1 + 0x18) + local_20 * 4) != 0) {
            iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x18 + local_1c);
            if (iVar1 == 0) {
              FUN_5f9d3170(pdVar6,param_4,*(int *)(param_1 + 0x10),
                           (double *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 * 4) + iVar10));
            }
            else if (iVar1 == 1) {
              FUN_5f9d30b0(pdVar6,param_4,*(int *)(param_1 + 0x10),
                           (double *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 * 4) + iVar10));
            }
            else if (iVar1 == 2) {
              FUN_5f9d3220(pdVar6,param_4,*(int *)(param_1 + 0x10),
                           (double *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 * 4) + iVar10));
            }
          }
          local_1c = local_1c + 0x20;
          local_20 = local_20 + 1;
          iVar10 = iVar10 + 0xe0;
        } while (local_20 < *(int *)(param_1 + 0x14));
      }
      iVar7 = iVar7 + 1;
      pdVar6 = pdVar6 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 4) != 0) {
    local_20 = 0;
    do {
      iVar7 = *(int *)(param_1 + 0x10);
      iVar10 = 0;
      fVar2 = (float)local_20 * _DAT_5f9ee7e0;
      if (0 < iVar7) {
        fVar3 = _DAT_5f9e7904 - fVar2;
        do {
          iVar7 = iVar7 * local_20 + iVar10;
          iVar10 = iVar10 + 1;
          param_2[iVar7] =
               (double)(fVar2 * (float)param_2[iVar7] +
                       fVar3 * *(float *)(*(int *)(param_1 + 0x28) + iVar7 * 4));
          iVar7 = *(int *)(param_1 + 0x10);
        } while (iVar10 < iVar7);
      }
      local_20 = local_20 + 1;
    } while (local_20 < 0x20);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


