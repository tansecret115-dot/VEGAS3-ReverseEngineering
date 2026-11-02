/* Module: sfxpfx2.dll
   Function: FUN_5c89a1c0
   Address: 5c89a1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c89a1c0(void *this,int param_1,short *param_2,uint *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_10 [4];
  
  uVar2 = *param_3;
  sVar1 = *(short *)(*(int *)((int)this + 0x4c) + 2);
  iVar3 = FUN_5c897530(this,local_10);
  if ((param_1 == 0) && (*(int *)((int)this + 0x38) != 0)) {
    param_1 = FUN_5c899460(this);
    if (param_1 < 0) {
      return param_1;
    }
  }
  else if (((iVar3 != 0) || (*(int *)((int)this + 0x50) == 0)) &&
          (param_1 = FUN_5c899280(this,local_10), param_1 < 0)) {
    return param_1;
  }
  *(undefined4 *)((int)this + 0x38) = 1;
  if (sVar1 == 1) {
    param_1 = FUN_5c899e10(this,param_2,1,uVar2);
  }
  else if (sVar1 == 2) {
    param_1 = FUN_5c899ef0(this,param_2,2,uVar2);
  }
  if (DAT_5c8e93b8 != 0) goto LAB_5c89a3d2;
  uVar5 = *(uint *)(*(int *)((int)this + 0x4c) + 4);
  if (*(int *)((int)this + 0x268) == 0) {
    iVar3 = *(int *)((int)this + 0x254) - uVar2;
    *(int *)((int)this + 0x254) = iVar3;
    if (iVar3 < 1) {
      uVar4 = rand();
      *(uint *)((int)this + 0x254) = (uVar4 & 3) * (uVar5 >> 4) + uVar5 * 4;
      uVar4 = rand();
      *(uint *)((int)this + 0x260) = (uVar4 & 0x1f) + 1;
      uVar4 = rand();
      *(uint *)((int)this + 0x264) = (uVar4 & 0x1f) + 1;
      *(uint *)((int)this + 0x268) = uVar5 >> 3;
      _DAT_5c8efccc = 0;
      _DAT_5c8efcd0 = 0;
      goto LAB_5c89a2ef;
    }
    uVar4 = 0;
  }
  else {
LAB_5c89a2ef:
    uVar5 = *(uint *)((int)this + 0x268);
    uVar4 = uVar2;
    if (uVar5 <= uVar2) {
      uVar4 = uVar5;
    }
    *(uint *)((int)this + 0x268) = uVar5 - uVar4;
  }
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x4c) + 2);
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    DAT_5c8efcc4 = DAT_5c8efcc4 + *(int *)((int)this + 0x260);
    iVar3 = ftol();
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    *param_2 = *param_2 + (short)iVar3;
    if (1 < uVar5) {
      DAT_5c8efcc8 = DAT_5c8efcc8 + 1 + *(int *)((int)this + 0x264);
      iVar3 = ftol();
      if (iVar3 < -0x8000) {
        iVar3 = -0x8000;
      }
      else if (0x7fff < iVar3) {
        iVar3 = 0x7fff;
      }
      param_2[1] = param_2[1] + (short)iVar3;
    }
    param_2 = param_2 + uVar5;
  }
LAB_5c89a3d2:
  *param_3 = uVar2;
  return param_1;
}


