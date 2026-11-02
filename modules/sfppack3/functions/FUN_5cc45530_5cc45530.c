/* Module: sfppack3.dll
   Function: FUN_5cc45530
   Address: 5cc45530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cc45530(void *this,int param_1,short *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  uint local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  int local_230 [139];
  
  uVar1 = (uint)*(ushort *)(*(int *)((int)this + 0x260) + 2);
  local_248 = *param_3;
  iVar2 = FUN_5cc41e60(this,local_230,param_1);
  if (iVar2 < 0) {
    return iVar2;
  }
  uVar5 = 0;
  uVar3 = local_248 * uVar1;
  psVar6 = param_2;
  if (uVar3 != 0) {
    do {
      uStack_23c = (undefined4)((ulonglong)((double)(int)*psVar6 * _DAT_5cc87d78) >> 0x20);
      local_240 = SUB84((double)(int)*psVar6 * _DAT_5cc87d78,0);
      FUN_5cc45e90((int)this,local_240,uStack_23c,uVar5 % uVar1);
      iVar4 = ftol();
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
      else if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      *psVar6 = (short)iVar4;
      psVar6 = psVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (DAT_5cc982c0 != 0) {
    return iVar2;
  }
  uVar1 = *(uint *)(*(int *)((int)this + 0x260) + 4);
  if (*(int *)((int)this + 0x3860) == 0) {
    iVar4 = *(int *)((int)this + 0x384c) - local_248;
    *(int *)((int)this + 0x384c) = iVar4;
    if (0 < iVar4) {
      local_248 = 0;
      goto LAB_5cc4569c;
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
LAB_5cc4569c:
  uVar1 = (uint)*(ushort *)(*(int *)((int)this + 0x260) + 2);
  for (; local_248 != 0; local_248 = local_248 - 1) {
    DAT_5cc9ebcc = DAT_5cc9ebcc + *(int *)((int)this + 0x3858);
    iVar4 = ftol();
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    *param_2 = *param_2 + (short)iVar4;
    if (1 < uVar1) {
      DAT_5cc9ebd0 = DAT_5cc9ebd0 + 1 + *(int *)((int)this + 0x385c);
      iVar4 = ftol();
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
      else if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      param_2[1] = param_2[1] + (short)iVar4;
    }
    param_2 = param_2 + uVar1;
  }
  return iVar2;
}


