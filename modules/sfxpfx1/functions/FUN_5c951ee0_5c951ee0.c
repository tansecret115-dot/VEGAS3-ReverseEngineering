/* Module: sfxpfx1.dll
   Function: FUN_5c951ee0
   Address: 5c951ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c951ee0(void *this,int param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint local_24;
  int local_18 [5];
  
  uVar1 = *param_3;
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x48) + 2);
  iVar4 = FUN_5c94ff60(this,local_18);
  if ((param_1 == 0) && (*(int *)((int)this + 0x34) != 0)) {
    iVar4 = FUN_5c951c60(this);
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  else if (((iVar4 != 0) || (*(int *)((int)this + 0x4c) == 0)) &&
          (iVar4 = FUN_5c951a00(this,local_18), iVar4 < 0)) {
    return iVar4;
  }
  *(undefined4 *)((int)this + 0x34) = 1;
  pbVar6 = param_2;
  for (uVar5 = uVar1; uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar7 = 0;
    if (uVar3 != 0) {
      do {
        FUN_5c951df0((int)this,(double)(int)(char)(*pbVar6 ^ 0x80) * _DAT_5c98b9d8,uVar7);
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
        *pbVar6 = bVar2;
        uVar7 = uVar7 + 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 < uVar3);
    }
  }
  if (DAT_5c998760 != 0) goto LAB_5c95216d;
  uVar3 = *(uint *)(*(int *)((int)this + 0x48) + 4);
  if (*(int *)((int)this + 0xc0) == 0) {
    iVar4 = *(int *)((int)this + 0xac) - uVar1;
    *(int *)((int)this + 0xac) = iVar4;
    if (iVar4 < 1) {
      uVar5 = rand();
      *(uint *)((int)this + 0xac) = (uVar5 & 3) * (uVar3 >> 4) + uVar3 * 4;
      uVar5 = rand();
      *(uint *)((int)this + 0xb8) = (uVar5 & 0x1f) + 1;
      uVar5 = rand();
      *(uint *)((int)this + 0xbc) = (uVar5 & 0x1f) + 1;
      *(uint *)((int)this + 0xc0) = uVar3 >> 3;
      _DAT_5c99f074 = 0;
      _DAT_5c99f078 = 0;
      goto LAB_5c95205a;
    }
    local_24 = 0;
  }
  else {
LAB_5c95205a:
    uVar3 = *(uint *)((int)this + 0xc0);
    local_24 = uVar1;
    if (uVar3 <= uVar1) {
      local_24 = uVar3;
    }
    *(uint *)((int)this + 0xc0) = uVar3 - local_24;
  }
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x48) + 2);
  for (; local_24 != 0; local_24 = local_24 - 1) {
    DAT_5c99f07c = DAT_5c99f07c + *(int *)((int)this + 0xb8);
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
      DAT_5c99f080 = DAT_5c99f080 + 1 + *(int *)((int)this + 0xbc);
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
LAB_5c95216d:
  *param_3 = uVar1;
  return 0;
}


