/* Module: sfppack1.dll
   Function: FUN_5cdbe670
   Address: 5cdbe670
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
FUN_5cdbe670(void *this,uint param_1,uint param_2,int *param_3,float *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  int local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30 [12];
  
  local_38 = 0;
  *(uint *)((int)this + 0x84) = (uint)(param_1 == 0);
  uVar3 = (uint)(param_1 == 2);
  local_3c = 0;
  local_34 = 0;
  if (param_3 != (int *)0x0) {
    local_38 = *param_3;
  }
  if (param_5 != (uint *)0x0) {
    local_34 = *param_5;
  }
  param_1 = local_34;
  iVar1 = FUN_5cdb9800(this,local_30);
  if ((*(int *)((int)this + 0x84) == 0) || (*(int *)((int)this + 0x5c) == 0)) {
    if (((iVar1 != 0) || (*(int *)((int)this + 0x78) == 0)) &&
       ((uVar3 == 0 && (uVar2 = FUN_5cdbd040(this,(int)local_30), (int)uVar2 < 0)))) {
      return uVar2;
    }
  }
  else {
    uVar2 = FUN_5cdbd710(this);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  *(undefined4 *)((int)this + 0x5c) = 1;
  if (*(int *)((int)this + 0x88) == 0) {
    *(uint *)((int)this + 0x80) = uVar3;
    if (uVar3 != 0) {
      *param_5 = 0;
      return 1;
    }
    param_2 = FUN_5cdbf640(this,param_2,&local_38,param_4,(int *)&param_1);
  }
  else {
    if ((uVar3 == 0) && (*(int *)((int)this + 0x164) == 0)) {
      local_3c = 0x800;
      FUN_5cdbf640(this,param_2,&local_38,*(undefined4 *)((int)this + 0x184),&local_3c);
      *(undefined4 *)((int)this + 400) = 0;
      *(int *)((int)this + 0x194) = *(int *)((int)this + 0x194) + local_38;
      *(int *)((int)this + 0x18c) = local_3c;
    }
    else {
      local_38 = 0;
    }
    local_3c = *(int *)((int)this + 0x18c) - *(int *)((int)this + 400);
    if ((local_3c == 0) && (uVar3 != 0)) {
      *(undefined4 *)((int)this + 0x80) = 1;
    }
    param_2 = FUN_5cdc1940(this,*(int *)((int)this + 0x184) +
                                (uint)*(ushort *)(*(int *)((int)this + 0x70) + 2) *
                                *(int *)((int)this + 400) * 4,&local_3c,param_4,&param_1);
    *(int *)((int)this + 400) = *(int *)((int)this + 400) + local_3c;
    uVar2 = *(int *)((int)this + 0x198) + param_1;
    *(uint *)((int)this + 0x198) = uVar2;
    uVar3 = *(uint *)((int)this + 0x194);
    if ((uVar2 <= uVar3) || (_DAT_5ce12e70 <= *(double *)((int)this + 200))) {
      if ((param_2 == 1) && ((uVar2 < uVar3 && (param_1 == 0)))) {
        param_1 = uVar3 - uVar2;
        if (local_34 <= uVar3 - uVar2) {
          param_1 = local_34;
        }
        pfVar5 = param_4;
        for (uVar3 = *(ushort *)(*(int *)((int)this + 0x70) + 2) * param_1 & 0x3fffffff; uVar3 != 0;
            uVar3 = uVar3 - 1) {
          *pfVar5 = 0.0;
          pfVar5 = pfVar5 + 1;
        }
        for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(undefined1 *)pfVar5 = 0;
          pfVar5 = (float *)((int)pfVar5 + 1);
        }
        uVar3 = *(int *)((int)this + 0x198) + param_1;
        *(uint *)((int)this + 0x198) = uVar3;
        param_2 = (uint)(*(uint *)((int)this + 0x194) <= uVar3);
      }
    }
    else {
      param_2 = 1;
      param_1 = param_1 + (uVar3 - uVar2);
    }
  }
  uVar3 = param_1;
  if (DAT_5ce237e8 != 0) goto LAB_5cdbe9f0;
  uVar2 = *(uint *)(*(int *)((int)this + 0x70) + 4);
  if (*(int *)((int)this + 0x358) == 0) {
    iVar1 = *(int *)((int)this + 0x344) - param_1;
    *(int *)((int)this + 0x344) = iVar1;
    if (iVar1 < 1) {
      uVar4 = rand();
      *(uint *)((int)this + 0x344) = (uVar4 & 3) * (uVar2 >> 4) + uVar2 * 4;
      uVar4 = rand();
      *(uint *)((int)this + 0x350) = (uVar4 & 0x1f) + 1;
      uVar4 = rand();
      *(uint *)((int)this + 0x354) = (uVar4 & 0x1f) + 1;
      *(uint *)((int)this + 0x358) = uVar2 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdbe959;
    }
    uVar3 = 0;
  }
  else {
LAB_5cdbe959:
    uVar2 = *(uint *)((int)this + 0x358);
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    *(uint *)((int)this + 0x358) = uVar2 - uVar3;
  }
  uVar2 = (uint)*(ushort *)(*(int *)((int)this + 0x70) + 2);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar4 = DAT_5ce2a0e4 % *(uint *)((int)this + 0x348);
    DAT_5ce2a0e4 = DAT_5ce2a0e4 + *(int *)((int)this + 0x350);
    *param_4 = *(float *)(*(int *)((int)this + 0x34c) + uVar4 * 4) + *param_4;
    if (1 < uVar2) {
      uVar4 = DAT_5ce2a0e8 % *(uint *)((int)this + 0x348);
      DAT_5ce2a0e8 = DAT_5ce2a0e8 + 1 + *(int *)((int)this + 0x354);
      param_4[1] = *(float *)(*(int *)((int)this + 0x34c) + uVar4 * 4) + param_4[1];
    }
    param_4 = param_4 + uVar2;
  }
LAB_5cdbe9f0:
  if (param_3 != (int *)0x0) {
    *param_3 = local_38;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = param_1;
  }
  return param_2;
}


