/* Module: sfppack3.dll
   Function: FUN_5cc40c50
   Address: 5cc40c50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cc40c50(void *this,undefined4 param_1,int *param_2,uint *param_3)

{
  ushort uVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_4;
  
  uVar2 = *param_3;
  uVar1 = *(ushort *)(*(int *)((int)this + 0x38) + 2);
  iVar4 = FUN_5cc3e850(this,&local_4);
  if (((iVar4 != 0) || (*(int *)((int)this + 0x3c) == 0)) &&
     (iVar4 = FUN_5cc3ff40(this,&local_4), iVar4 < 0)) {
    return iVar4;
  }
  iVar4 = FUN_5cc409d0(this,param_2,(uint)uVar1,uVar2);
  if (DAT_5cc982c0 != 0) goto LAB_5cc40e40;
  uVar7 = *(uint *)(*(int *)((int)this + 0x38) + 4);
  if (*(int *)((int)this + 0x98) == 0) {
    iVar6 = *(int *)((int)this + 0x84) - uVar2;
    *(int *)((int)this + 0x84) = iVar6;
    if (iVar6 < 1) {
      uVar5 = rand();
      *(uint *)((int)this + 0x84) = (uVar5 & 3) * (uVar7 >> 4) + uVar7 * 3;
      uVar5 = rand();
      *(uint *)((int)this + 0x90) = (uVar5 & 0x1f) + 1;
      uVar5 = rand();
      *(uint *)((int)this + 0x94) = (uVar5 & 0x1f) + 1;
      *(uint *)((int)this + 0x98) = uVar7 >> 3;
      _DAT_5cc9ebd4 = 0;
      _DAT_5cc9ebd8 = 0;
      goto LAB_5cc40d34;
    }
    uVar5 = 0;
  }
  else {
LAB_5cc40d34:
    uVar7 = *(uint *)((int)this + 0x98);
    uVar5 = uVar2;
    if (uVar7 <= uVar2) {
      uVar5 = uVar7;
    }
    *(uint *)((int)this + 0x98) = uVar7 - uVar5;
  }
  uVar7 = (uint)*(ushort *)(*(int *)((int)this + 0x38) + 2);
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    fVar3 = *(float *)(*(int *)((int)this + 0x8c) + (DAT_5cc9ebc4 % *(uint *)((int)this + 0x88)) * 4
                      ) * (float)_DAT_5cc87d90;
    DAT_5cc9ebc4 = DAT_5cc9ebc4 + *(int *)((int)this + 0x90);
    if ((float)_DAT_5cc87d88 <= fVar3) {
      if (fVar3 <= (float)_DAT_5cc87d80) {
        iVar6 = ftol();
      }
      else {
        iVar6 = 0x7fffffff;
      }
    }
    else {
      iVar6 = -0x80000000;
    }
    *param_2 = *param_2 + iVar6;
    if (1 < uVar7) {
      fVar3 = *(float *)(*(int *)((int)this + 0x8c) +
                        (DAT_5cc9ebc8 % *(uint *)((int)this + 0x88)) * 4) * (float)_DAT_5cc87d90;
      DAT_5cc9ebc8 = DAT_5cc9ebc8 + 1 + *(int *)((int)this + 0x94);
      if ((float)_DAT_5cc87d88 <= fVar3) {
        if (fVar3 <= (float)_DAT_5cc87d80) {
          iVar6 = ftol();
        }
        else {
          iVar6 = 0x7fffffff;
        }
      }
      else {
        iVar6 = -0x80000000;
      }
      param_2[1] = param_2[1] + iVar6;
    }
    param_2 = param_2 + uVar7;
  }
LAB_5cc40e40:
  *param_3 = uVar2;
  return iVar4;
}


