/* Module: sfppack1.dll
   Function: FUN_5cdbda40
   Address: 5cdbda40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
FUN_5cdbda40(void *this,uint param_1,uint param_2,int *param_3,byte *param_4,uint *param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int local_38;
  int local_34;
  undefined4 local_30 [12];
  
  local_34 = 0;
  *(uint *)((int)this + 0x84) = (uint)(param_1 == 0);
  uVar4 = (uint)(param_1 == 2);
  param_1 = 0;
  local_38 = 0;
  if (param_3 != (int *)0x0) {
    local_34 = *param_3;
  }
  if (param_5 != (uint *)0x0) {
    param_1 = *param_5;
  }
  uVar5 = param_1;
  iVar2 = FUN_5cdb9800(this,local_30);
  if ((*(int *)((int)this + 0x84) == 0) || (*(int *)((int)this + 0x5c) == 0)) {
    if (((iVar2 != 0) || (*(int *)((int)this + 0x78) == 0)) &&
       ((uVar4 == 0 && (uVar3 = FUN_5cdbd040(this,(int)local_30), (int)uVar3 < 0)))) {
      return uVar3;
    }
  }
  else {
    uVar3 = FUN_5cdbd710(this);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  *(undefined4 *)((int)this + 0x5c) = 1;
  if (*(int *)((int)this + 0x88) == 0) {
    *(uint *)((int)this + 0x80) = uVar4;
    if (uVar4 != 0) {
      *param_5 = 0;
      return 1;
    }
    param_2 = FUN_5cdbf640(this,param_2,&local_34,param_4,(int *)&param_1);
  }
  else {
    if ((uVar4 == 0) && (*(int *)((int)this + 0x164) == 0)) {
      local_38 = 0x800;
      FUN_5cdbf640(this,param_2,&local_34,*(undefined4 *)((int)this + 0x184),&local_38);
      *(int *)((int)this + 0x194) = *(int *)((int)this + 0x194) + local_34;
      *(undefined4 *)((int)this + 400) = 0;
      *(int *)((int)this + 0x18c) = local_38;
    }
    else {
      local_34 = 0;
    }
    local_38 = *(int *)((int)this + 0x18c) - *(int *)((int)this + 400);
    if ((local_38 == 0) && (uVar4 != 0)) {
      *(undefined4 *)((int)this + 0x80) = 1;
    }
    param_2 = FUN_5cdc1940(this,*(int *)((int)this + 0x184) +
                                (uint)*(ushort *)(*(int *)((int)this + 0x70) + 2) *
                                *(int *)((int)this + 400) * 4,&local_38,param_4,&param_1);
    *(int *)((int)this + 400) = *(int *)((int)this + 400) + local_38;
    uVar3 = *(int *)((int)this + 0x198) + param_1;
    *(uint *)((int)this + 0x198) = uVar3;
    uVar4 = *(uint *)((int)this + 0x194);
    if ((uVar3 <= uVar4) || (_DAT_5ce12e70 <= *(double *)((int)this + 200))) {
      if ((param_2 == 1) && ((uVar3 < uVar4 && (param_1 == 0)))) {
        param_1 = uVar4 - uVar3;
        if (uVar5 <= uVar4 - uVar3) {
          param_1 = uVar5;
        }
        uVar5 = *(ushort *)(*(int *)((int)this + 0x70) + 2) * param_1;
        pbVar6 = param_4;
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          pbVar6[0] = 0;
          pbVar6[1] = 0;
          pbVar6[2] = 0;
          pbVar6[3] = 0;
          pbVar6 = pbVar6 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar6 = 0;
          pbVar6 = pbVar6 + 1;
        }
        uVar4 = *(int *)((int)this + 0x198) + param_1;
        *(uint *)((int)this + 0x198) = uVar4;
        param_2 = (uint)(*(uint *)((int)this + 0x194) <= uVar4);
      }
    }
    else {
      param_2 = 1;
      param_1 = param_1 + (uVar4 - uVar3);
    }
  }
  uVar4 = param_1;
  if (DAT_5ce237e8 != 0) goto LAB_5cdbde29;
  uVar5 = *(uint *)(*(int *)((int)this + 0x70) + 4);
  if (*(int *)((int)this + 0x358) == 0) {
    iVar2 = *(int *)((int)this + 0x344) - param_1;
    *(int *)((int)this + 0x344) = iVar2;
    if (iVar2 < 1) {
      uVar3 = rand();
      *(uint *)((int)this + 0x344) = (uVar3 & 3) * (uVar5 >> 4) + uVar5 * 4;
      uVar3 = rand();
      *(uint *)((int)this + 0x350) = (uVar3 & 0x1f) + 1;
      uVar3 = rand();
      *(uint *)((int)this + 0x354) = (uVar3 & 0x1f) + 1;
      *(uint *)((int)this + 0x358) = uVar5 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdbdd25;
    }
    uVar4 = 0;
  }
  else {
LAB_5cdbdd25:
    uVar5 = *(uint *)((int)this + 0x358);
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    *(uint *)((int)this + 0x358) = uVar5 - uVar4;
  }
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x70) + 2);
  pbVar6 = param_4;
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    DAT_5ce2a104 = DAT_5ce2a104 + *(int *)((int)this + 0x350);
    param_4 = (byte *)(int)(char)(*pbVar6 ^ 0x80);
    iVar2 = ftol();
    if (iVar2 < -0x80) {
      bVar1 = 0;
    }
    else if (iVar2 < 0x80) {
      bVar1 = (byte)iVar2 ^ 0x80;
    }
    else {
      bVar1 = 0xff;
    }
    *pbVar6 = bVar1;
    if (1 < uVar5) {
      DAT_5ce2a108 = DAT_5ce2a108 + 1 + *(int *)((int)this + 0x354);
      param_4 = (byte *)(int)(char)(pbVar6[1] ^ 0x80);
      iVar2 = ftol();
      if (iVar2 < -0x80) {
        bVar1 = 0;
      }
      else if (iVar2 < 0x80) {
        bVar1 = (byte)iVar2 ^ 0x80;
      }
      else {
        bVar1 = 0xff;
      }
      pbVar6[1] = bVar1;
    }
    pbVar6 = pbVar6 + uVar5;
  }
LAB_5cdbde29:
  if (param_3 != (int *)0x0) {
    *param_3 = local_34;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = param_1;
  }
  return param_2;
}


