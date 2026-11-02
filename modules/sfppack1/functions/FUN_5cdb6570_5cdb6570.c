/* Module: sfppack1.dll
   Function: FUN_5cdb6570
   Address: 5cdb6570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_5cdb6570(void *this,uint param_1,int param_2,int *param_3,byte *param_4,uint *param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  int local_24;
  double local_20 [4];
  
  bVar7 = param_1 == 0;
  local_24 = 0;
  bVar8 = param_1 == 2;
  param_1 = 0;
  if (param_3 == (int *)0x0) {
    param_3 = &local_24;
  }
  else {
    local_24 = *param_3;
  }
  if (param_5 == (uint *)0x0) {
    param_5 = &param_1;
  }
  else {
    param_1 = *param_5;
  }
  *(uint *)((int)this + 0x70) = (uint)bVar8;
  iVar2 = FUN_5cdb3080(this,(undefined4 *)local_20);
  if ((bVar7) && (*(int *)((int)this + 0x4c) != 0)) {
    iVar2 = FUN_5cdb6230(this);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  else if (((iVar2 != 0) || (*(int *)((int)this + 0x68) == 0)) &&
          ((bVar8 == 0 && (iVar2 = FUN_5cdb5bb0(this,local_20), iVar2 < 0)))) {
    return iVar2;
  }
  *(undefined4 *)((int)this + 0x4c) = 1;
  param_2 = FUN_5cdb7b40(this,param_2,&local_24,param_4,&param_1);
  uVar3 = param_1;
  if (DAT_5ce237e8 != 0) goto LAB_5cdb67c4;
  uVar5 = *(uint *)(*(int *)((int)this + 0x60) + 4);
  if (*(int *)((int)this + 0x128) == 0) {
    iVar2 = *(int *)((int)this + 0x114) - param_1;
    *(int *)((int)this + 0x114) = iVar2;
    if (iVar2 < 1) {
      uVar4 = rand();
      *(uint *)((int)this + 0x114) = (uVar4 & 3) * (uVar5 >> 4) + uVar5 * 4;
      uVar4 = rand();
      *(uint *)((int)this + 0x120) = (uVar4 & 0x1f) + 1;
      uVar4 = rand();
      *(uint *)((int)this + 0x124) = (uVar4 & 0x1f) + 1;
      *(uint *)((int)this + 0x128) = uVar5 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdb66c4;
    }
    uVar3 = 0;
  }
  else {
LAB_5cdb66c4:
    uVar5 = *(uint *)((int)this + 0x128);
    if (uVar5 <= uVar3) {
      uVar3 = uVar5;
    }
    *(uint *)((int)this + 0x128) = uVar5 - uVar3;
  }
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x60) + 2);
  pbVar6 = param_4;
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    DAT_5ce2a104 = DAT_5ce2a104 + *(int *)((int)this + 0x120);
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
      DAT_5ce2a108 = DAT_5ce2a108 + 1 + *(int *)((int)this + 0x124);
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
LAB_5cdb67c4:
  *param_3 = local_24;
  *param_5 = param_1;
  return param_2;
}


