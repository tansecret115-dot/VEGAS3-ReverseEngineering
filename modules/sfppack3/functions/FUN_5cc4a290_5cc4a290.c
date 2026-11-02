/* Module: sfppack3.dll
   Function: FUN_5cc4a290
   Address: 5cc4a290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cc4a290(void *this,int param_1,float *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  float10 fVar8;
  uint local_140;
  int local_130;
  int local_12c [74];
  
  local_130 = 0;
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x160) + 2);
  uVar1 = *param_3;
  if (param_4 != 0) {
    *param_3 = 0;
    return 1;
  }
  iVar4 = FUN_5cc46870(this,local_12c);
  if ((((iVar4 != 0) || (*(int *)((int)this + 0x164) == 0)) ||
      ((param_1 == 0 && (*(int *)((int)this + 0x14c) != 0)))) &&
     (local_130 = FUN_5cc490f0(this,local_12c,param_1), local_130 < 0)) {
    return local_130;
  }
  *(undefined4 *)((int)this + 0x14c) = 1;
  uVar5 = uVar1;
  pfVar2 = param_2;
  if (*(int *)((int)this + 0x20d0) == 0) {
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      if (_DAT_5cc87bf8 <= *(double *)((int)this + 0x20c8)) {
        *(double *)((int)this + 0x20c8) = *(double *)((int)this + 0x20c8) - _DAT_5cc87bf8;
      }
      uVar7 = 0;
      pfVar6 = pfVar2;
      if (uVar3 != 0) {
        do {
          fVar8 = FUN_5cc4a220((int)this,*pfVar6,*(undefined4 *)((int)this + 0x20c8),
                               *(undefined4 *)((int)this + 0x20cc),uVar7);
          *pfVar6 = (float)fVar8;
          uVar7 = uVar7 + 1;
          pfVar6 = pfVar6 + 1;
        } while (uVar7 < uVar3);
      }
      *(double *)((int)this + 0x20c8) =
           *(double *)((int)this + 0x20c0) + *(double *)((int)this + 0x20c8);
      pfVar2 = pfVar2 + uVar3;
    }
  }
  else {
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      if (_DAT_5cc87bf8 <= *(double *)((int)this + 0x20c8)) {
        *(double *)((int)this + 0x20c8) = *(double *)((int)this + 0x20c8) - _DAT_5cc87bf8;
      }
      if (_DAT_5cc87bf8 <= *(double *)((int)this + 0x20d8)) {
        *(double *)((int)this + 0x20d8) = *(double *)((int)this + 0x20d8) - _DAT_5cc87bf8;
      }
      fVar8 = FUN_5cc4a220((int)this,*pfVar2,*(undefined4 *)((int)this + 0x20c8),
                           *(undefined4 *)((int)this + 0x20cc),0);
      *pfVar2 = (float)fVar8;
      fVar8 = FUN_5cc4a220((int)this,pfVar2[1],*(undefined4 *)((int)this + 0x20d8),
                           *(undefined4 *)((int)this + 0x20dc),1);
      pfVar2[1] = (float)fVar8;
      *(double *)((int)this + 0x20c8) =
           *(double *)((int)this + 0x20c8) + *(double *)((int)this + 0x20c0);
      *(double *)((int)this + 0x20d8) =
           *(double *)((int)this + 0x20d8) + *(double *)((int)this + 0x20c0);
      pfVar2 = pfVar2 + uVar3;
    }
  }
  if (DAT_5cc982c0 != 0) goto LAB_5cc4a5e1;
  uVar3 = *(uint *)(*(int *)((int)this + 0x160) + 4);
  if (*(int *)((int)this + 0x2208) == 0) {
    iVar4 = *(int *)((int)this + 0x21f4) - uVar1;
    *(int *)((int)this + 0x21f4) = iVar4;
    if (iVar4 < 1) {
      uVar5 = rand();
      *(uint *)((int)this + 0x21f4) = (uVar5 & 3) * (uVar3 >> 4) + uVar3 * 3;
      uVar5 = rand();
      *(uint *)((int)this + 0x2200) = (uVar5 & 0x1f) + 1;
      uVar5 = rand();
      *(uint *)((int)this + 0x2204) = (uVar5 & 0x1f) + 1;
      *(uint *)((int)this + 0x2208) = uVar3 >> 3;
      _DAT_5cc9ebd4 = 0;
      _DAT_5cc9ebd8 = 0;
      goto LAB_5cc4a538;
    }
    local_140 = 0;
  }
  else {
LAB_5cc4a538:
    uVar3 = *(uint *)((int)this + 0x2208);
    local_140 = uVar1;
    if (uVar3 <= uVar1) {
      local_140 = uVar3;
    }
    *(uint *)((int)this + 0x2208) = uVar3 - local_140;
  }
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x160) + 2);
  for (; local_140 != 0; local_140 = local_140 - 1) {
    uVar5 = DAT_5cc9ebbc % *(uint *)((int)this + 0x21f8);
    DAT_5cc9ebbc = DAT_5cc9ebbc + *(int *)((int)this + 0x2200);
    *param_2 = *(float *)(*(int *)((int)this + 0x21fc) + uVar5 * 4) + *param_2;
    if (1 < uVar3) {
      uVar5 = DAT_5cc9ebc0 % *(uint *)((int)this + 0x21f8);
      DAT_5cc9ebc0 = DAT_5cc9ebc0 + 1 + *(int *)((int)this + 0x2204);
      param_2[1] = *(float *)(*(int *)((int)this + 0x21fc) + uVar5 * 4) + param_2[1];
    }
    param_2 = param_2 + uVar3;
  }
LAB_5cc4a5e1:
  *param_3 = uVar1;
  return local_130;
}


