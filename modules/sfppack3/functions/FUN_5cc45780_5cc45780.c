/* Module: sfppack3.dll
   Function: FUN_5cc45780
   Address: 5cc45780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cc45780(void *this,int param_1,int *param_2,uint *param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  float10 fVar7;
  uint local_244;
  uint local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  int local_230 [139];
  
  local_244 = *param_3;
  uVar2 = (uint)*(ushort *)(*(int *)((int)this + 0x260) + 2);
  iVar3 = FUN_5cc41e60(this,local_230,param_1);
  if (iVar3 < 0) {
    return iVar3;
  }
  uVar6 = local_244 * uVar2;
  local_240 = 0;
  piVar5 = param_2;
  if (uVar6 != 0) {
    do {
      local_238 = SUB84((double)*piVar5 * _DAT_5cc87d98,0);
      uStack_234 = (undefined4)((ulonglong)((double)*piVar5 * _DAT_5cc87d98) >> 0x20);
      fVar7 = FUN_5cc45e90((int)this,local_238,uStack_234,local_240 % uVar2);
      if ((float10)_DAT_5cc87d88 <= fVar7 * (float10)_DAT_5cc87d90) {
        if (fVar7 * (float10)_DAT_5cc87d90 <= (float10)_DAT_5cc87d80) {
          iVar4 = ftol();
        }
        else {
          iVar4 = 0x7fffffff;
        }
      }
      else {
        iVar4 = -0x80000000;
      }
      *piVar5 = iVar4;
      piVar5 = piVar5 + 1;
      local_240 = local_240 + 1;
    } while (local_240 < uVar6);
  }
  if (DAT_5cc982c0 != 0) {
    return iVar3;
  }
  uVar2 = *(uint *)(*(int *)((int)this + 0x260) + 4);
  if (*(int *)((int)this + 0x3860) == 0) {
    iVar4 = *(int *)((int)this + 0x384c) - local_244;
    *(int *)((int)this + 0x384c) = iVar4;
    if (0 < iVar4) {
      local_244 = 0;
      goto LAB_5cc458f6;
    }
    uVar6 = rand();
    *(uint *)((int)this + 0x384c) = (uVar6 & 3) * (uVar2 >> 4) + uVar2 * 3;
    uVar6 = rand();
    *(uint *)((int)this + 0x3858) = (uVar6 & 0x1f) + 1;
    uVar6 = rand();
    *(uint *)((int)this + 0x385c) = (uVar6 & 0x1f) + 1;
    *(uint *)((int)this + 0x3860) = uVar2 >> 3;
    _DAT_5cc9ebd4 = 0;
    _DAT_5cc9ebd8 = 0;
  }
  uVar2 = *(uint *)((int)this + 0x3860);
  if (uVar2 <= local_244) {
    local_244 = uVar2;
  }
  *(uint *)((int)this + 0x3860) = uVar2 - local_244;
LAB_5cc458f6:
  uVar2 = (uint)*(ushort *)(*(int *)((int)this + 0x260) + 2);
  for (; local_244 != 0; local_244 = local_244 - 1) {
    fVar1 = *(float *)(*(int *)((int)this + 0x3854) +
                      (DAT_5cc9ebc4 % *(uint *)((int)this + 0x3850)) * 4) * (float)_DAT_5cc87d90;
    DAT_5cc9ebc4 = DAT_5cc9ebc4 + *(int *)((int)this + 0x3858);
    if ((float)_DAT_5cc87d88 <= fVar1) {
      if (fVar1 <= (float)_DAT_5cc87d80) {
        iVar4 = ftol();
      }
      else {
        iVar4 = 0x7fffffff;
      }
    }
    else {
      iVar4 = -0x80000000;
    }
    *param_2 = *param_2 + iVar4;
    if (1 < uVar2) {
      fVar1 = *(float *)(*(int *)((int)this + 0x3854) +
                        (DAT_5cc9ebc8 % *(uint *)((int)this + 0x3850)) * 4) * (float)_DAT_5cc87d90;
      DAT_5cc9ebc8 = DAT_5cc9ebc8 + 1 + *(int *)((int)this + 0x385c);
      if ((float)_DAT_5cc87d88 <= fVar1) {
        if (fVar1 <= (float)_DAT_5cc87d80) {
          iVar4 = ftol();
        }
        else {
          iVar4 = 0x7fffffff;
        }
      }
      else {
        iVar4 = -0x80000000;
      }
      param_2[1] = param_2[1] + iVar4;
    }
    param_2 = param_2 + uVar2;
  }
  return iVar3;
}


