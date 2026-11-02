/* Module: sfppack1.dll
   Function: FUN_5cdc5d40
   Address: 5cdc5d40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdc5d40(void *this,int param_1,double *param_2,uint *param_3)

{
  uint uVar1;
  double *pdVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double *pdVar8;
  float10 fVar9;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_24;
  int local_20;
  int local_1c [6];
  
  uVar7 = *param_3;
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x4c) + 2);
  iVar3 = FUN_5cdc2fd0(this,local_1c);
  if ((param_1 == 0) && (*(int *)((int)this + 0x38) != 0)) {
    iVar3 = FUN_5cdc4e20(this);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  else if ((iVar3 != 0) || (*(int *)((int)this + 0x50) == 0)) {
    if (param_1 == 2) {
      return 1;
    }
    iVar3 = FUN_5cdc4dc0(this,local_1c,param_1);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  *(undefined4 *)((int)this + 0x38) = 1;
  local_20 = 0;
  local_34 = 0;
  local_3c = uVar7;
  if (uVar5 != 0) {
    puVar4 = (uint *)((int)this + 0x8c);
    pdVar8 = param_2;
    local_38 = uVar7;
    do {
      uVar6 = uVar7;
      pdVar2 = pdVar8;
      if (param_1 == 2) {
        uVar1 = *puVar4;
        if (uVar1 <= uVar7) {
          uVar6 = uVar1;
          local_38 = uVar1;
        }
        *puVar4 = uVar1 - uVar6;
        uVar7 = uVar6;
        local_3c = uVar6;
        if (uVar1 - uVar6 == 0) {
          local_20 = 1;
        }
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        fVar9 = FUN_5cdc4fd0(this,*pdVar2,puVar4 + -1,local_34);
        *pdVar2 = (double)fVar9;
        uVar7 = local_38;
        pdVar2 = pdVar2 + uVar5;
      }
      local_34 = local_34 + 1;
      puVar4 = puVar4 + 2;
      pdVar8 = pdVar8 + 1;
    } while (local_34 < uVar5);
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdc5faf;
  local_24 = local_3c;
  uVar7 = *(uint *)(*(int *)((int)this + 0x4c) + 4);
  if (*(int *)((int)this + 0xb0) == 0) {
    iVar3 = *(int *)((int)this + 0x9c) - local_3c;
    *(int *)((int)this + 0x9c) = iVar3;
    if (iVar3 < 1) {
      uVar5 = rand();
      *(uint *)((int)this + 0x9c) = (uVar5 & 3) * (uVar7 >> 4) + uVar7 * 4;
      uVar5 = rand();
      *(uint *)((int)this + 0xa8) = (uVar5 & 0x1f) + 1;
      uVar5 = rand();
      *(uint *)((int)this + 0xac) = (uVar5 & 0x1f) + 1;
      *(uint *)((int)this + 0xb0) = uVar7 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdc5f0d;
    }
    local_24 = 0;
  }
  else {
LAB_5cdc5f0d:
    uVar7 = *(uint *)((int)this + 0xb0);
    if (uVar7 <= local_3c) {
      local_24 = uVar7;
    }
    *(uint *)((int)this + 0xb0) = uVar7 - local_24;
  }
  uVar7 = (uint)*(ushort *)(*(int *)((int)this + 0x4c) + 2);
  for (; local_24 != 0; local_24 = local_24 - 1) {
    uVar5 = DAT_5ce2a0dc % *(uint *)((int)this + 0xa0);
    DAT_5ce2a0dc = DAT_5ce2a0dc + *(int *)((int)this + 0xa8);
    *param_2 = (double)(*(float *)(*(int *)((int)this + 0xa4) + uVar5 * 4) + (float)*param_2);
    if (1 < uVar7) {
      uVar5 = DAT_5ce2a0e0 % *(uint *)((int)this + 0xa0);
      DAT_5ce2a0e0 = DAT_5ce2a0e0 + 1 + *(int *)((int)this + 0xac);
      param_2[1] = (double)(*(float *)(*(int *)((int)this + 0xa4) + uVar5 * 4) + (float)param_2[1]);
    }
    param_2 = param_2 + uVar7;
  }
LAB_5cdc5faf:
  *param_3 = local_3c;
  return local_20;
}


