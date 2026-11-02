/* Module: sfxpfx1.dll
   Function: FUN_5c952180
   Address: 5c952180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c952180(void *this,int param_1,short *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  uint local_24;
  int local_18 [5];
  
  uVar1 = *param_3;
  uVar2 = (uint)*(ushort *)(*(int *)((int)this + 0x48) + 2);
  iVar3 = FUN_5c94ff60(this,local_18);
  if ((param_1 == 0) && (*(int *)((int)this + 0x34) != 0)) {
    iVar3 = FUN_5c951c60(this);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  else if (((iVar3 != 0) || (*(int *)((int)this + 0x4c) == 0)) &&
          (iVar3 = FUN_5c951a00(this,local_18), iVar3 < 0)) {
    return iVar3;
  }
  *(undefined4 *)((int)this + 0x34) = 1;
  psVar5 = param_2;
  for (uVar4 = uVar1; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar6 = 0;
    if (uVar2 != 0) {
      do {
        FUN_5c951df0((int)this,(double)(int)*psVar5 * _DAT_5c98b9e8,uVar6);
        iVar3 = ftol();
        if (iVar3 < -0x8000) {
          iVar3 = -0x8000;
        }
        else if (0x7fff < iVar3) {
          iVar3 = 0x7fff;
        }
        *psVar5 = (short)iVar3;
        uVar6 = uVar6 + 1;
        psVar5 = psVar5 + 1;
      } while (uVar6 < uVar2);
    }
  }
  if (DAT_5c998760 != 0) goto LAB_5c9523ef;
  uVar2 = *(uint *)(*(int *)((int)this + 0x48) + 4);
  if (*(int *)((int)this + 0xc0) == 0) {
    iVar3 = *(int *)((int)this + 0xac) - uVar1;
    *(int *)((int)this + 0xac) = iVar3;
    if (iVar3 < 1) {
      uVar4 = rand();
      *(uint *)((int)this + 0xac) = (uVar4 & 3) * (uVar2 >> 4) + uVar2 * 4;
      uVar4 = rand();
      *(uint *)((int)this + 0xb8) = (uVar4 & 0x1f) + 1;
      uVar4 = rand();
      *(uint *)((int)this + 0xbc) = (uVar4 & 0x1f) + 1;
      *(uint *)((int)this + 0xc0) = uVar2 >> 3;
      _DAT_5c99f074 = 0;
      _DAT_5c99f078 = 0;
      goto LAB_5c9522fe;
    }
    local_24 = 0;
  }
  else {
LAB_5c9522fe:
    uVar2 = *(uint *)((int)this + 0xc0);
    local_24 = uVar1;
    if (uVar2 <= uVar1) {
      local_24 = uVar2;
    }
    *(uint *)((int)this + 0xc0) = uVar2 - local_24;
  }
  uVar2 = (uint)*(ushort *)(*(int *)((int)this + 0x48) + 2);
  for (; local_24 != 0; local_24 = local_24 - 1) {
    DAT_5c99f06c = DAT_5c99f06c + *(int *)((int)this + 0xb8);
    iVar3 = ftol();
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    *param_2 = *param_2 + (short)iVar3;
    if (1 < uVar2) {
      DAT_5c99f070 = DAT_5c99f070 + 1 + *(int *)((int)this + 0xbc);
      iVar3 = ftol();
      if (iVar3 < -0x8000) {
        iVar3 = -0x8000;
      }
      else if (0x7fff < iVar3) {
        iVar3 = 0x7fff;
      }
      param_2[1] = param_2[1] + (short)iVar3;
    }
    param_2 = param_2 + uVar2;
  }
LAB_5c9523ef:
  *param_3 = uVar1;
  return 0;
}


