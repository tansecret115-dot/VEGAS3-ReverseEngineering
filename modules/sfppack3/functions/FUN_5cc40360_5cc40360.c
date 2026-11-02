/* Module: sfppack3.dll
   Function: FUN_5cc40360
   Address: 5cc40360
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cc40360(void *this,undefined4 param_1,byte *param_2,uint *param_3)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_c;
  uint local_8;
  int local_4;
  
  uVar4 = *param_3;
  uVar1 = *(ushort *)(*(int *)((int)this + 0x38) + 2);
  local_8 = uVar4;
  iVar3 = FUN_5cc3e850(this,&local_c);
  if (((iVar3 != 0) || (*(int *)((int)this + 0x3c) == 0)) &&
     (iVar3 = FUN_5cc3ff40(this,&local_c), iVar3 < 0)) {
    return iVar3;
  }
  local_4 = FUN_5cc40100(this,param_2,(uint)uVar1,uVar4);
  uVar5 = uVar4;
  if (DAT_5cc982c0 != 0) goto LAB_5cc4054e;
  uVar6 = *(uint *)(*(int *)((int)this + 0x38) + 4);
  if (*(int *)((int)this + 0x98) == 0) {
    iVar3 = *(int *)((int)this + 0x84) - uVar4;
    *(int *)((int)this + 0x84) = iVar3;
    if (iVar3 < 1) {
      uVar5 = rand();
      *(uint *)((int)this + 0x84) = (uVar5 & 3) * (uVar6 >> 4) + uVar6 * 3;
      uVar5 = rand();
      *(uint *)((int)this + 0x90) = (uVar5 & 0x1f) + 1;
      uVar5 = rand();
      *(uint *)((int)this + 0x94) = (uVar5 & 0x1f) + 1;
      *(uint *)((int)this + 0x98) = uVar6 >> 3;
      _DAT_5cc9ebd4 = 0;
      _DAT_5cc9ebd8 = 0;
      uVar5 = local_8;
      goto LAB_5cc40444;
    }
    uVar4 = 0;
  }
  else {
LAB_5cc40444:
    uVar6 = *(uint *)((int)this + 0x98);
    if (uVar6 <= uVar5) {
      uVar4 = uVar6;
    }
    *(uint *)((int)this + 0x98) = uVar6 - uVar4;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x38) + 2);
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    DAT_5cc9ebdc = DAT_5cc9ebdc + *(int *)((int)this + 0x90);
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
      DAT_5cc9ebe0 = DAT_5cc9ebe0 + 1 + *(int *)((int)this + 0x94);
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
LAB_5cc4054e:
  *param_3 = uVar5;
  return local_4;
}


