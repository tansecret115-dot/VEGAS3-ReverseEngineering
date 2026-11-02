/* Module: mpgvout.004
   Function: FUN_10024c3c
   Address: 10024c3c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_10024c3c(int param_1,int param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_EBX;
  double dVar8;
  
  iVar1 = *(int *)(param_1 + 0x6a4) + param_2 * 0x3c;
  if (*(int *)(param_1 + 0x80) == 1) {
    uVar6 = *(int *)(iVar1 + 0x28) * 8;
    uVar4 = *(uint *)(iVar1 + 0x30);
    if (uVar4 <= uVar6 && uVar6 - uVar4 != 0) {
      uVar6 = uVar4;
    }
    dVar8 = *(double *)(param_1 + 0x458);
    dVar3 = (double)((uVar4 >> 5) + (*(int *)(iVar1 + 0x28) + uVar6 >> 1)) * _DAT_10024c24 + 1.0;
    dVar8 = floor(((double)(*(int *)(param_1 + 0x84) * 2) * (dVar3 + dVar3 + dVar8)) /
                  (dVar3 + dVar8 + dVar8));
    iVar5 = (int)ROUND(dVar8);
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    else if (0x70 < iVar5) {
      iVar5 = 0x70;
    }
    if (*(int *)(param_1 + 0x5c8) == 0) {
      uVar6 = *(int *)(iVar5 * 4 + 0x1003ae68) * 2;
    }
    else {
      uVar6 = *(uint *)(&DAT_100336c0 + *(int *)(&DAT_10033740 + iVar5 * 4) * 4);
    }
    goto LAB_10024f0a;
  }
  iVar5 = *(int *)(param_1 + 0x5bc);
  dVar8 = ((double)(*(int *)(param_1 + 0x444) + 0x1f) *
          (((*(double *)(param_1 + 0x390) +
            ((double)*(longlong *)(*(int *)(param_1 + 0x24) + 0x38) - *(double *)(param_1 + 0x3a8)))
           - (double)param_2 * *(double *)(param_1 + 0x398)) / (double)*(int *)(param_1 + 0x408))) /
          *(double *)(param_1 + 0x398);
  if (iVar5 == 2) {
LAB_10024db5:
    dVar8 = dVar8 * _DAT_10024c2c;
  }
  else if (iVar5 < 3) {
    if (iVar5 == 1) goto LAB_10024db5;
  }
  else if (iVar5 == 3) goto LAB_10024db5;
  if ((*(byte *)(iVar1 + 1) & 0xc) == 0) {
    uVar6 = *(int *)(iVar1 + 0x28) * 8;
    uVar4 = *(uint *)(iVar1 + 0x30);
    if (uVar4 <= uVar6 && uVar6 - uVar4 != 0) {
      uVar6 = uVar4;
    }
    unaff_EBX = (uVar4 >> 5) + (*(int *)(iVar1 + 0x28) + uVar6 >> 1);
  }
  else if (*(int *)(param_1 + 0x5bc) == 2) {
    unaff_EBX = (uint)(*(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x30)) >> 1;
  }
  else if (*(int *)(param_1 + 0x5bc) == 3) {
    unaff_EBX = *(uint *)(iVar1 + 0x30);
    if (*(uint *)(iVar1 + 0x30) < *(uint *)(iVar1 + 0x34)) {
      unaff_EBX = *(uint *)(iVar1 + 0x34);
    }
  }
  dVar3 = (double)unaff_EBX * _DAT_10024c24 + 1.0;
  if (*(int *)(param_1 + 0x5bc) == 1) {
    dVar2 = *(double *)(param_1 + 0x350);
  }
  else if (*(int *)(param_1 + 0x5bc) == 2) {
    dVar2 = *(double *)(param_1 + 0x358);
  }
  else {
    dVar2 = *(double *)(param_1 + 0x360);
  }
  dVar8 = floor((dVar8 + dVar8) *
                ((*(double *)(param_1 + 0x458) + dVar2 * dVar3) /
                (dVar3 + dVar2 * *(double *)(param_1 + 0x458))) + _DAT_10024c34);
  iVar5 = (int)ROUND(dVar8);
  if (iVar5 < 1) {
    iVar5 = 1;
  }
  else if (0x70 < iVar5) {
    iVar5 = 0x70;
  }
  if (*(int *)(param_1 + 0x5c8) == 0) {
    uVar6 = *(int *)(iVar5 * 4 + 0x1003ae68) * 2;
  }
  else {
    uVar6 = *(uint *)(&DAT_100336c0 + *(int *)(&DAT_10033740 + iVar5 * 4) * 4);
  }
  uVar4 = *(uint *)(param_1 + 0x3b8);
  if (((int)uVar4 < (int)(((int)(uVar6 + 3) >> 2) + uVar6)) &&
     ((int)(uVar6 - ((int)(uVar6 + 1) >> 2)) < (int)uVar4)) {
    uVar6 = uVar4;
  }
LAB_10024f0a:
  if (*(int *)(param_1 + 0x28) < 2) {
    uVar4 = 2;
    if (0x1fff < *(uint *)(iVar1 + 0x2c)) {
      uVar4 = 4;
    }
    if ((int)uVar6 < (int)uVar4) {
      uVar6 = uVar4;
    }
  }
  else {
    uVar4 = *(uint *)(iVar1 + 0x2c);
    if (uVar4 < 0x4000) {
      if (uVar4 < 0x2000) {
        uVar7 = 1;
        if (0x71c < uVar4) {
          uVar7 = 2;
        }
      }
      else {
        uVar7 = 3;
      }
    }
    else {
      uVar7 = 4;
    }
    if ((int)uVar6 < (int)uVar7) {
      uVar6 = uVar7;
    }
  }
  *(double *)(param_1 + 0x3b0) = (double)(int)uVar6 + *(double *)(param_1 + 0x3b0);
  if (*(uint *)(param_1 + 0x4cc) < uVar6) {
    *(uint *)(param_1 + 0x4cc) = uVar6;
  }
  if (uVar6 < *(uint *)(param_1 + 0x4c8)) {
    *(uint *)(param_1 + 0x4c8) = uVar6;
  }
  uVar7 = uVar6 + *(int *)(param_1 + 0x4a8);
  uVar4 = *(int *)(param_1 + 0x4a4) + 1;
  *(uint *)(param_1 + 0x4a8) = uVar7;
  *(uint *)(param_1 + 0x4a4) = uVar4;
  *(uint *)(param_1 + 0x4d0) = uVar7 / uVar4;
  return uVar6;
}


