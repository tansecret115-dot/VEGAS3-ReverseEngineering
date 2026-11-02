/* Module: sftrkfx1.dll
   Function: FUN_5cbb8bb0
   Address: 5cbb8bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cbb8bb0(void *this,int param_1,byte *param_2,uint *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  double *pdVar7;
  byte *pbVar8;
  uint local_38;
  uint local_2c;
  int local_28;
  undefined4 local_24 [3];
  double local_18 [2];
  
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  uVar5 = *param_3;
  iVar3 = FUN_5cbb7bf0(this,local_24);
  if ((param_1 == 0) && (*(int *)((int)this + 0x30) != 0)) {
    iVar3 = FUN_5cbb8690(this);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  else if ((iVar3 != 0) || (*(int *)((int)this + 0x48) == 0)) {
    if (param_1 == 2) {
      return 1;
    }
    iVar3 = FUN_5cbb83b0(this,local_24,param_1);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  *(undefined4 *)((int)this + 0x30) = 1;
  local_28 = 0;
  pbVar8 = param_2;
  local_38 = uVar5;
  if (param_1 == 2) {
    if (*(uint *)((int)this + 0xdc) <= uVar5) {
      uVar5 = *(uint *)((int)this + 0xdc);
    }
    iVar3 = *(int *)((int)this + 0xdc) - uVar5;
    *(int *)((int)this + 0xdc) = iVar3;
    local_38 = uVar5;
    if (iVar3 == 0) {
      local_28 = 1;
    }
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar4 = 0;
    if (uVar6 != 0) {
      pdVar7 = local_18;
      do {
        pbVar1 = pbVar8 + uVar4;
        uVar4 = uVar4 + 1;
        *pdVar7 = (double)(int)(char)(*pbVar1 ^ 0x80) * _DAT_5cc042a0;
        pdVar7 = pdVar7 + 1;
      } while (uVar4 < uVar6);
    }
    FUN_5cbb8860(this,(int)local_18,uVar6);
    for (uVar4 = uVar6; uVar4 != 0; uVar4 = uVar4 - 1) {
      iVar3 = ftol();
      if (iVar3 < -0x80) {
        bVar2 = 0;
      }
      else if (iVar3 < 0x80) {
        bVar2 = (byte)iVar3 ^ 0x80;
      }
      else {
        bVar2 = 0xff;
      }
      *pbVar8 = bVar2;
      pbVar8 = pbVar8 + 1;
    }
  }
  if (*(int *)((int)this + 0xe8) == 0) goto LAB_5cbb8ec9;
  uVar5 = *(uint *)(*(int *)((int)this + 0x44) + 4);
  if (*(int *)((int)this + 0x100) == 0) {
    iVar3 = *(int *)((int)this + 0xec) - local_38;
    *(int *)((int)this + 0xec) = iVar3;
    if (iVar3 < 1) {
      uVar6 = rand();
      *(uint *)((int)this + 0xec) = (uVar6 & 3) * (uVar5 >> 4) + uVar5 * 4;
      uVar6 = rand();
      *(uint *)((int)this + 0xf8) = (uVar6 & 0x1f) + 1;
      uVar6 = rand();
      *(uint *)((int)this + 0xfc) = (uVar6 & 0x1f) + 1;
      *(uint *)((int)this + 0x100) = uVar5 >> 3;
      _DAT_5cc17dd4 = 0;
      _DAT_5cc17dd8 = 0;
      goto LAB_5cbb8db6;
    }
    local_2c = 0;
  }
  else {
LAB_5cbb8db6:
    uVar5 = *(uint *)((int)this + 0x100);
    local_2c = local_38;
    if (uVar5 <= local_38) {
      local_2c = uVar5;
    }
    *(uint *)((int)this + 0x100) = uVar5 - local_2c;
  }
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  for (; local_2c != 0; local_2c = local_2c - 1) {
    DAT_5cc17ddc = DAT_5cc17ddc + *(int *)((int)this + 0xf8);
    iVar3 = ftol();
    if (iVar3 < -0x80) {
      bVar2 = 0;
    }
    else if (iVar3 < 0x80) {
      bVar2 = (byte)iVar3 ^ 0x80;
    }
    else {
      bVar2 = 0xff;
    }
    *param_2 = bVar2;
    if (1 < uVar5) {
      DAT_5cc17de0 = DAT_5cc17de0 + 1 + *(int *)((int)this + 0xfc);
      iVar3 = ftol();
      if (iVar3 < -0x80) {
        bVar2 = 0;
      }
      else if (iVar3 < 0x80) {
        bVar2 = (byte)iVar3 ^ 0x80;
      }
      else {
        bVar2 = 0xff;
      }
      param_2[1] = bVar2;
    }
    param_2 = param_2 + uVar5;
  }
LAB_5cbb8ec9:
  *param_3 = local_38;
  return local_28;
}


