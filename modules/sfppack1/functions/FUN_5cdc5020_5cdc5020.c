/* Module: sfppack1.dll
   Function: FUN_5cdc5020
   Address: 5cdc5020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdc5020(void *this,int param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint local_44;
  uint local_38;
  uint local_34;
  int local_30;
  int local_1c [6];
  
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x4c) + 2);
  local_44 = *param_3;
  iVar4 = FUN_5cdc2fd0(this,local_1c);
  if ((param_1 == 0) && (*(int *)((int)this + 0x38) != 0)) {
    iVar4 = FUN_5cdc4e20(this);
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  else if ((iVar4 != 0) || (*(int *)((int)this + 0x50) == 0)) {
    if (param_1 == 2) {
      return 1;
    }
    iVar4 = FUN_5cdc4dc0(this,local_1c,param_1);
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  uVar6 = 0;
  *(undefined4 *)((int)this + 0x38) = 1;
  local_30 = 0;
  local_38 = local_44;
  if (uVar3 != 0) {
    puVar5 = (uint *)((int)this + 0x8c);
    do {
      pbVar7 = param_2 + uVar6;
      if (param_1 == 2) {
        uVar1 = *puVar5;
        if (uVar1 <= local_44) {
          local_44 = uVar1;
        }
        *puVar5 = uVar1 - local_44;
        if (uVar1 - local_44 == 0) {
          local_30 = 1;
        }
        local_38 = local_44;
        if (local_44 != 0) {
          local_34 = local_44;
          do {
            FUN_5cdc4fd0(this,0.0,puVar5 + -1,uVar6);
            iVar4 = ftol();
            if (iVar4 < -0x80) {
              bVar2 = 0;
            }
            else if (iVar4 < 0x80) {
              bVar2 = (byte)iVar4 ^ 0x80;
            }
            else {
              bVar2 = 0xff;
            }
            *pbVar7 = bVar2;
            pbVar7 = pbVar7 + uVar3;
            local_34 = local_34 - 1;
          } while (local_34 != 0);
        }
      }
      else if (local_44 != 0) {
        local_34 = local_44;
        do {
          FUN_5cdc4fd0(this,(double)(int)(char)(*pbVar7 ^ 0x80) * _DAT_5ce13240,puVar5 + -1,uVar6);
          iVar4 = ftol();
          if (iVar4 < -0x80) {
            bVar2 = 0;
          }
          else if (iVar4 < 0x80) {
            bVar2 = (byte)iVar4 ^ 0x80;
          }
          else {
            bVar2 = 0xff;
          }
          *pbVar7 = bVar2;
          pbVar7 = pbVar7 + uVar3;
          local_34 = local_34 - 1;
        } while (local_34 != 0);
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 2;
    } while (uVar6 < uVar3);
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdc5382;
  uVar3 = *(uint *)(*(int *)((int)this + 0x4c) + 4);
  local_34 = local_38;
  if (*(int *)((int)this + 0xb0) == 0) {
    iVar4 = *(int *)((int)this + 0x9c) - local_38;
    *(int *)((int)this + 0x9c) = iVar4;
    if (iVar4 < 1) {
      uVar6 = rand();
      *(uint *)((int)this + 0x9c) = (uVar6 & 3) * (uVar3 >> 4) + uVar3 * 4;
      uVar6 = rand();
      *(uint *)((int)this + 0xa8) = (uVar6 & 0x1f) + 1;
      uVar6 = rand();
      *(uint *)((int)this + 0xac) = (uVar6 & 0x1f) + 1;
      *(uint *)((int)this + 0xb0) = uVar3 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdc526f;
    }
    local_34 = 0;
  }
  else {
LAB_5cdc526f:
    uVar3 = *(uint *)((int)this + 0xb0);
    if (uVar3 <= local_38) {
      local_34 = uVar3;
    }
    *(uint *)((int)this + 0xb0) = uVar3 - local_34;
  }
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x4c) + 2);
  for (; local_34 != 0; local_34 = local_34 - 1) {
    DAT_5ce2a104 = DAT_5ce2a104 + *(int *)((int)this + 0xa8);
    iVar4 = ftol();
    if (iVar4 < -0x80) {
      bVar2 = 0;
    }
    else if (iVar4 < 0x80) {
      bVar2 = (byte)iVar4 ^ 0x80;
    }
    else {
      bVar2 = 0xff;
    }
    *param_2 = bVar2;
    if (1 < uVar3) {
      DAT_5ce2a108 = DAT_5ce2a108 + 1 + *(int *)((int)this + 0xac);
      iVar4 = ftol();
      if (iVar4 < -0x80) {
        bVar2 = 0;
      }
      else if (iVar4 < 0x80) {
        bVar2 = (byte)iVar4 ^ 0x80;
      }
      else {
        bVar2 = 0xff;
      }
      param_2[1] = bVar2;
    }
    param_2 = param_2 + uVar3;
  }
LAB_5cdc5382:
  *param_3 = local_38;
  return local_30;
}


