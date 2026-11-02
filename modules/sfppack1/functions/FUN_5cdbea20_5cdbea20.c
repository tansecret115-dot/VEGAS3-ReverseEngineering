/* Module: sfppack1.dll
   Function: FUN_5cdbea20
   Address: 5cdbea20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
FUN_5cdbea20(void *this,int param_1,undefined4 param_2,int *param_3,double *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  uint local_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38 [13];
  
  *(uint *)((int)this + 0x84) = (uint)(param_1 == 0);
  uVar3 = (uint)(param_1 == 2);
  local_44 = 0;
  local_48 = 0;
  local_3c = 0;
  if (param_3 != (int *)0x0) {
    local_44 = *param_3;
  }
  if (param_5 != (uint *)0x0) {
    local_3c = *param_5;
  }
  local_4c = local_3c;
  iVar1 = FUN_5cdb9800(this,local_38);
  if ((*(int *)((int)this + 0x84) == 0) || (*(int *)((int)this + 0x5c) == 0)) {
    if (((iVar1 != 0) || (*(int *)((int)this + 0x78) == 0)) &&
       ((uVar3 == 0 && (uVar2 = FUN_5cdbd040(this,(int)local_38), (int)uVar2 < 0)))) {
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
    local_40 = FUN_5cdbf640(this,param_2,&local_44,param_4,(int *)&local_4c);
  }
  else {
    if ((uVar3 == 0) && (*(int *)((int)this + 0x164) == 0)) {
      local_48 = 0x800;
      FUN_5cdbf640(this,param_2,&local_44,*(undefined4 *)((int)this + 0x188),&local_48);
      *(undefined4 *)((int)this + 400) = 0;
      *(int *)((int)this + 0x194) = *(int *)((int)this + 0x194) + local_44;
      *(int *)((int)this + 0x18c) = local_48;
    }
    else {
      local_44 = 0;
    }
    local_48 = *(int *)((int)this + 0x18c) - *(int *)((int)this + 400);
    if ((local_48 == 0) && (uVar3 != 0)) {
      *(undefined4 *)((int)this + 0x80) = 1;
    }
    local_40 = FUN_5cdc22f0(this,*(int *)((int)this + 0x188) +
                                 (uint)*(ushort *)(*(int *)((int)this + 0x70) + 2) *
                                 *(int *)((int)this + 400) * 8,&local_48,param_4,&local_4c);
    *(int *)((int)this + 400) = *(int *)((int)this + 400) + local_48;
    uVar2 = *(int *)((int)this + 0x198) + local_4c;
    *(uint *)((int)this + 0x198) = uVar2;
    uVar3 = *(uint *)((int)this + 0x194);
    if ((uVar2 <= uVar3) || (_DAT_5ce12e70 <= *(double *)((int)this + 200))) {
      if ((local_40 == 1) && ((uVar2 < uVar3 && (local_4c == 0)))) {
        local_4c = uVar3 - uVar2;
        if (local_3c <= uVar3 - uVar2) {
          local_4c = local_3c;
        }
        pdVar4 = param_4;
        for (iVar1 = (*(ushort *)(*(int *)((int)this + 0x70) + 2) * local_4c & 0x1fffffff) << 1;
            iVar1 != 0; iVar1 = iVar1 + -1) {
          *(undefined4 *)pdVar4 = 0;
          pdVar4 = (double *)((int)pdVar4 + 4);
        }
        for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(undefined1 *)pdVar4 = 0;
          pdVar4 = (double *)((int)pdVar4 + 1);
        }
        uVar3 = *(int *)((int)this + 0x198) + local_4c;
        *(uint *)((int)this + 0x198) = uVar3;
        local_40 = (uint)(*(uint *)((int)this + 0x194) <= uVar3);
      }
    }
    else {
      local_40 = 1;
      local_4c = local_4c + (uVar3 - uVar2);
    }
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdbedba;
  uVar3 = *(uint *)(*(int *)((int)this + 0x70) + 4);
  local_3c = local_4c;
  if (*(int *)((int)this + 0x358) == 0) {
    iVar1 = *(int *)((int)this + 0x344) - local_4c;
    *(int *)((int)this + 0x344) = iVar1;
    if (iVar1 < 1) {
      uVar2 = rand();
      *(uint *)((int)this + 0x344) = (uVar2 & 3) * (uVar3 >> 4) + uVar3 * 4;
      uVar2 = rand();
      *(uint *)((int)this + 0x350) = (uVar2 & 0x1f) + 1;
      uVar2 = rand();
      *(uint *)((int)this + 0x354) = (uVar2 & 0x1f) + 1;
      *(uint *)((int)this + 0x358) = uVar3 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdbed16;
    }
    local_3c = 0;
  }
  else {
LAB_5cdbed16:
    uVar3 = *(uint *)((int)this + 0x358);
    if (uVar3 <= local_3c) {
      local_3c = uVar3;
    }
    *(uint *)((int)this + 0x358) = uVar3 - local_3c;
  }
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x70) + 2);
  for (; local_3c != 0; local_3c = local_3c - 1) {
    uVar2 = DAT_5ce2a0dc % *(uint *)((int)this + 0x348);
    DAT_5ce2a0dc = DAT_5ce2a0dc + *(int *)((int)this + 0x350);
    *param_4 = (double)(*(float *)(*(int *)((int)this + 0x34c) + uVar2 * 4) + (float)*param_4);
    if (1 < uVar3) {
      uVar2 = DAT_5ce2a0e0 % *(uint *)((int)this + 0x348);
      DAT_5ce2a0e0 = DAT_5ce2a0e0 + 1 + *(int *)((int)this + 0x354);
      param_4[1] = (double)(*(float *)(*(int *)((int)this + 0x34c) + uVar2 * 4) + (float)param_4[1])
      ;
    }
    param_4 = param_4 + uVar3;
  }
LAB_5cdbedba:
  if (param_3 != (int *)0x0) {
    *param_3 = local_44;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = local_4c;
  }
  return local_40;
}


