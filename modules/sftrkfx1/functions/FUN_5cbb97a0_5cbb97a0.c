/* Module: sftrkfx1.dll
   Function: FUN_5cbb97a0
   Address: 5cbb97a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cbb97a0(void *this,int param_1,double *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  undefined4 *puVar5;
  uint local_38;
  double *local_34;
  uint local_2c;
  int local_28;
  undefined4 local_24 [3];
  undefined4 local_18 [5];
  
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  local_38 = *param_3;
  local_34 = param_2;
  iVar1 = FUN_5cbb7bf0(this,local_24);
  if ((param_1 == 0) && (*(int *)((int)this + 0x30) != 0)) {
    iVar1 = FUN_5cbb8690(this);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  else if ((iVar1 != 0) || (*(int *)((int)this + 0x48) == 0)) {
    if (param_1 == 2) {
      return 1;
    }
    iVar1 = FUN_5cbb83b0(this,local_24,param_1);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  *(undefined4 *)((int)this + 0x30) = 1;
  local_28 = 0;
  if (param_1 == 2) {
    if (*(uint *)((int)this + 0xdc) <= local_38) {
      local_38 = *(uint *)((int)this + 0xdc);
    }
    iVar1 = *(int *)((int)this + 0xdc) - local_38;
    *(int *)((int)this + 0xdc) = iVar1;
    if (iVar1 == 0) {
      local_28 = 1;
    }
  }
  if (local_38 != 0) {
    local_2c = local_38;
    do {
      if (uVar3 != 0) {
        pdVar4 = local_34;
        puVar5 = local_18;
        for (iVar1 = uVar3 << 1; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *(undefined4 *)pdVar4;
          pdVar4 = (double *)((int)pdVar4 + 4);
          puVar5 = puVar5 + 1;
        }
      }
      FUN_5cbb8860(this,(int)local_18,uVar3);
      if (uVar3 != 0) {
        puVar5 = local_18;
        pdVar4 = local_34;
        for (iVar1 = uVar3 << 1; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(undefined4 *)pdVar4 = *puVar5;
          puVar5 = puVar5 + 1;
          pdVar4 = (double *)((int)pdVar4 + 4);
        }
        local_34 = local_34 + uVar3;
      }
      local_2c = local_2c - 1;
    } while (local_2c != 0);
  }
  if (*(int *)((int)this + 0xe8) == 0) goto LAB_5cbb9a13;
  local_2c = local_38;
  uVar3 = *(uint *)(*(int *)((int)this + 0x44) + 4);
  if (*(int *)((int)this + 0x100) == 0) {
    iVar1 = *(int *)((int)this + 0xec) - local_38;
    *(int *)((int)this + 0xec) = iVar1;
    if (iVar1 < 1) {
      uVar2 = rand();
      *(uint *)((int)this + 0xec) = (uVar2 & 3) * (uVar3 >> 4) + uVar3 * 4;
      uVar2 = rand();
      *(uint *)((int)this + 0xf8) = (uVar2 & 0x1f) + 1;
      uVar2 = rand();
      *(uint *)((int)this + 0xfc) = (uVar2 & 0x1f) + 1;
      *(uint *)((int)this + 0x100) = uVar3 >> 3;
      _DAT_5cc17dd4 = 0;
      _DAT_5cc17dd8 = 0;
      goto LAB_5cbb996d;
    }
    local_2c = 0;
  }
  else {
LAB_5cbb996d:
    uVar3 = *(uint *)((int)this + 0x100);
    if (uVar3 <= local_38) {
      local_2c = uVar3;
    }
    *(uint *)((int)this + 0x100) = uVar3 - local_2c;
  }
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  for (; local_2c != 0; local_2c = local_2c - 1) {
    uVar2 = DAT_5cc17db4 % *(uint *)((int)this + 0xf0);
    DAT_5cc17db4 = DAT_5cc17db4 + *(int *)((int)this + 0xf8);
    *param_2 = (double)(*(float *)(*(int *)((int)this + 0xf4) + uVar2 * 4) + (float)*param_2);
    if (1 < uVar3) {
      uVar2 = DAT_5cc17db8 % *(uint *)((int)this + 0xf0);
      DAT_5cc17db8 = DAT_5cc17db8 + 1 + *(int *)((int)this + 0xfc);
      param_2[1] = (double)(*(float *)(*(int *)((int)this + 0xf4) + uVar2 * 4) + (float)param_2[1]);
    }
    param_2 = param_2 + uVar3;
  }
LAB_5cbb9a13:
  *param_3 = local_38;
  return local_28;
}


