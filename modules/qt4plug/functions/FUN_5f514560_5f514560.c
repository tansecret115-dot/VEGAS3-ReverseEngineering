/* Module: qt4plug.dll
   Function: FUN_5f514560
   Address: 5f514560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f514730) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f514560(float *param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  undefined8 local_28;
  
  iVar9 = *(int *)(param_4 + 0xc);
  uVar8 = *(uint *)(param_4 + 8);
  uVar5 = 0;
  iVar6 = 0;
  dVar3 = _DAT_5f596570;
  if ((-1 < iVar9) && ((0 < iVar9 || (uVar8 != 0)))) {
    do {
      do {
        dVar3 = dVar3 + (double)*(float *)(param_2 + uVar5 * 8);
        bVar10 = 0xfffffffe < uVar5;
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + (uint)bVar10;
      } while (iVar6 < iVar9);
    } while ((iVar6 <= iVar9) && (uVar5 < uVar8));
  }
  dVar3 = dVar3 / (double)*(longlong *)(param_4 + 8);
  iVar6 = *(int *)(param_4 + 0x10);
  fVar4 = (float)iVar6;
  if (*(int *)(param_4 + 0x18) == 0) {
    fVar11 = (float10)iVar6 * (float10)_DAT_5f596678;
  }
  else {
    fVar11 = (float10)*(int *)(param_4 + 0x14);
  }
  uVar5 = 0;
  iVar7 = 0;
  if ((-1 < iVar9) && ((0 < iVar9 || (uVar8 != 0)))) {
    do {
      do {
        iVar9 = uVar5 * 8;
        bVar10 = 0xfffffffe < uVar5;
        uVar5 = uVar5 + 1;
        iVar7 = iVar7 + (uint)bVar10;
        param_1[uVar5 * 2 + -2] =
             ((*(float *)(param_2 + iVar9) - (float)dVar3) * (float)*(double *)(param_4 + 0x30) +
             (float)dVar3) * (float)((double)iVar6 / dVar3);
        *(undefined2 *)(param_1 + uVar5 * 2 + -1) = *(undefined2 *)(param_2 + -4 + uVar5 * 8);
      } while (iVar7 < *(int *)(param_4 + 0xc));
    } while ((iVar7 <= *(int *)(param_4 + 0xc)) && (uVar5 < *(uint *)(param_4 + 8)));
  }
  fVar1 = *param_1;
  iVar9 = *(int *)(param_4 + 0xc);
  fVar2 = *param_1;
  uVar8 = 0;
  iVar6 = 0;
  if ((-1 < iVar9) && ((0 < iVar9 || (*(int *)(param_4 + 8) != 0)))) {
    do {
      if (fVar1 < param_1[uVar8 * 2]) {
        fVar1 = param_1[uVar8 * 2];
      }
      if (param_1[uVar8 * 2] < fVar2) {
        fVar2 = param_1[uVar8 * 2];
      }
      bVar10 = 0xfffffffe < uVar8;
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + (uint)bVar10;
    } while ((iVar6 < iVar9) || ((iVar6 <= iVar9 && (uVar8 < *(uint *)(param_4 + 8)))));
  }
  if ((fVar4 - fVar2 != (float)_DAT_5f596570) &&
     (fVar1 = fVar4 / (fVar4 - fVar2), fVar1 < (float)_DAT_5f596670)) {
    uVar8 = 0;
    iVar6 = 0;
    if ((-1 < iVar9) && ((0 < iVar9 || (*(int *)(param_4 + 8) != 0)))) {
      do {
        do {
          iVar9 = uVar8 * 2;
          bVar10 = 0xfffffffe < uVar8;
          uVar8 = uVar8 + 1;
          iVar6 = iVar6 + (uint)bVar10;
          param_1[uVar8 * 2 + -2] = fVar4 - (fVar4 - param_1[iVar9]) * fVar1;
        } while (iVar6 < *(int *)(param_4 + 0xc));
      } while ((iVar6 <= *(int *)(param_4 + 0xc)) && (uVar8 < *(uint *)(param_4 + 8)));
    }
  }
  uVar8 = 0;
  fVar12 = (float10)_DAT_5f596570;
  iVar9 = 0;
  local_28 = 0;
  if ((-1 < *(int *)(param_4 + 0xc)) &&
     ((0 < *(int *)(param_4 + 0xc) || (*(int *)(param_4 + 8) != 0)))) {
    do {
      fVar13 = ((float10)local_28 + (float10)_DAT_5f596670) * fVar11;
      if ((float10)param_1[uVar8 * 2] + fVar12 <= fVar13) {
LAB_5f514726:
        if ((iVar9 < 1) && (iVar9 < 0)) goto LAB_5f514736;
        fVar12 = fVar12 + (float10)param_1[uVar8 * 2];
      }
      else {
        if (-1 < iVar9) {
          param_1[uVar8 * 2] =
               (float)((float10)param_1[uVar8 * 2] -
                      (((float10)param_1[uVar8 * 2] + fVar12) - fVar13));
          goto LAB_5f514726;
        }
LAB_5f514736:
        if (fVar11 <= (float10)param_1[uVar8 * 2]) {
          fVar12 = fVar11 + fVar12;
        }
        else {
          fVar12 = (float10)param_1[uVar8 * 2] + fVar12;
        }
      }
      bVar10 = 0xfffffffe < uVar8;
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + (uint)bVar10;
      local_28 = CONCAT44(iVar9,uVar8);
    } while ((iVar9 < *(int *)(param_4 + 0xc)) ||
            ((iVar9 <= *(int *)(param_4 + 0xc) && (uVar8 < *(uint *)(param_4 + 8)))));
  }
  return;
}


