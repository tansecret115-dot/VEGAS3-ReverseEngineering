/* Module: vidcap30.exe
   Function: FUN_00538fb0
   Address: 00538fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00538fb0(int param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  double *pdVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  float10 fVar14;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((*(int *)(param_1 + 4) != 0) && (0x1f < param_4)) {
    if (*(int *)(param_1 + 0xc) == 0x20) {
      puVar11 = param_3;
      puVar12 = *(undefined4 **)(param_1 + 0x28);
      for (iVar7 = (*(uint *)(param_1 + 0x10) & 0x1ffffff) << 5; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
    }
    else {
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0x10) << 5) {
        do {
          *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar7 * 4) = param_3[iVar7];
          iVar7 = iVar7 + 1;
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
                FUN_0053ba90(*(int *)(param_1 + 0x28) + local_14 * 4,0x20,
                             *(undefined4 *)(param_1 + 0x10),
                             *(int *)(*(int *)(param_1 + 0x20) + local_14 * 4) + local_18);
              }
              else if (iVar7 == 1) {
                pfVar8 = (float *)(*(int *)(param_1 + 0x28) + local_14 * 4);
                pdVar6 = (double *)(*(int *)(*(int *)(param_1 + 0x20) + local_14 * 4) + local_18);
                iVar7 = *(int *)(param_1 + 0x10);
                pfVar10 = pfVar8 + iVar7 * 0x20;
                if ((*(uint *)((int)pdVar6 + 0x84) & 0x7ff00000) < 0x3df00000) {
                  *(undefined4 *)(pdVar6 + 0x10) = 0;
                  *(undefined4 *)((int)pdVar6 + 0x84) = 0;
                }
                if ((*(uint *)((int)pdVar6 + 0x8c) & 0x7ff00000) < 0x3df00000) {
                  *(undefined4 *)(pdVar6 + 0x11) = 0;
                  *(undefined4 *)((int)pdVar6 + 0x8c) = 0;
                }
                fVar14 = (float10)pdVar6[0x10];
                fVar5 = (float10)pdVar6[0x11];
                for (; fVar4 = fVar14, pfVar8 < pfVar10; pfVar8 = pfVar8 + iVar7) {
                  fVar14 = (float10)(double)fVar5 * (float10)pdVar6[1] +
                           (float10)*pfVar8 * (float10)pdVar6[0x1a] + fVar4 * (float10)*pdVar6;
                  *pfVar8 = (float)(((float10)*pfVar8 + fVar14) - (float10)(double)fVar5);
                  fVar5 = fVar4;
                }
                pdVar6[0x11] = (double)fVar5;
                pdVar6[0x10] = (double)fVar4;
              }
              else if (iVar7 == 2) {
                FUN_0053bb40(*(int *)(param_1 + 0x28) + local_14 * 4,0x20,
                             *(undefined4 *)(param_1 + 0x10),
                             *(int *)(*(int *)(param_1 + 0x20) + local_14 * 4) + local_18);
              }
            }
            local_20 = local_20 + 1;
            local_1c = local_1c + 0x20;
            local_18 = local_18 + 0xe0;
          } while (local_20 < *(int *)(param_1 + 0x14));
        }
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(param_1 + 0x10));
    }
  }
  if (param_2 != param_3) {
    puVar11 = param_2;
    for (uVar9 = *(int *)(param_1 + 0x10) * param_4 & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar11 = *param_3;
      param_3 = param_3 + 1;
      puVar11 = puVar11 + 1;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)puVar11 = *(undefined1 *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar13 = 0;
      local_20 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        local_1c = 0;
        do {
          if (*(int *)(*(int *)(param_1 + 0x18) + local_20 * 4) != 0) {
            iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x18 + local_1c);
            if (iVar1 == 0) {
              FUN_0053ba90(param_2 + iVar7,param_4,*(undefined4 *)(param_1 + 0x10),
                           *(int *)(*(int *)(param_1 + 0x1c) + iVar7 * 4) + iVar13);
            }
            else if (iVar1 == 1) {
              FUN_0053b9d0(param_2 + iVar7,param_4,*(undefined4 *)(param_1 + 0x10),
                           *(int *)(*(int *)(param_1 + 0x1c) + iVar7 * 4) + iVar13);
            }
            else if (iVar1 == 2) {
              FUN_0053bb40(param_2 + iVar7,param_4,*(undefined4 *)(param_1 + 0x10),
                           *(int *)(*(int *)(param_1 + 0x1c) + iVar7 * 4) + iVar13);
            }
          }
          local_1c = local_1c + 0x20;
          local_20 = local_20 + 1;
          iVar13 = iVar13 + 0xe0;
        } while (local_20 < *(int *)(param_1 + 0x14));
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 4) != 0) {
    local_20 = 0;
    do {
      iVar7 = *(int *)(param_1 + 0x10);
      iVar13 = 0;
      fVar2 = (float)local_20 * _DAT_0059dbc0;
      if (0 < iVar7) {
        fVar3 = _DAT_00595420 - fVar2;
        do {
          iVar7 = iVar7 * local_20 + iVar13;
          iVar13 = iVar13 + 1;
          param_2[iVar7] =
               fVar2 * (float)param_2[iVar7] +
               fVar3 * *(float *)(*(int *)(param_1 + 0x28) + iVar7 * 4);
          iVar7 = *(int *)(param_1 + 0x10);
        } while (iVar13 < iVar7);
      }
      local_20 = local_20 + 1;
    } while (local_20 < 0x20);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


