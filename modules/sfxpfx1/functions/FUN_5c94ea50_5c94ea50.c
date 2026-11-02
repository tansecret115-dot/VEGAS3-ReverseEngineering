/* Module: sfxpfx1.dll
   Function: FUN_5c94ea50
   Address: 5c94ea50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c94ea50(void *this,int param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint local_24;
  int local_18 [5];
  
  uVar1 = *param_3;
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x48) + 2);
  iVar3 = FUN_5c94cb00(this,local_18);
  if ((param_1 == 0) && (*(int *)((int)this + 0x34) != 0)) {
    iVar3 = FUN_5c94e700(this);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  else if (((iVar3 != 0) || (*(int *)((int)this + 0x4c) == 0)) &&
          (iVar3 = FUN_5c94e6c0(this,local_18), iVar3 < 0)) {
    return iVar3;
  }
  uVar5 = 0;
  *(undefined4 *)((int)this + 0x34) = 1;
  if (uVar6 != 0) {
    do {
      pbVar7 = param_2 + uVar5;
      for (uVar4 = uVar1; uVar4 != 0; uVar4 = uVar4 - 1) {
        FUN_5c94e890((int)this,(double)(int)(char)(*pbVar7 ^ 0x80) * _DAT_5c98b9d8,uVar5);
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
        *pbVar7 = bVar2;
        pbVar7 = pbVar7 + uVar6;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  if (DAT_5c998760 != 0) goto LAB_5c94ece0;
  uVar6 = *(uint *)(*(int *)((int)this + 0x48) + 4);
  if (*(int *)((int)this + 0x2008) == 0) {
    iVar3 = *(int *)((int)this + 0x1ff4) - uVar1;
    *(int *)((int)this + 0x1ff4) = iVar3;
    if (iVar3 < 1) {
      uVar5 = rand();
      *(uint *)((int)this + 0x1ff4) = (uVar5 & 3) * (uVar6 >> 4) + uVar6 * 4;
      uVar5 = rand();
      *(uint *)((int)this + 0x2000) = (uVar5 & 0x1f) + 1;
      uVar5 = rand();
      *(uint *)((int)this + 0x2004) = (uVar5 & 0x1f) + 1;
      *(uint *)((int)this + 0x2008) = uVar6 >> 3;
      _DAT_5c99f074 = 0;
      _DAT_5c99f078 = 0;
      goto LAB_5c94ebd1;
    }
    local_24 = 0;
  }
  else {
LAB_5c94ebd1:
    uVar6 = *(uint *)((int)this + 0x2008);
    local_24 = uVar1;
    if (uVar6 <= uVar1) {
      local_24 = uVar6;
    }
    *(uint *)((int)this + 0x2008) = uVar6 - local_24;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x48) + 2);
  for (; local_24 != 0; local_24 = local_24 - 1) {
    DAT_5c99f07c = DAT_5c99f07c + *(int *)((int)this + 0x2000);
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
    if (1 < uVar6) {
      DAT_5c99f080 = DAT_5c99f080 + 1 + *(int *)((int)this + 0x2004);
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
    param_2 = param_2 + uVar6;
  }
LAB_5c94ece0:
  *param_3 = uVar1;
  return 0;
}


