/* Module: sfppack3.dll
   Function: FUN_5cc452d0
   Address: 5cc452d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cc452d0(void *this,int param_1,byte *param_2,uint *param_3)

{
  double dVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 local_23c;
  undefined4 uStack_238;
  int local_228 [138];
  
  uVar6 = *param_3;
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x260) + 2);
  iVar4 = FUN_5cc41e60(this,local_228,param_1);
  if (iVar4 < 0) {
    return iVar4;
  }
  uVar9 = uVar6 * uVar3;
  uVar7 = 0;
  pbVar8 = param_2;
  if (uVar9 != 0) {
    do {
      dVar1 = (double)(int)(char)(*pbVar8 ^ 0x80) * _DAT_5cc87d68;
      uStack_238 = (undefined4)((ulonglong)dVar1 >> 0x20);
      local_23c = SUB84(dVar1,0);
      FUN_5cc45e90((int)this,local_23c,uStack_238,uVar7 % uVar3);
      iVar5 = ftol();
      if (iVar5 < -0x80) {
        bVar2 = 0;
      }
      else if (iVar5 < 0x80) {
        bVar2 = (byte)iVar5 ^ 0x80;
      }
      else {
        bVar2 = 0xff;
      }
      *pbVar8 = bVar2;
      pbVar8 = pbVar8 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  if (DAT_5cc982c0 != 0) {
    return iVar4;
  }
  uVar3 = *(uint *)(*(int *)((int)this + 0x260) + 4);
  if (*(int *)((int)this + 0x3860) == 0) {
    iVar5 = *(int *)((int)this + 0x384c) - uVar6;
    *(int *)((int)this + 0x384c) = iVar5;
    if (0 < iVar5) {
      uVar6 = 0;
      goto LAB_5cc4542b;
    }
    uVar7 = rand();
    *(uint *)((int)this + 0x384c) = (uVar7 & 3) * (uVar3 >> 4) + uVar3 * 3;
    uVar7 = rand();
    *(uint *)((int)this + 0x3858) = (uVar7 & 0x1f) + 1;
    uVar7 = rand();
    *(uint *)((int)this + 0x385c) = (uVar7 & 0x1f) + 1;
    *(uint *)((int)this + 0x3860) = uVar3 >> 3;
    _DAT_5cc9ebd4 = 0;
    _DAT_5cc9ebd8 = 0;
  }
  uVar3 = *(uint *)((int)this + 0x3860);
  if (uVar3 <= uVar6) {
    uVar6 = uVar3;
  }
  *(uint *)((int)this + 0x3860) = uVar3 - uVar6;
LAB_5cc4542b:
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x260) + 2);
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    DAT_5cc9ebdc = DAT_5cc9ebdc + *(int *)((int)this + 0x3858);
    iVar5 = ftol();
    if (iVar5 < -0x80) {
      bVar2 = 0;
    }
    else if (iVar5 < 0x80) {
      bVar2 = (byte)iVar5 ^ 0x80;
    }
    else {
      bVar2 = 0xff;
    }
    *param_2 = bVar2;
    if (1 < uVar3) {
      DAT_5cc9ebe0 = DAT_5cc9ebe0 + 1 + *(int *)((int)this + 0x385c);
      iVar5 = ftol();
      if (iVar5 < -0x80) {
        bVar2 = 0;
      }
      else if (iVar5 < 0x80) {
        bVar2 = (byte)iVar5 ^ 0x80;
      }
      else {
        bVar2 = 0xff;
      }
      param_2[1] = bVar2;
    }
    param_2 = param_2 + uVar3;
  }
  return iVar4;
}


