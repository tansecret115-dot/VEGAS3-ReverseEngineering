/* Module: sfppack2.dll
   Function: FUN_5ccd59a0
   Address: 5ccd59a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __thiscall
FUN_5ccd59a0(void *this,uint param_1,byte *param_2,uint *param_3,byte *param_4,uint *param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  byte *pbVar8;
  bool bVar9;
  uint local_4;
  
  puVar6 = param_5;
  puVar7 = param_3;
  bVar9 = param_1 == 0;
  *(uint *)((int)this + 0x2c8) = (uint)(param_1 == 2);
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x2b8) + 2);
  if (param_3 == (uint *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = *param_3;
  }
  if (param_5 == (uint *)0x0) {
    param_1 = 0;
  }
  else {
    param_1 = *param_5;
  }
  if (bVar9 != 0) {
    *(undefined4 *)((int)this + 0x2f8) = 0;
    *(undefined4 *)((int)this + 0x2f4) = 0;
  }
  iVar2 = FUN_5ccd5830(this,*(int *)((int)this + 0x300),local_4,(uint)bVar9);
  if (*(int *)(iVar2 * 0x280 + 0x328 + (int)this) != 0) {
    if (*(int *)((int)this + 0x2c8) != 0) {
      *puVar6 = 0;
      return (byte *)1;
    }
    if (param_1 <= local_4) {
      local_4 = param_1;
    }
    *puVar7 = local_4;
    *puVar6 = local_4;
    for (; local_4 != 0; local_4 = local_4 - 1) {
      *param_4 = *param_2;
      if (uVar3 == 2) {
        param_4[1] = param_2[1];
      }
      param_4 = param_4 + uVar3;
      param_2 = param_2 + uVar3;
    }
    return (byte *)0;
  }
  param_2 = (byte *)FUN_5ccdbb00(this,param_2,(int *)&local_4,param_4,&param_1,
                                 (undefined4 *)((int)this + iVar2 * 0x280 + 0x318));
  uVar3 = param_1;
  if (DAT_5cd679f8 != 0) goto LAB_5ccd5bea;
  uVar5 = *(uint *)(*(int *)((int)this + 0x2b8) + 4);
  if (*(int *)((int)this + 0xab0) == 0) {
    iVar2 = *(int *)((int)this + 0xa9c) - param_1;
    *(int *)((int)this + 0xa9c) = iVar2;
    if (iVar2 < 1) {
      uVar4 = rand();
      *(uint *)((int)this + 0xa9c) = (uVar4 & 3) * (uVar5 >> 4) + uVar5 * 3;
      uVar4 = rand();
      *(uint *)((int)this + 0xaa8) = (uVar4 & 0x1f) + 1;
      uVar4 = rand();
      *(uint *)((int)this + 0xaac) = (uVar4 & 0x1f) + 1;
      *(uint *)((int)this + 0xab0) = uVar5 >> 3;
      _DAT_5cd76514 = 0;
      _DAT_5cd76518 = 0;
      puVar7 = param_3;
      goto LAB_5ccd5adf;
    }
    uVar3 = 0;
  }
  else {
LAB_5ccd5adf:
    uVar5 = *(uint *)((int)this + 0xab0);
    if (uVar5 <= uVar3) {
      uVar3 = uVar5;
    }
    *(uint *)((int)this + 0xab0) = uVar5 - uVar3;
  }
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x2b8) + 2);
  pbVar8 = param_4;
  puVar6 = param_5;
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    DAT_5cd7651c = DAT_5cd7651c + *(int *)((int)this + 0xaa8);
    param_4 = (byte *)(int)(char)(*pbVar8 ^ 0x80);
    param_5 = puVar6;
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
    *pbVar8 = bVar1;
    if (1 < uVar5) {
      DAT_5cd76520 = DAT_5cd76520 + 1 + *(int *)((int)this + 0xaac);
      param_4 = (byte *)(int)(char)(pbVar8[1] ^ 0x80);
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
      pbVar8[1] = bVar1;
    }
    pbVar8 = pbVar8 + uVar5;
    puVar7 = param_3;
    puVar6 = param_5;
  }
LAB_5ccd5bea:
  if (puVar7 != (uint *)0x0) {
    *puVar7 = local_4;
  }
  if (puVar6 != (uint *)0x0) {
    *puVar6 = param_1;
  }
  return param_2;
}


