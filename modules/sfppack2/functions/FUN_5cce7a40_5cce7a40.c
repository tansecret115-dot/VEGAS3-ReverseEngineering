/* Module: sfppack2.dll
   Function: FUN_5cce7a40
   Address: 5cce7a40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cce7a40(void *this,int param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int local_54 [21];
  
  uVar1 = *param_3;
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x8c) + 2);
  iVar3 = FUN_5cce29b0(this,local_54);
  if ((((iVar3 != 0) || (*(int *)((int)this + 0x90) == 0)) ||
      ((param_1 == 0 && (*(int *)((int)this + 0x78) != 0)))) &&
     (iVar3 = FUN_5cce74e0(this,local_54,param_1), iVar3 < 0)) {
    return iVar3;
  }
  uVar6 = 0;
  *(undefined4 *)((int)this + 0x78) = 1;
  if (uVar5 != 0) {
    param_1 = (int)this + 0xb0;
    piVar4 = (int *)((int)this + 0x270);
    do {
      FUN_5cce76f0(param_2 + uVar6,uVar5,(int)this + 0xa0,param_1,piVar4,uVar1);
      uVar6 = uVar6 + 1;
      piVar4 = piVar4 + 0x44;
      param_1 = param_1 + 0xe0;
    } while (uVar6 < uVar5);
  }
  if (DAT_5cd679f8 != 0) goto LAB_5cce7c83;
  uVar5 = *(uint *)(*(int *)((int)this + 0x8c) + 4);
  if (*(int *)((int)this + 0x6a8) == 0) {
    iVar3 = *(int *)((int)this + 0x694) - uVar1;
    *(int *)((int)this + 0x694) = iVar3;
    if (iVar3 < 1) {
      uVar6 = rand();
      *(uint *)((int)this + 0x694) = (uVar6 & 3) * (uVar5 >> 4) + uVar5 * 3;
      uVar6 = rand();
      *(uint *)((int)this + 0x6a0) = (uVar6 & 0x1f) + 1;
      uVar6 = rand();
      *(uint *)((int)this + 0x6a4) = (uVar6 & 0x1f) + 1;
      *(uint *)((int)this + 0x6a8) = uVar5 >> 3;
      _DAT_5cd76514 = 0;
      _DAT_5cd76518 = 0;
      goto LAB_5cce7b7c;
    }
    uVar6 = 0;
  }
  else {
LAB_5cce7b7c:
    uVar5 = *(uint *)((int)this + 0x6a8);
    uVar6 = uVar1;
    if (uVar5 <= uVar1) {
      uVar6 = uVar5;
    }
    *(uint *)((int)this + 0x6a8) = uVar5 - uVar6;
  }
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x8c) + 2);
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    DAT_5cd7651c = DAT_5cd7651c + *(int *)((int)this + 0x6a0);
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
    if (1 < uVar5) {
      DAT_5cd76520 = DAT_5cd76520 + 1 + *(int *)((int)this + 0x6a4);
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
    param_2 = param_2 + uVar5;
  }
LAB_5cce7c83:
  *param_3 = uVar1;
  return 0;
}


