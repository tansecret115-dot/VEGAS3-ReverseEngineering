/* Module: sfppack2.dll
   Function: FUN_5ccf42b0
   Address: 5ccf42b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_5ccf42b0(void *this,undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  
  iVar5 = *(int *)((int)this + 0x4c4);
  iVar6 = *(int *)((int)this + 0x4bc);
  iVar9 = *(int *)(iVar6 + 0xc4 + iVar5 * 200);
  iVar1 = iVar6 + iVar5 * 200;
  iVar5 = iVar6 + (iVar5 + 1U & 0x3f) * 200;
  if ((param_3 < iVar9) || ((param_3 <= iVar9 && (param_2 < *(uint *)(iVar1 + 0xc0))))) {
    puVar8 = (undefined4 *)(param_4 * 0x30 + iVar1);
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *param_1 = *puVar8;
      puVar8 = puVar8 + 1;
      param_1 = param_1 + 1;
    }
    return 0;
  }
  iVar9 = *(int *)(iVar5 + 0xc4);
  uVar7 = *(uint *)(iVar5 + 0xc0);
  while( true ) {
    if ((param_3 < iVar9) || ((param_3 <= iVar9 && (param_2 <= uVar7)))) {
      uVar7 = *(uint *)(iVar1 + 0xc0);
      iVar9 = *(uint *)(iVar5 + 0xc0) - uVar7;
      iVar6 = (*(int *)(iVar5 + 0xc4) - *(int *)(iVar1 + 0xc4)) -
              (uint)(*(uint *)(iVar5 + 0xc0) < uVar7);
      if ((0 < iVar6) || ((dVar3 = _DAT_5cd51520, -1 < iVar6 && (iVar9 != 0)))) {
        dVar3 = (double)CONCAT44((param_3 - *(int *)(iVar1 + 0xc4)) - (uint)(param_2 < uVar7),
                                 param_2 - uVar7) / (double)CONCAT44(iVar6,iVar9);
      }
      iVar6 = param_4 * 0x30;
      *(double *)(param_1 + 2) =
           (*(double *)(iVar6 + 8 + iVar5) - *(double *)(iVar6 + 8 + iVar1)) * dVar3 +
           *(double *)(iVar6 + 8 + iVar1);
      *(double *)(param_1 + 4) =
           (*(double *)(iVar6 + 0x10 + iVar5) - *(double *)(iVar6 + 0x10 + iVar1)) * dVar3 +
           *(double *)(iVar6 + 0x10 + iVar1);
      *(double *)(param_1 + 6) =
           (*(double *)(iVar6 + 0x18 + iVar5) - *(double *)(iVar6 + 0x18 + iVar1)) * dVar3 +
           *(double *)(iVar6 + 0x18 + iVar1);
      pdVar2 = (double *)(iVar6 + 0x28 + iVar1);
      *(double *)(param_1 + 8) =
           (*(double *)(iVar6 + 0x20 + iVar5) - *(double *)(iVar6 + 0x20 + iVar1)) * dVar3 +
           *(double *)(iVar6 + 0x20 + iVar1);
      *(double *)(param_1 + 10) = (*(double *)(iVar6 + 0x28 + iVar5) - *pdVar2) * dVar3 + *pdVar2;
      return 0;
    }
    if ((iVar9 < *(int *)(iVar1 + 0xc4)) ||
       ((((iVar9 <= *(int *)(iVar1 + 0xc4) && (uVar7 <= *(uint *)(iVar1 + 0xc0))) ||
         ((*(int *)((int)this + 0x4c0) == 0x3f && (*(int *)((int)this + 0x4c4) == 0)))) ||
        (*(int *)((int)this + 0x4c4) == *(int *)((int)this + 0x4c0) + -1)))) break;
    uVar7 = *(int *)((int)this + 0x4c4) + 1U & 0x3f;
    *(uint *)((int)this + 0x4c4) = uVar7;
    uVar4 = uVar7 + 1 & 0x3f;
    iVar9 = *(int *)(iVar6 + 0xc4 + uVar4 * 200);
    uVar7 = *(uint *)(iVar6 + 0xc0 + uVar4 * 200);
    iVar1 = iVar5;
    iVar5 = iVar6 + uVar4 * 200;
  }
  puVar8 = (undefined4 *)(param_4 * 0x30 + iVar1);
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_1 = *puVar8;
    puVar8 = puVar8 + 1;
    param_1 = param_1 + 1;
  }
  return 1;
}


