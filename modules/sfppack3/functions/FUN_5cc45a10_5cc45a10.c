/* Module: sfppack3.dll
   Function: FUN_5cc45a10
   Address: 5cc45a10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cc45a10(void *this,int param_1,float *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float10 fVar7;
  uint local_248;
  undefined4 local_238;
  undefined4 uStack_234;
  int local_230 [139];
  
  uVar1 = (uint)*(ushort *)(*(int *)((int)this + 0x260) + 2);
  local_248 = *param_3;
  if (param_4 != 0) {
    *param_3 = 0;
    return 1;
  }
  iVar2 = FUN_5cc41e60(this,local_230,param_1);
  if (iVar2 < 0) {
    return iVar2;
  }
  uVar5 = 0;
  uVar3 = local_248 * uVar1;
  pfVar6 = param_2;
  if (uVar3 != 0) {
    do {
      local_238 = SUB84((double)*pfVar6,0);
      uStack_234 = (undefined4)((ulonglong)(double)*pfVar6 >> 0x20);
      fVar7 = FUN_5cc45e90((int)this,local_238,uStack_234,uVar5 % uVar1);
      *pfVar6 = (float)fVar7;
      pfVar6 = pfVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  *(int *)((int)this + 0x3730) = *(int *)((int)this + 0x3730) + 1;
  if (DAT_5cc982c0 != 0) {
    return iVar2;
  }
  uVar1 = *(uint *)(*(int *)((int)this + 0x260) + 4);
  if (*(int *)((int)this + 0x3860) == 0) {
    iVar4 = *(int *)((int)this + 0x384c) - local_248;
    *(int *)((int)this + 0x384c) = iVar4;
    if (0 < iVar4) {
      local_248 = 0;
      goto LAB_5cc45b6f;
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
  if (uVar1 <= local_248) {
    local_248 = uVar1;
  }
  *(uint *)((int)this + 0x3860) = uVar1 - local_248;
LAB_5cc45b6f:
  uVar1 = (uint)*(ushort *)(*(int *)((int)this + 0x260) + 2);
  for (; local_248 != 0; local_248 = local_248 - 1) {
    uVar3 = DAT_5cc9ebbc % *(uint *)((int)this + 0x3850);
    DAT_5cc9ebbc = DAT_5cc9ebbc + *(int *)((int)this + 0x3858);
    *param_2 = *(float *)(*(int *)((int)this + 0x3854) + uVar3 * 4) + *param_2;
    if (1 < uVar1) {
      uVar3 = DAT_5cc9ebc0 % *(uint *)((int)this + 0x3850);
      DAT_5cc9ebc0 = DAT_5cc9ebc0 + 1 + *(int *)((int)this + 0x385c);
      param_2[1] = *(float *)(*(int *)((int)this + 0x3854) + uVar3 * 4) + param_2[1];
    }
    param_2 = param_2 + uVar1;
  }
  return iVar2;
}


