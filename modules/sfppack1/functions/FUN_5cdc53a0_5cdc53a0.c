/* Module: sfppack1.dll
   Function: FUN_5cdc53a0
   Address: 5cdc53a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdc53a0(void *this,int param_1,short *param_2,uint *param_3)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  short *psVar8;
  uint local_48;
  uint local_44;
  uint local_34;
  int local_30;
  int local_1c [6];
  
  uVar4 = (uint)*(ushort *)(*(int *)((int)this + 0x4c) + 2);
  local_48 = *param_3;
  iVar5 = FUN_5cdc2fd0(this,local_1c);
  if ((param_1 == 0) && (*(int *)((int)this + 0x38) != 0)) {
    iVar5 = FUN_5cdc4e20(this);
    if (iVar5 < 0) {
      return iVar5;
    }
  }
  else if ((iVar5 != 0) || (*(int *)((int)this + 0x50) == 0)) {
    if (param_1 == 2) {
      return 1;
    }
    iVar5 = FUN_5cdc4dc0(this,local_1c,param_1);
    if (iVar5 < 0) {
      return iVar5;
    }
  }
  uVar7 = 0;
  *(undefined4 *)((int)this + 0x38) = 1;
  local_30 = 0;
  local_44 = local_48;
  if (uVar4 != 0) {
    puVar6 = (uint *)((int)this + 0x8c);
    psVar8 = param_2;
    do {
      psVar2 = psVar8;
      uVar3 = local_48;
      if (param_1 == 2) {
        uVar1 = *puVar6;
        if (uVar1 <= local_48) {
          local_48 = uVar1;
        }
        *puVar6 = uVar1 - local_48;
        uVar3 = local_48;
        local_44 = local_48;
        if (uVar1 - local_48 == 0) {
          local_30 = 1;
        }
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        FUN_5cdc4fd0(this,(double)(int)*psVar2 * _DAT_5ce13270,puVar6 + -1,uVar7);
        iVar5 = ftol();
        if (iVar5 < -0x8000) {
          iVar5 = -0x8000;
        }
        else if (0x7fff < iVar5) {
          iVar5 = 0x7fff;
        }
        *psVar2 = (short)iVar5;
        psVar2 = psVar2 + uVar4;
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 2;
      psVar8 = psVar8 + 1;
    } while (uVar7 < uVar4);
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdc5697;
  uVar4 = *(uint *)(*(int *)((int)this + 0x4c) + 4);
  local_34 = local_44;
  if (*(int *)((int)this + 0xb0) == 0) {
    iVar5 = *(int *)((int)this + 0x9c) - local_44;
    *(int *)((int)this + 0x9c) = iVar5;
    if (iVar5 < 1) {
      uVar7 = rand();
      *(uint *)((int)this + 0x9c) = (uVar7 & 3) * (uVar4 >> 4) + uVar4 * 4;
      uVar7 = rand();
      *(uint *)((int)this + 0xa8) = (uVar7 & 0x1f) + 1;
      uVar7 = rand();
      *(uint *)((int)this + 0xac) = (uVar7 & 0x1f) + 1;
      *(uint *)((int)this + 0xb0) = uVar4 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdc55a6;
    }
    local_34 = 0;
  }
  else {
LAB_5cdc55a6:
    uVar4 = *(uint *)((int)this + 0xb0);
    if (uVar4 <= local_44) {
      local_34 = uVar4;
    }
    *(uint *)((int)this + 0xb0) = uVar4 - local_34;
  }
  uVar4 = (uint)*(ushort *)(*(int *)((int)this + 0x4c) + 2);
  for (; local_34 != 0; local_34 = local_34 - 1) {
    DAT_5ce2a0f4 = DAT_5ce2a0f4 + *(int *)((int)this + 0xa8);
    iVar5 = ftol();
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    else if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    *param_2 = *param_2 + (short)iVar5;
    if (1 < uVar4) {
      DAT_5ce2a0f8 = DAT_5ce2a0f8 + 1 + *(int *)((int)this + 0xac);
      iVar5 = ftol();
      if (iVar5 < -0x8000) {
        iVar5 = -0x8000;
      }
      else if (0x7fff < iVar5) {
        iVar5 = 0x7fff;
      }
      param_2[1] = param_2[1] + (short)iVar5;
    }
    param_2 = param_2 + uVar4;
  }
LAB_5cdc5697:
  *param_3 = local_44;
  return local_30;
}


