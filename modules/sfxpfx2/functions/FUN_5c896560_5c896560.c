/* Module: sfxpfx2.dll
   Function: FUN_5c896560
   Address: 5c896560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c896560(void *this,int param_1,float *param_2,uint *param_3)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  uint local_144;
  int local_134;
  int local_130 [75];
  
  local_134 = 0;
  uVar1 = *param_3;
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x164) + 2);
  iVar3 = FUN_5c893250(this,local_130);
  if ((((iVar3 != 0) || (*(int *)((int)this + 0x168) == 0)) ||
      ((param_1 == 0 && (*(int *)((int)this + 0x150) != 0)))) &&
     (local_134 = FUN_5c8953a0(this,local_130,param_1), local_134 < 0)) {
    return local_134;
  }
  *(undefined4 *)((int)this + 0x150) = 1;
  uVar4 = uVar1;
  pfVar2 = param_2;
  if (*(int *)((int)this + 0x20d0) == 0) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (_DAT_5c8dc900 <= *(double *)((int)this + 0x20c8)) {
        *(double *)((int)this + 0x20c8) = *(double *)((int)this + 0x20c8) - _DAT_5c8dc900;
      }
      uVar7 = 0;
      pfVar5 = pfVar2;
      if (uVar6 != 0) {
        do {
          fVar8 = FUN_5c8964f0((int)this,*pfVar5,*(undefined4 *)((int)this + 0x20c8),
                               *(undefined4 *)((int)this + 0x20cc),uVar7);
          *pfVar5 = (float)fVar8;
          uVar7 = uVar7 + 1;
          pfVar5 = pfVar5 + 1;
        } while (uVar7 < uVar6);
      }
      *(double *)((int)this + 0x20c8) =
           *(double *)((int)this + 0x20c0) + *(double *)((int)this + 0x20c8);
      pfVar2 = pfVar2 + uVar6;
    }
  }
  else {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (_DAT_5c8dc900 <= *(double *)((int)this + 0x20c8)) {
        *(double *)((int)this + 0x20c8) = *(double *)((int)this + 0x20c8) - _DAT_5c8dc900;
      }
      if (_DAT_5c8dc900 <= *(double *)((int)this + 0x20d8)) {
        *(double *)((int)this + 0x20d8) = *(double *)((int)this + 0x20d8) - _DAT_5c8dc900;
      }
      fVar8 = FUN_5c8964f0((int)this,*pfVar2,*(undefined4 *)((int)this + 0x20c8),
                           *(undefined4 *)((int)this + 0x20cc),0);
      *pfVar2 = (float)fVar8;
      fVar8 = FUN_5c8964f0((int)this,pfVar2[1],*(undefined4 *)((int)this + 0x20d8),
                           *(undefined4 *)((int)this + 0x20dc),1);
      pfVar2[1] = (float)fVar8;
      *(double *)((int)this + 0x20c8) =
           *(double *)((int)this + 0x20c8) + *(double *)((int)this + 0x20c0);
      *(double *)((int)this + 0x20d8) =
           *(double *)((int)this + 0x20d8) + *(double *)((int)this + 0x20c0);
      pfVar2 = pfVar2 + uVar6;
    }
  }
  if (DAT_5c8e93b8 != 0) goto LAB_5c896896;
  uVar6 = *(uint *)(*(int *)((int)this + 0x164) + 4);
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
      _DAT_5c8efccc = 0;
      _DAT_5c8efcd0 = 0;
      goto LAB_5c8967ed;
    }
    local_144 = 0;
  }
  else {
LAB_5c8967ed:
    uVar6 = *(uint *)((int)this + 0x2208);
    local_144 = uVar1;
    if (uVar6 <= uVar1) {
      local_144 = uVar6;
    }
    *(uint *)((int)this + 0x2208) = uVar6 - local_144;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x164) + 2);
  for (; local_144 != 0; local_144 = local_144 - 1) {
    uVar4 = DAT_5c8efcb4 % *(uint *)((int)this + 0x21f8);
    DAT_5c8efcb4 = DAT_5c8efcb4 + *(int *)((int)this + 0x2200);
    *param_2 = *(float *)(*(int *)((int)this + 0x21fc) + uVar4 * 4) + *param_2;
    if (1 < uVar6) {
      uVar4 = DAT_5c8efcb8 % *(uint *)((int)this + 0x21f8);
      DAT_5c8efcb8 = DAT_5c8efcb8 + 1 + *(int *)((int)this + 0x2204);
      param_2[1] = *(float *)(*(int *)((int)this + 0x21fc) + uVar4 * 4) + param_2[1];
    }
    param_2 = param_2 + uVar6;
  }
LAB_5c896896:
  *param_3 = uVar1;
  return local_134;
}


