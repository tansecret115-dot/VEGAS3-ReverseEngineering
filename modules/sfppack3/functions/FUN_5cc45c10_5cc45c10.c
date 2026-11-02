/* Module: sfppack3.dll
   Function: FUN_5cc45c10
   Address: 5cc45c10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cc45c10(void *this,int param_1,double *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  float10 fVar7;
  uint local_240;
  int local_230 [139];
  
  uVar1 = (uint)*(ushort *)(*(int *)((int)this + 0x260) + 2);
  local_240 = *param_3;
  iVar2 = FUN_5cc41e60(this,local_230,param_1);
  if (iVar2 < 0) {
    return iVar2;
  }
  uVar5 = 0;
  uVar3 = local_240 * uVar1;
  pdVar6 = param_2;
  if (uVar3 != 0) {
    do {
      fVar7 = FUN_5cc45e90((int)this,*(undefined4 *)pdVar6,*(undefined4 *)((int)pdVar6 + 4),
                           uVar5 % uVar1);
      *pdVar6 = (double)fVar7;
      pdVar6 = pdVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (DAT_5cc982c0 != 0) {
    return iVar2;
  }
  uVar1 = *(uint *)(*(int *)((int)this + 0x260) + 4);
  if (*(int *)((int)this + 0x3860) == 0) {
    iVar4 = *(int *)((int)this + 0x384c) - local_240;
    *(int *)((int)this + 0x384c) = iVar4;
    if (0 < iVar4) {
      local_240 = 0;
      goto LAB_5cc45d3e;
    }
    uVar3 = rand();
    *(uint *)((int)this + 0x384c) = (uVar3 & 3) * (uVar1 >> 4) + uVar1 * 3;
    uVar3 = rand();
    *(uint *)((int)this + 0x3858) = (uVar3 & 0x1f) + 1;
    uVar3 = rand();
    *(uint *)((int)this + 0x385c) = (uVar3 & 0x1f) + 1;
    *(uint *)((int)this + 0x3860) = uVar1 >> 3;
    _DAT_5cc9ebd4 = 0;
    _DAT_5cc9ebd8 = 0;
  }
  uVar1 = *(uint *)((int)this + 0x3860);
  if (uVar1 <= local_240) {
    local_240 = uVar1;
  }
  *(uint *)((int)this + 0x3860) = uVar1 - local_240;
LAB_5cc45d3e:
  uVar1 = (uint)*(ushort *)(*(int *)((int)this + 0x260) + 2);
  for (; local_240 != 0; local_240 = local_240 - 1) {
    uVar3 = DAT_5cc9ebb4 % *(uint *)((int)this + 0x3850);
    DAT_5cc9ebb4 = DAT_5cc9ebb4 + *(int *)((int)this + 0x3858);
    *param_2 = (double)(*(float *)(*(int *)((int)this + 0x3854) + uVar3 * 4) + (float)*param_2);
    if (1 < uVar1) {
      uVar3 = DAT_5cc9ebb8 % *(uint *)((int)this + 0x3850);
      DAT_5cc9ebb8 = DAT_5cc9ebb8 + 1 + *(int *)((int)this + 0x385c);
      param_2[1] = (double)(*(float *)(*(int *)((int)this + 0x3854) + uVar3 * 4) + (float)param_2[1]
                           );
    }
    param_2 = param_2 + uVar1;
  }
  return iVar2;
}


