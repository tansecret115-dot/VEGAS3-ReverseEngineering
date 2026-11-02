/* Module: sfppack3.dll
   Function: FUN_5cc4a670
   Address: 5cc4a670
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cc4a670(void *this,int param_1,double *param_2,uint *param_3)

{
  uint uVar1;
  double *pdVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  double *pdVar6;
  float10 fVar7;
  uint local_140;
  int local_138;
  uint local_134;
  int local_12c [74];
  
  local_138 = 0;
  uVar1 = *param_3;
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x160) + 2);
  iVar3 = FUN_5cc46870(this,local_12c);
  if ((((iVar3 != 0) || (*(int *)((int)this + 0x164) == 0)) ||
      ((param_1 == 0 && (*(int *)((int)this + 0x14c) != 0)))) &&
     (local_138 = FUN_5cc490f0(this,local_12c,param_1), local_138 < 0)) {
    return local_138;
  }
  *(undefined4 *)((int)this + 0x14c) = 1;
  uVar4 = uVar1;
  pdVar2 = param_2;
  if (*(int *)((int)this + 0x20d0) == 0) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (_DAT_5cc87bf8 <= *(double *)((int)this + 0x20c8)) {
        *(double *)((int)this + 0x20c8) = *(double *)((int)this + 0x20c8) - _DAT_5cc87bf8;
      }
      local_134 = 0;
      pdVar6 = pdVar2;
      if (uVar5 != 0) {
        do {
          fVar7 = FUN_5cc4a600((int)this,*pdVar6,*(undefined4 *)((int)this + 0x20c8),
                               *(undefined4 *)((int)this + 0x20cc),local_134);
          *pdVar6 = (double)fVar7;
          local_134 = local_134 + 1;
          pdVar6 = pdVar6 + 1;
        } while (local_134 < uVar5);
      }
      *(double *)((int)this + 0x20c8) =
           *(double *)((int)this + 0x20c0) + *(double *)((int)this + 0x20c8);
      pdVar2 = pdVar2 + uVar5;
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
      fVar7 = FUN_5cc4a600((int)this,*pdVar2,*(undefined4 *)((int)this + 0x20c8),
                           *(undefined4 *)((int)this + 0x20cc),0);
      *pdVar2 = (double)fVar7;
      fVar7 = FUN_5cc4a600((int)this,pdVar2[1],*(undefined4 *)((int)this + 0x20d8),
                           *(undefined4 *)((int)this + 0x20dc),1);
      pdVar2[1] = (double)fVar7;
      *(double *)((int)this + 0x20c8) =
           *(double *)((int)this + 0x20c8) + *(double *)((int)this + 0x20c0);
      *(double *)((int)this + 0x20d8) =
           *(double *)((int)this + 0x20d8) + *(double *)((int)this + 0x20c0);
      pdVar2 = pdVar2 + uVar5;
    }
  }
  if (DAT_5cc982c0 != 0) goto LAB_5cc4a9ae;
  uVar5 = *(uint *)(*(int *)((int)this + 0x160) + 4);
  if (*(int *)((int)this + 0x2208) == 0) {
    iVar3 = *(int *)((int)this + 0x21f4) - uVar1;
    *(int *)((int)this + 0x21f4) = iVar3;
    if (iVar3 < 1) {
      uVar4 = rand();
      *(uint *)((int)this + 0x21f4) = (uVar4 & 3) * (uVar5 >> 4) + uVar5 * 3;
      uVar4 = rand();
      *(uint *)((int)this + 0x2200) = (uVar4 & 0x1f) + 1;
      uVar4 = rand();
      *(uint *)((int)this + 0x2204) = (uVar4 & 0x1f) + 1;
      *(uint *)((int)this + 0x2208) = uVar5 >> 3;
      _DAT_5cc9ebd4 = 0;
      _DAT_5cc9ebd8 = 0;
      goto LAB_5cc4a905;
    }
    local_140 = 0;
  }
  else {
LAB_5cc4a905:
    uVar5 = *(uint *)((int)this + 0x2208);
    local_140 = uVar1;
    if (uVar5 <= uVar1) {
      local_140 = uVar5;
    }
    *(uint *)((int)this + 0x2208) = uVar5 - local_140;
  }
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x160) + 2);
  for (; local_140 != 0; local_140 = local_140 - 1) {
    uVar4 = DAT_5cc9ebb4 % *(uint *)((int)this + 0x21f8);
    DAT_5cc9ebb4 = DAT_5cc9ebb4 + *(int *)((int)this + 0x2200);
    *param_2 = (double)(*(float *)(*(int *)((int)this + 0x21fc) + uVar4 * 4) + (float)*param_2);
    if (1 < uVar5) {
      uVar4 = DAT_5cc9ebb8 % *(uint *)((int)this + 0x21f8);
      DAT_5cc9ebb8 = DAT_5cc9ebb8 + 1 + *(int *)((int)this + 0x2204);
      param_2[1] = (double)(*(float *)(*(int *)((int)this + 0x21fc) + uVar4 * 4) + (float)param_2[1]
                           );
    }
    param_2 = param_2 + uVar5;
  }
LAB_5cc4a9ae:
  *param_3 = uVar1;
  return local_138;
}


