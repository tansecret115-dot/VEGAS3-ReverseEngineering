/* Module: sfxpfx2.dll
   Function: FUN_5c895870
   Address: 5c895870
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c895870(void *this,int param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_140;
  int local_134;
  int local_130 [75];
  
  local_134 = 0;
  uVar1 = *param_3;
  uVar7 = (uint)*(ushort *)(*(int *)((int)this + 0x164) + 2);
  iVar4 = FUN_5c893250(this,local_130);
  if ((((iVar4 != 0) || (*(int *)((int)this + 0x168) == 0)) ||
      ((param_1 == 0 && (*(int *)((int)this + 0x150) != 0)))) &&
     (local_134 = FUN_5c8953a0(this,local_130,param_1), local_134 < 0)) {
    return local_134;
  }
  *(undefined4 *)((int)this + 0x150) = 1;
  uVar6 = uVar1;
  pbVar2 = param_2;
  if (*(int *)((int)this + 0x20d0) == 0) {
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (_DAT_5c8dc900 <= *(double *)((int)this + 0x20c8)) {
        *(double *)((int)this + 0x20c8) = *(double *)((int)this + 0x20c8) - _DAT_5c8dc900;
      }
      uVar8 = 0;
      if (uVar7 != 0) {
        do {
          uVar5 = FUN_5c8957c0(this);
          pbVar2[uVar8] = (byte)uVar5;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
      }
      *(double *)((int)this + 0x20c8) =
           *(double *)((int)this + 0x20c0) + *(double *)((int)this + 0x20c8);
      pbVar2 = pbVar2 + uVar7;
    }
  }
  else {
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (_DAT_5c8dc900 <= *(double *)((int)this + 0x20c8)) {
        *(double *)((int)this + 0x20c8) = *(double *)((int)this + 0x20c8) - _DAT_5c8dc900;
      }
      if (_DAT_5c8dc900 <= *(double *)((int)this + 0x20d8)) {
        *(double *)((int)this + 0x20d8) = *(double *)((int)this + 0x20d8) - _DAT_5c8dc900;
      }
      uVar8 = FUN_5c8957c0(this);
      *pbVar2 = (byte)uVar8;
      uVar8 = FUN_5c8957c0(this);
      pbVar2[1] = (byte)uVar8;
      *(double *)((int)this + 0x20c8) =
           *(double *)((int)this + 0x20c0) + *(double *)((int)this + 0x20c8);
      *(double *)((int)this + 0x20d8) =
           *(double *)((int)this + 0x20c0) + *(double *)((int)this + 0x20d8);
      pbVar2 = pbVar2 + uVar7;
    }
  }
  if (DAT_5c8e93b8 != 0) goto LAB_5c895bf8;
  uVar7 = *(uint *)(*(int *)((int)this + 0x164) + 4);
  if (*(int *)((int)this + 0x2208) == 0) {
    iVar4 = *(int *)((int)this + 0x21f4) - uVar1;
    *(int *)((int)this + 0x21f4) = iVar4;
    if (iVar4 < 1) {
      uVar6 = rand();
      *(uint *)((int)this + 0x21f4) = (uVar6 & 3) * (uVar7 >> 4) + uVar7 * 3;
      uVar6 = rand();
      *(uint *)((int)this + 0x2200) = (uVar6 & 0x1f) + 1;
      uVar6 = rand();
      *(uint *)((int)this + 0x2204) = (uVar6 & 0x1f) + 1;
      *(uint *)((int)this + 0x2208) = uVar7 >> 3;
      _DAT_5c8efccc = 0;
      _DAT_5c8efcd0 = 0;
      goto LAB_5c895ae2;
    }
    local_140 = 0;
  }
  else {
LAB_5c895ae2:
    uVar7 = *(uint *)((int)this + 0x2208);
    local_140 = uVar1;
    if (uVar7 <= uVar1) {
      local_140 = uVar7;
    }
    *(uint *)((int)this + 0x2208) = uVar7 - local_140;
  }
  uVar7 = (uint)*(ushort *)(*(int *)((int)this + 0x164) + 2);
  for (; local_140 != 0; local_140 = local_140 - 1) {
    DAT_5c8efcd4 = DAT_5c8efcd4 + *(int *)((int)this + 0x2200);
    iVar4 = ftol();
    if (iVar4 < -0x80) {
      bVar3 = 0;
    }
    else if (iVar4 < 0x80) {
      bVar3 = (byte)iVar4 ^ 0x80;
    }
    else {
      bVar3 = 0xff;
    }
    *param_2 = bVar3;
    if (1 < uVar7) {
      DAT_5c8efcd8 = DAT_5c8efcd8 + 1 + *(int *)((int)this + 0x2204);
      iVar4 = ftol();
      if (iVar4 < -0x80) {
        bVar3 = 0;
      }
      else if (iVar4 < 0x80) {
        bVar3 = (byte)iVar4 ^ 0x80;
      }
      else {
        bVar3 = 0xff;
      }
      param_2[1] = bVar3;
    }
    param_2 = param_2 + uVar7;
  }
LAB_5c895bf8:
  *param_3 = uVar1;
  return local_134;
}


