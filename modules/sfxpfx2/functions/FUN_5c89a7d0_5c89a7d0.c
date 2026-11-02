/* Module: sfxpfx2.dll
   Function: FUN_5c89a7d0
   Address: 5c89a7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c89a7d0(void *this,int param_1,int *param_2,uint *param_3)

{
  short sVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_10 [4];
  
  uVar2 = *param_3;
  sVar1 = *(short *)(*(int *)((int)this + 0x4c) + 2);
  iVar4 = FUN_5c897530(this,local_10);
  if ((param_1 == 0) && (*(int *)((int)this + 0x38) != 0)) {
    param_1 = FUN_5c899460(this);
    if (param_1 < 0) {
      return param_1;
    }
  }
  else if (((iVar4 != 0) || (*(int *)((int)this + 0x50) == 0)) &&
          (param_1 = FUN_5c899280(this,local_10), param_1 < 0)) {
    return param_1;
  }
  *(undefined4 *)((int)this + 0x38) = 1;
  if (sVar1 == 1) {
    param_1 = FUN_5c89a3f0(this,param_2,1,uVar2);
  }
  else if (sVar1 == 2) {
    param_1 = FUN_5c89a4e0(this,param_2,2,uVar2);
  }
  if (DAT_5c8e93b8 != 0) goto LAB_5c89aa0b;
  uVar6 = *(uint *)(*(int *)((int)this + 0x4c) + 4);
  if (*(int *)((int)this + 0x268) == 0) {
    iVar4 = *(int *)((int)this + 0x254) - uVar2;
    *(int *)((int)this + 0x254) = iVar4;
    if (iVar4 < 1) {
      uVar5 = rand();
      *(uint *)((int)this + 0x254) = (uVar5 & 3) * (uVar6 >> 4) + uVar6 * 4;
      uVar5 = rand();
      *(uint *)((int)this + 0x260) = (uVar5 & 0x1f) + 1;
      uVar5 = rand();
      *(uint *)((int)this + 0x264) = (uVar5 & 0x1f) + 1;
      *(uint *)((int)this + 0x268) = uVar6 >> 3;
      _DAT_5c8efccc = 0;
      _DAT_5c8efcd0 = 0;
      goto LAB_5c89a8ff;
    }
    uVar5 = 0;
  }
  else {
LAB_5c89a8ff:
    uVar6 = *(uint *)((int)this + 0x268);
    uVar5 = uVar2;
    if (uVar6 <= uVar2) {
      uVar5 = uVar6;
    }
    *(uint *)((int)this + 0x268) = uVar6 - uVar5;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x4c) + 2);
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    fVar3 = *(float *)(*(int *)((int)this + 0x25c) + (DAT_5c8efcbc % *(uint *)((int)this + 600)) * 4
                      ) * (float)_DAT_5c8dc978;
    DAT_5c8efcbc = DAT_5c8efcbc + *(int *)((int)this + 0x260);
    if ((float)_DAT_5c8dc970 <= fVar3) {
      if (fVar3 <= (float)_DAT_5c8dc968) {
        iVar4 = ftol();
      }
      else {
        iVar4 = 0x7fffffff;
      }
    }
    else {
      iVar4 = -0x80000000;
    }
    *param_2 = *param_2 + iVar4;
    if (1 < uVar6) {
      fVar3 = *(float *)(*(int *)((int)this + 0x25c) +
                        (DAT_5c8efcc0 % *(uint *)((int)this + 600)) * 4) * (float)_DAT_5c8dc978;
      DAT_5c8efcc0 = DAT_5c8efcc0 + 1 + *(int *)((int)this + 0x264);
      if ((float)_DAT_5c8dc970 <= fVar3) {
        if (fVar3 <= (float)_DAT_5c8dc968) {
          iVar4 = ftol();
        }
        else {
          iVar4 = 0x7fffffff;
        }
      }
      else {
        iVar4 = -0x80000000;
      }
      param_2[1] = param_2[1] + iVar4;
    }
    param_2 = param_2 + uVar6;
  }
LAB_5c89aa0b:
  *param_3 = uVar2;
  return param_1;
}


