/* Module: sftrans1.dll
   Function: FUN_0054e230
   Address: 0054e230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_0054e230(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,double *param_8,double *param_9)

{
  double dVar1;
  int *piVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int local_28;
  undefined8 local_20;
  double local_18;
  double local_10;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
  puVar11 = (undefined4 *)piVar2[2];
  pdVar3 = (double *)puVar11[param_2];
  if (*(char *)((int)pdVar3 + 0x13) == '\0') {
    param_3 = 0;
    param_4 = 0;
  }
  if (*(char *)((int)pdVar3 + 0x14) == '\0') {
    param_5 = 0;
    param_6 = 0;
  }
  dVar1 = *pdVar3 + (double)CONCAT44(param_4,param_3);
  local_20 = pdVar3[1] + (double)CONCAT44(param_6,param_5);
  local_18 = *(double *)(param_1 + 0xa8);
  local_10 = *(double *)(param_1 + 0xb0) + *(double *)(param_1 + 0xa8);
  if (*(int *)(param_1 + 0xe8) != 0) {
    local_18 = *(double *)(param_1 + 200);
    local_10 = *(double *)(param_1 + 0xd0);
    if (*(double *)(param_1 + 200) <= dVar1) {
      if (*(double *)(param_1 + 0xd0) < dVar1) {
        dVar1 = *(double *)(param_1 + 0xd0);
      }
    }
    else {
      dVar1 = *(double *)(param_1 + 200);
    }
    if (*(double *)(param_1 + 0xd8) <= local_20) {
      if (local_20 <= *(double *)(param_1 + 0xe0)) goto LAB_0054e359;
      uVar6 = *(undefined4 *)(param_1 + 0xe0);
      uVar10 = *(undefined4 *)(param_1 + 0xe4);
    }
    else {
      uVar6 = *(undefined4 *)(param_1 + 0xd8);
      uVar10 = *(undefined4 *)(param_1 + 0xdc);
    }
    local_20 = (double)CONCAT44(uVar10,uVar6);
  }
LAB_0054e359:
  if (0 < param_2) {
    local_18 = *(double *)puVar11[param_2 + -1];
  }
  iVar7 = *piVar2;
  if (param_2 + 1 < iVar7) {
    local_10 = *(double *)puVar11[param_2 + 1];
  }
  local_28 = param_2;
  dVar4 = dVar1;
  if ((double)CONCAT44(param_4,param_3) != _DAT_00555910) {
    local_18 = local_18 + *(double *)(param_1 + 0x110);
    if (local_18 <= dVar1) {
      local_10 = local_10 - *(double *)(param_1 + 0x110);
      if (local_10 < dVar1) {
        iVar8 = param_2 + 2;
        if (iVar8 < iVar7) {
          puVar9 = puVar11 + iVar8;
          do {
            if (dVar1 < *(double *)*puVar9) {
              dVar4 = local_10;
              if (*(double *)(param_1 + 0x110) + *(double *)(param_1 + 0x110) <=
                  *(double *)puVar11[iVar8] - *(double *)puVar11[iVar8 + -1]) {
                dVar4 = *(double *)puVar11[iVar8] - *(double *)(param_1 + 0x110);
                if (dVar1 <= dVar4) {
                  dVar4 = *(double *)puVar11[iVar8 + -1] + *(double *)(param_1 + 0x110);
                  if (dVar1 < dVar4) {
                    dVar1 = dVar4;
                  }
                  dVar4 = dVar1;
                  local_28 = iVar8 + -1;
                }
                else {
                  local_28 = iVar8 + -1;
                }
              }
              goto LAB_0054e6a3;
            }
            iVar8 = iVar8 + 1;
            puVar9 = puVar9 + 1;
          } while (iVar8 < iVar7);
        }
        iVar8 = iVar7 + -1;
        dVar4 = *(double *)puVar11[iVar7 + -1] + *(double *)(param_1 + 0x110);
        if (dVar1 <= dVar4) {
          dVar1 = dVar4;
        }
        dVar4 = dVar1;
        local_28 = iVar8;
        if (*(int *)(param_1 + 0xe8) != 0) {
          if (*(double *)(param_1 + 0xd0) < dVar1) {
            dVar1 = *(double *)(param_1 + 0xd0);
          }
          dVar4 = dVar1;
          if (((param_2 != iVar8) &&
              (dVar1 - *(double *)puVar11[iVar7 + -1] < *(double *)(param_1 + 0x110))) &&
             (local_28 = param_2, dVar4 = local_10, param_2 + 1 <= iVar8)) {
            puVar11 = puVar11 + iVar8;
            do {
              if (*(double *)(param_1 + 0x110) + *(double *)(param_1 + 0x110) <=
                  *(double *)*puVar11 - *(double *)puVar11[-1]) {
                dVar4 = *(double *)*puVar11 - *(double *)(param_1 + 0x110);
                local_28 = iVar8;
                break;
              }
              iVar8 = iVar8 + -1;
              puVar11 = puVar11 + -1;
            } while (param_2 + 1 <= iVar8);
          }
        }
      }
    }
    else {
      iVar7 = param_2 + -2;
      if (-1 < iVar7) {
        puVar9 = puVar11 + iVar7;
        do {
          if (*(double *)*puVar9 < dVar1) {
            iVar8 = iVar7 + 1;
            dVar4 = local_18;
            if (((*(double *)(param_1 + 0x110) + *(double *)(param_1 + 0x110) <=
                  *(double *)puVar11[iVar7 + 1] - *(double *)puVar11[iVar7]) &&
                (dVar4 = *(double *)puVar11[iVar7] + *(double *)(param_1 + 0x110), local_28 = iVar8,
                dVar4 <= dVar1)) &&
               (dVar5 = *(double *)puVar11[iVar7 + 1] - *(double *)(param_1 + 0x110), dVar4 = dVar1,
               dVar5 < dVar1)) {
              dVar4 = dVar5;
            }
            goto LAB_0054e6a3;
          }
          iVar7 = iVar7 + -1;
          puVar9 = puVar9 + -1;
        } while (-1 < iVar7);
      }
      local_28 = 0;
      dVar4 = *(double *)*puVar11 - *(double *)(param_1 + 0x110);
      if (dVar4 <= dVar1) {
        dVar1 = dVar4;
      }
      dVar4 = dVar1;
      if (*(int *)(param_1 + 0xe8) != 0) {
        if (dVar1 < *(double *)(param_1 + 200)) {
          dVar1 = *(double *)(param_1 + 200);
        }
        dVar4 = dVar1;
        if ((param_2 != 0) && (*(double *)*puVar11 - dVar1 < *(double *)(param_1 + 0x110))) {
          iVar7 = 0;
          local_28 = param_2;
          dVar4 = local_18;
          if (-1 < param_2 + -1) {
            do {
              if (*(double *)(param_1 + 0x110) + *(double *)(param_1 + 0x110) <=
                  *(double *)puVar11[1] - *(double *)*puVar11) {
                dVar4 = *(double *)*puVar11 + *(double *)(param_1 + 0x110);
                local_28 = iVar7 + 1;
                break;
              }
              iVar7 = iVar7 + 1;
              puVar11 = puVar11 + 1;
            } while (iVar7 <= param_2 + -1);
          }
        }
      }
    }
  }
LAB_0054e6a3:
  if (param_7 != 0) {
    *param_8 = dVar4 - *pdVar3;
    *param_9 = local_20 - pdVar3[1];
    return 0;
  }
  *pdVar3 = dVar4;
  *(undefined4 *)(pdVar3 + 1) = (undefined4)local_20;
  *(undefined4 *)((int)pdVar3 + 0xc) = local_20._4_4_;
  if (local_28 == param_2) {
    FUN_0054da10(param_2);
    return local_28 - param_2;
  }
  FUN_0054ff50(param_2,local_28);
  return local_28 - param_2;
}


