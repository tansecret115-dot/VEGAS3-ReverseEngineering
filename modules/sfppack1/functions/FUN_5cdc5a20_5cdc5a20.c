/* Module: sfppack1.dll
   Function: FUN_5cdc5a20
   Address: 5cdc5a20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdc5a20(void *this,int param_1,float *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  float10 fVar10;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_24;
  int local_20;
  int local_1c [6];
  
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x4c) + 2);
  local_38 = *param_3;
  if (*(int *)((int)this + 0x58) != 0) {
    if (param_4 != 0) {
      *param_3 = 0;
      return 1;
    }
    *(undefined4 *)((int)this + 0x50) = 0;
    *(undefined4 *)((int)this + 0x84) = *(undefined4 *)((int)this + 0x7c);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  iVar4 = FUN_5cdc2fd0(this,local_1c);
  if ((param_1 == 0) && (*(int *)((int)this + 0x38) != 0)) {
    iVar4 = FUN_5cdc4e20(this);
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  else if (((iVar4 != 0) || (*(int *)((int)this + 0x50) == 0)) && (param_4 == 0)) {
    if (param_1 == 2) {
      return 1;
    }
    iVar4 = FUN_5cdc4dc0(this,local_1c,param_1);
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  *(undefined4 *)((int)this + 0x38) = 1;
  if (param_4 == 0) {
    if (_DAT_5ce12bf0 == *(double *)((int)this + 0x70)) {
      uVar5 = *(undefined4 *)((int)this + 0x7c);
    }
    else {
      uVar5 = *(undefined4 *)((int)this + 0x80);
    }
    *(undefined4 *)((int)this + 0x84) = uVar5;
  }
  else {
    if ((int)*(uint *)((int)this + 0x84) <= (int)local_38) {
      local_38 = *(uint *)((int)this + 0x84);
    }
    iVar4 = *(int *)((int)this + 0x84) - local_38;
    *(int *)((int)this + 0x84) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)((int)this + 0x58) = 1;
    }
  }
  local_20 = 0;
  local_34 = 0;
  if (uVar3 != 0) {
    puVar6 = (uint *)((int)this + 0x8c);
    uVar7 = local_38;
    pfVar9 = param_2;
    local_3c = local_38;
    do {
      uVar8 = uVar7;
      pfVar2 = pfVar9;
      if (param_1 == 2) {
        uVar1 = *puVar6;
        if (uVar1 <= uVar7) {
          uVar8 = uVar1;
          local_3c = uVar1;
        }
        *puVar6 = uVar1 - uVar8;
        uVar7 = uVar8;
        local_38 = uVar8;
        if (uVar1 - uVar8 == 0) {
          local_20 = 1;
        }
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        fVar10 = FUN_5cdc4fd0(this,(double)*pfVar2,puVar6 + -1,local_34);
        *pfVar2 = (float)fVar10;
        uVar7 = local_3c;
        pfVar2 = pfVar2 + uVar3;
      }
      local_34 = local_34 + 1;
      puVar6 = puVar6 + 2;
      pfVar9 = pfVar9 + 1;
    } while (local_34 < uVar3);
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdc5d25;
  local_24 = local_38;
  uVar3 = *(uint *)(*(int *)((int)this + 0x4c) + 4);
  if (*(int *)((int)this + 0xb0) == 0) {
    iVar4 = *(int *)((int)this + 0x9c) - local_38;
    *(int *)((int)this + 0x9c) = iVar4;
    if (iVar4 < 1) {
      uVar7 = rand();
      *(uint *)((int)this + 0x9c) = (uVar7 & 3) * (uVar3 >> 4) + uVar3 * 4;
      uVar7 = rand();
      *(uint *)((int)this + 0xa8) = (uVar7 & 0x1f) + 1;
      uVar7 = rand();
      *(uint *)((int)this + 0xac) = (uVar7 & 0x1f) + 1;
      *(uint *)((int)this + 0xb0) = uVar3 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdc5c83;
    }
    local_24 = 0;
  }
  else {
LAB_5cdc5c83:
    uVar3 = *(uint *)((int)this + 0xb0);
    if (uVar3 <= local_38) {
      local_24 = uVar3;
    }
    *(uint *)((int)this + 0xb0) = uVar3 - local_24;
  }
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x4c) + 2);
  for (; local_24 != 0; local_24 = local_24 - 1) {
    uVar7 = DAT_5ce2a0e4 % *(uint *)((int)this + 0xa0);
    DAT_5ce2a0e4 = DAT_5ce2a0e4 + *(int *)((int)this + 0xa8);
    *param_2 = *(float *)(*(int *)((int)this + 0xa4) + uVar7 * 4) + *param_2;
    if (1 < uVar3) {
      uVar7 = DAT_5ce2a0e8 % *(uint *)((int)this + 0xa0);
      DAT_5ce2a0e8 = DAT_5ce2a0e8 + 1 + *(int *)((int)this + 0xac);
      param_2[1] = *(float *)(*(int *)((int)this + 0xa4) + uVar7 * 4) + param_2[1];
    }
    param_2 = param_2 + uVar3;
  }
LAB_5cdc5d25:
  *param_3 = local_38;
  return local_20;
}


