/* Module: sftrkfx1.dll
   Function: FUN_5cbab2b0
   Address: 5cbab2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cbab2b0(int param_1,int param_2,int param_3,double param_4,int param_5)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  float10 fVar11;
  
  iVar5 = param_1;
  iVar6 = *(int *)(param_1 + 0x60);
  if (iVar6 == 0) {
    return 0;
  }
  iVar8 = param_3;
  if (((*(uint *)(param_1 + 0x54) & 0x40) != 0) && (param_5 == 0)) {
    iVar8 = 0;
  }
  param_5 = 0x7fffffff;
  param_1 = -0x80000000;
  if (*(int *)(param_2 + 0x28) == 2) {
    iVar2 = *(int *)(iVar5 + 0x5c);
    if ((iVar2 != 0) && (param_5 = *(int *)(iVar2 * 0x20 + 0x10 + param_2), -0x80000000 <= param_5))
    {
      param_1 = param_5;
    }
    if ((uint)(iVar2 + iVar6) < 2) {
      iVar2 = *(int *)((iVar2 + iVar6) * 0x20 + 0x30 + param_2);
      if (param_1 <= iVar2) {
        param_1 = iVar2;
      }
      if (iVar2 <= param_5) {
        param_5 = iVar2;
      }
    }
  }
  uVar7 = *(uint *)(iVar5 + 0x5c);
  uVar10 = iVar6 + uVar7;
  if (uVar7 < uVar10) {
    fVar11 = (float10)param_4;
    piVar9 = (int *)(uVar7 * 0x20 + param_2 + 0x30);
    param_3 = uVar10 - uVar7;
    do {
      if (fVar11 != (float10)_DAT_5cc04098) {
        fVar1 = (float)piVar9[1];
        if (((float10)*(float *)(param_2 + 0xc) <= (float10)fVar1 + fVar11) &&
           (fVar4 = *(float *)(param_2 + 0xc) - fVar1, (float10)fVar4 <= fVar11)) {
          fVar11 = (float10)fVar4;
        }
        if (((float10)fVar1 + fVar11 < (float10)*(float *)(param_2 + 0x14)) &&
           (fVar1 = *(float *)(param_2 + 0x14) - fVar1, fVar11 <= (float10)fVar1)) {
          fVar11 = (float10)fVar1;
        }
      }
      if (iVar8 != 0) {
        iVar6 = *(int *)(param_2 + 0x10) - *piVar9;
        if (iVar6 <= iVar8) {
          iVar8 = iVar6;
        }
        iVar6 = *(int *)(param_2 + 8) - *piVar9;
        if (iVar8 <= iVar6) {
          iVar8 = iVar6;
        }
      }
      piVar9 = piVar9 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  else {
    fVar11 = (float10)param_4;
  }
  if (param_1 <= param_5) goto LAB_5cbab460;
  if (iVar8 != 0) {
    if (iVar8 < 1) {
      iVar6 = *(int *)(uVar7 * 0x20 + 0x30 + param_2);
      if ((iVar6 + iVar8 <= param_5) && (iVar6 = param_5 - iVar6, iVar8 <= iVar6))
      goto LAB_5cbab45e;
    }
    else {
      iVar6 = *(int *)(uVar10 * 0x20 + 0x10 + param_2);
      if ((param_1 <= iVar6 + iVar8) && (iVar6 = param_1 - iVar6, iVar6 <= iVar8)) {
LAB_5cbab45e:
        iVar8 = iVar6;
      }
    }
LAB_5cbab460:
    if (iVar8 != 0) goto LAB_5cbab481;
  }
  if ((float10)_DAT_5cc04098 == fVar11) {
    return 0;
  }
LAB_5cbab481:
  uVar7 = 0;
  if (*(int *)(iVar5 + 0x60) != 0) {
    do {
      iVar6 = (uVar7 + *(int *)(iVar5 + 0x5c)) * 0x20;
      *(int *)(iVar6 + 0x30 + param_2) = *(int *)(iVar6 + 0x30 + param_2) + iVar8;
      iVar6 = (uVar7 + *(int *)(iVar5 + 0x5c)) * 0x20;
      uVar7 = uVar7 + 1;
      *(float *)(iVar6 + 0x34 + param_2) =
           (float)(fVar11 + (float10)*(float *)(iVar6 + 0x34 + param_2));
    } while (uVar7 < *(uint *)(iVar5 + 0x60));
  }
  if (iVar8 < 0) {
    uVar7 = 1;
    piVar9 = (int *)(param_2 + 0x50);
    while( true ) {
      uVar10 = *(int *)(param_2 + 0x28) - 1;
      uVar3 = *(uint *)(iVar5 + 0x5c);
      if (uVar3 < uVar10) {
        uVar10 = uVar3;
      }
      if (uVar10 <= uVar7) break;
      if ((*(int *)(uVar3 * 0x20 + param_2 + 0x30) <= *piVar9) &&
         (iVar6 = FUN_5cba9e60(iVar5,param_2,uVar7), iVar6 != 0)) {
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + -8;
      }
      uVar7 = uVar7 + 1;
      piVar9 = piVar9 + 8;
    }
  }
  else {
    uVar7 = *(int *)(iVar5 + 0x60) + *(int *)(iVar5 + 0x5c);
    if (uVar7 < *(int *)(param_2 + 0x28) - 1U) {
      piVar9 = (int *)(uVar7 * 0x20 + param_2 + 0x30);
      do {
        if ((*piVar9 <=
             *(int *)((*(int *)(iVar5 + 0x60) + *(int *)(iVar5 + 0x5c)) * 0x20 + 0x10 + param_2)) &&
           (iVar6 = FUN_5cba9e60(iVar5,param_2,uVar7), iVar6 != 0)) {
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + -8;
        }
        uVar7 = uVar7 + 1;
        piVar9 = piVar9 + 8;
      } while (uVar7 < *(int *)(param_2 + 0x28) - 1U);
    }
  }
  return 1;
}


