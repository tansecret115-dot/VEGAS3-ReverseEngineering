/* Module: sfppack3.dll
   Function: FUN_5cc407e0
   Address: 5cc407e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cc407e0(void *this,undefined4 param_1,short *param_2,uint *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_8;
  uint local_4;
  
  uVar3 = *param_3;
  uVar1 = *(ushort *)(*(int *)((int)this + 0x38) + 2);
  local_4 = uVar3;
  iVar2 = FUN_5cc3e850(this,&local_8);
  if (((iVar2 != 0) || (*(int *)((int)this + 0x3c) == 0)) &&
     (iVar2 = FUN_5cc3ff40(this,&local_8), iVar2 < 0)) {
    return iVar2;
  }
  iVar2 = FUN_5cc40570(this,param_2,(uint)uVar1,uVar3);
  uVar4 = uVar3;
  if (DAT_5cc982c0 != 0) goto LAB_5cc409ad;
  uVar6 = *(uint *)(*(int *)((int)this + 0x38) + 4);
  if (*(int *)((int)this + 0x98) == 0) {
    iVar5 = *(int *)((int)this + 0x84) - uVar3;
    *(int *)((int)this + 0x84) = iVar5;
    if (iVar5 < 1) {
      uVar4 = rand();
      *(uint *)((int)this + 0x84) = (uVar4 & 3) * (uVar6 >> 4) + uVar6 * 3;
      uVar4 = rand();
      *(uint *)((int)this + 0x90) = (uVar4 & 0x1f) + 1;
      uVar4 = rand();
      *(uint *)((int)this + 0x94) = (uVar4 & 0x1f) + 1;
      *(uint *)((int)this + 0x98) = uVar6 >> 3;
      _DAT_5cc9ebd4 = 0;
      _DAT_5cc9ebd8 = 0;
      uVar4 = local_4;
      goto LAB_5cc408c4;
    }
    uVar3 = 0;
  }
  else {
LAB_5cc408c4:
    uVar6 = *(uint *)((int)this + 0x98);
    if (uVar6 <= uVar4) {
      uVar3 = uVar6;
    }
    *(uint *)((int)this + 0x98) = uVar6 - uVar3;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x38) + 2);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    DAT_5cc9ebcc = DAT_5cc9ebcc + *(int *)((int)this + 0x90);
    iVar5 = ftol();
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    else if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    *param_2 = *param_2 + (short)iVar5;
    if (1 < uVar6) {
      DAT_5cc9ebd0 = DAT_5cc9ebd0 + 1 + *(int *)((int)this + 0x94);
      iVar5 = ftol();
      if (iVar5 < -0x8000) {
        iVar5 = -0x8000;
      }
      else if (0x7fff < iVar5) {
        iVar5 = 0x7fff;
      }
      param_2[1] = param_2[1] + (short)iVar5;
    }
    param_2 = param_2 + uVar6;
  }
LAB_5cc409ad:
  *param_3 = uVar4;
  return iVar2;
}


