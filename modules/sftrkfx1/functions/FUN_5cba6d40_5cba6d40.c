/* Module: sftrkfx1.dll
   Function: FUN_5cba6d40
   Address: 5cba6d40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cba6d40(void *this,double *param_1,uint param_2,int param_3)

{
  double dVar1;
  double *pdVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  int local_8;
  
  iVar3 = *(int *)((int)this + 0x264);
  pdVar6 = (double *)(*(int *)((int)this + 0x26c) * 0x30 + iVar3);
  pdVar2 = (double *)((*(int *)((int)this + 0x26c) + 1U & 0x3f) * 0x30 + iVar3);
  if ((param_3 < *(int *)((int)pdVar6 + 0x2c)) ||
     ((param_3 <= *(int *)((int)pdVar6 + 0x2c) && (param_2 < *(uint *)(pdVar6 + 5))))) {
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)param_1 = *(undefined4 *)pdVar6;
      pdVar6 = (double *)((int)pdVar6 + 4);
      param_1 = (double *)((int)param_1 + 4);
    }
    return 0;
  }
  iVar5 = *(int *)((int)pdVar2 + 0x2c);
  uVar4 = *(uint *)(pdVar2 + 5);
  local_8 = 0;
  if (iVar5 <= param_3) {
    pdVar7 = pdVar6;
    if (iVar5 < param_3) goto LAB_5cba6da7;
    do {
      pdVar7 = pdVar6;
      if (param_2 <= uVar4) break;
LAB_5cba6da7:
      do {
        pdVar6 = pdVar2;
        if (((iVar5 < *(int *)((int)pdVar7 + 0x2c)) ||
            (((iVar5 <= *(int *)((int)pdVar7 + 0x2c) && (uVar4 <= *(uint *)(pdVar7 + 5))) ||
             (*(int *)((int)this + 0x268) == *(int *)((int)this + 0x26c))))) ||
           (local_8 = local_8 + 1, local_8 == 0x40)) {
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)param_1 = *(undefined4 *)pdVar7;
            pdVar7 = (double *)((int)pdVar7 + 4);
            param_1 = (double *)((int)param_1 + 4);
          }
          return 1;
        }
        uVar4 = *(int *)((int)this + 0x26c) + 1U & 0x3f;
        *(uint *)((int)this + 0x26c) = uVar4;
        pdVar2 = (double *)((uVar4 + 1 & 0x3f) * 0x30 + iVar3);
        iVar5 = *(int *)((int)pdVar2 + 0x2c);
        uVar4 = *(uint *)(pdVar2 + 5);
        pdVar7 = pdVar6;
      } while (iVar5 < param_3);
    } while (iVar5 <= param_3);
  }
  uVar4 = *(uint *)(pdVar6 + 5);
  iVar5 = *(uint *)(pdVar2 + 5) - uVar4;
  iVar3 = (*(int *)((int)pdVar2 + 0x2c) - *(int *)((int)pdVar6 + 0x2c)) -
          (uint)(*(uint *)(pdVar2 + 5) < uVar4);
  if ((0 < iVar3) || ((dVar1 = _DAT_5cc04098, -1 < iVar3 && (iVar5 != 0)))) {
    dVar1 = (double)CONCAT44((param_3 - *(int *)((int)pdVar6 + 0x2c)) - (uint)(param_2 < uVar4),
                             param_2 - uVar4) / (double)CONCAT44(iVar3,iVar5);
  }
  *param_1 = (*pdVar2 - *pdVar6) * dVar1 + *pdVar6;
  param_1[1] = (pdVar2[1] - pdVar6[1]) * dVar1 + pdVar6[1];
  param_1[2] = (pdVar2[2] - pdVar6[2]) * dVar1 + pdVar6[2];
  param_1[3] = (pdVar2[3] - pdVar6[3]) * dVar1 + pdVar6[3];
  param_1[4] = (pdVar2[4] - pdVar6[4]) * dVar1 + pdVar6[4];
  return 0;
}


