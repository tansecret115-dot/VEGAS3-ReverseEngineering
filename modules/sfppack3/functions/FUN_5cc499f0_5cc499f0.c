/* Module: sfppack3.dll
   Function: FUN_5cc499f0
   Address: 5cc499f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cc499f0(void *this,int param_1,short *param_2,uint *param_3)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  uint local_140;
  int local_130;
  int local_12c [74];
  
  local_130 = 0;
  uVar1 = *param_3;
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x160) + 2);
  iVar3 = FUN_5cc46870(this,local_12c);
  if ((((iVar3 != 0) || (*(int *)((int)this + 0x164) == 0)) ||
      ((param_1 == 0 && (*(int *)((int)this + 0x14c) != 0)))) &&
     (local_130 = FUN_5cc490f0(this,local_12c,param_1), local_130 < 0)) {
    return local_130;
  }
  *(undefined4 *)((int)this + 0x14c) = 1;
  uVar4 = uVar1;
  psVar2 = param_2;
  if (*(int *)((int)this + 0x20d0) == 0) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (_DAT_5cc87bf8 <= *(double *)((int)this + 0x20c8)) {
        *(double *)((int)this + 0x20c8) = *(double *)((int)this + 0x20c8) - _DAT_5cc87bf8;
      }
      uVar7 = 0;
      psVar5 = psVar2;
      if (uVar6 != 0) {
        do {
          iVar3 = FUN_5cc49940(this);
          *psVar5 = (short)iVar3;
          uVar7 = uVar7 + 1;
          psVar5 = psVar5 + 1;
        } while (uVar7 < uVar6);
      }
      *(double *)((int)this + 0x20c8) =
           *(double *)((int)this + 0x20c0) + *(double *)((int)this + 0x20c8);
      psVar2 = psVar2 + uVar6;
    }
  }
  else {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (_DAT_5cc87bf8 <= *(double *)((int)this + 0x20c8)) {
        *(double *)((int)this + 0x20c8) = *(double *)((int)this + 0x20c8) - _DAT_5cc87bf8;
      }
      if (_DAT_5cc87bf8 <= *(double *)((int)this + 0x20d8)) {
        *(double *)((int)this + 0x20d8) = *(double *)((int)this + 0x20d8) - _DAT_5cc87bf8;
      }
      iVar3 = FUN_5cc49940(this);
      *psVar2 = (short)iVar3;
      iVar3 = FUN_5cc49940(this);
      psVar2[1] = (short)iVar3;
      *(double *)((int)this + 0x20c8) =
           *(double *)((int)this + 0x20c8) + *(double *)((int)this + 0x20c0);
      *(double *)((int)this + 0x20d8) =
           *(double *)((int)this + 0x20d8) + *(double *)((int)this + 0x20c0);
      psVar2 = psVar2 + uVar6;
    }
  }
  if (DAT_5cc982c0 != 0) goto LAB_5cc49d73;
  uVar6 = *(uint *)(*(int *)((int)this + 0x160) + 4);
  if (*(int *)((int)this + 0x2208) == 0) {
    iVar3 = *(int *)((int)this + 0x21f4) - uVar1;
    *(int *)((int)this + 0x21f4) = iVar3;
    if (iVar3 < 1) {
      uVar4 = rand();
      *(uint *)((int)this + 0x21f4) = (uVar4 & 3) * (uVar6 >> 4) + uVar6 * 3;
      uVar4 = rand();
      *(uint *)((int)this + 0x2200) = (uVar4 & 0x1f) + 1;
      uVar4 = rand();
      *(uint *)((int)this + 0x2204) = (uVar4 & 0x1f) + 1;
      *(uint *)((int)this + 0x2208) = uVar6 >> 3;
      _DAT_5cc9ebd4 = 0;
      _DAT_5cc9ebd8 = 0;
      goto LAB_5cc49c7f;
    }
    local_140 = 0;
  }
  else {
LAB_5cc49c7f:
    uVar6 = *(uint *)((int)this + 0x2208);
    local_140 = uVar1;
    if (uVar6 <= uVar1) {
      local_140 = uVar6;
    }
    *(uint *)((int)this + 0x2208) = uVar6 - local_140;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x160) + 2);
  for (; local_140 != 0; local_140 = local_140 - 1) {
    DAT_5cc9ebcc = DAT_5cc9ebcc + *(int *)((int)this + 0x2200);
    iVar3 = ftol();
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    *param_2 = *param_2 + (short)iVar3;
    if (1 < uVar6) {
      DAT_5cc9ebd0 = DAT_5cc9ebd0 + 1 + *(int *)((int)this + 0x2204);
      iVar3 = ftol();
      if (iVar3 < -0x8000) {
        iVar3 = -0x8000;
      }
      else if (0x7fff < iVar3) {
        iVar3 = 0x7fff;
      }
      param_2[1] = param_2[1] + (short)iVar3;
    }
    param_2 = param_2 + uVar6;
  }
LAB_5cc49d73:
  *param_3 = uVar1;
  return local_130;
}


