/* Module: sfppack3.dll
   Function: FUN_5cc413b0
   Address: 5cc413b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cc413b0(void *this,undefined4 param_1,double *param_2,uint *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_14;
  uint local_10;
  int local_c;
  
  uVar4 = *param_3;
  uVar1 = *(ushort *)(*(int *)((int)this + 0x38) + 2);
  local_10 = uVar4;
  iVar2 = FUN_5cc3e850(this,&local_14);
  if (((iVar2 != 0) || (*(int *)((int)this + 0x3c) == 0)) &&
     (iVar2 = FUN_5cc3ff40(this,&local_14), iVar2 < 0)) {
    return iVar2;
  }
  local_c = FUN_5cc411e0(this,param_2,(uint)uVar1,uVar4);
  if (DAT_5cc982c0 != 0) goto LAB_5cc41540;
  uVar5 = *(uint *)(*(int *)((int)this + 0x38) + 4);
  if (*(int *)((int)this + 0x98) == 0) {
    iVar2 = *(int *)((int)this + 0x84) - uVar4;
    *(int *)((int)this + 0x84) = iVar2;
    if (iVar2 < 1) {
      uVar3 = rand();
      *(uint *)((int)this + 0x84) = (uVar3 & 3) * (uVar5 >> 4) + uVar5 * 3;
      uVar3 = rand();
      *(uint *)((int)this + 0x90) = (uVar3 & 0x1f) + 1;
      uVar3 = rand();
      *(uint *)((int)this + 0x94) = (uVar3 & 0x1f) + 1;
      *(uint *)((int)this + 0x98) = uVar5 >> 3;
      _DAT_5cc9ebd4 = 0;
      _DAT_5cc9ebd8 = 0;
      goto LAB_5cc414a0;
    }
    uVar3 = 0;
  }
  else {
LAB_5cc414a0:
    uVar5 = *(uint *)((int)this + 0x98);
    uVar3 = uVar4;
    if (uVar5 <= uVar4) {
      uVar3 = uVar5;
    }
    *(uint *)((int)this + 0x98) = uVar5 - uVar3;
  }
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x38) + 2);
  for (; uVar4 = local_10, uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar4 = DAT_5cc9ebb4 % *(uint *)((int)this + 0x88);
    DAT_5cc9ebb4 = DAT_5cc9ebb4 + *(int *)((int)this + 0x90);
    *param_2 = (double)(*(float *)(*(int *)((int)this + 0x8c) + uVar4 * 4) + (float)*param_2);
    if (1 < uVar5) {
      uVar4 = DAT_5cc9ebb8 % *(uint *)((int)this + 0x88);
      DAT_5cc9ebb8 = DAT_5cc9ebb8 + 1 + *(int *)((int)this + 0x94);
      param_2[1] = (double)(*(float *)(*(int *)((int)this + 0x8c) + uVar4 * 4) + (float)param_2[1]);
    }
    param_2 = param_2 + uVar5;
  }
LAB_5cc41540:
  *param_3 = uVar4;
  return local_c;
}


