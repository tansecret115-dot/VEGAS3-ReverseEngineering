/* Module: sfppack1.dll
   Function: FUN_5cdd7cc0
   Address: 5cdd7cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdd7cc0(void *this,int param_1,short *param_2,uint *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_30 [12];
  
  uVar2 = *param_3;
  sVar1 = *(short *)(*(int *)((int)this + 0x6c) + 2);
  iVar3 = FUN_5cdd43d0(this,local_30);
  if ((param_1 == 0) && (*(int *)((int)this + 0x58) != 0)) {
    param_1 = FUN_5cdd6ed0(this);
    if (param_1 < 0) {
      return param_1;
    }
  }
  else if (((iVar3 != 0) || (*(int *)((int)this + 0x70) == 0)) &&
          (param_1 = FUN_5cdd6c60(this,local_30), param_1 < 0)) {
    return param_1;
  }
  *(undefined4 *)((int)this + 0x58) = 1;
  if (sVar1 == 1) {
    param_1 = FUN_5cdd78d0(this,param_2,1,uVar2);
  }
  else if (sVar1 == 2) {
    param_1 = FUN_5cdd79e0(this,param_2,2,uVar2);
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdd7ed2;
  uVar5 = *(uint *)(*(int *)((int)this + 0x6c) + 4);
  if (*(int *)((int)this + 0x278) == 0) {
    iVar3 = *(int *)((int)this + 0x264) - uVar2;
    *(int *)((int)this + 0x264) = iVar3;
    if (iVar3 < 1) {
      uVar4 = rand();
      *(uint *)((int)this + 0x264) = (uVar4 & 3) * (uVar5 >> 4) + uVar5 * 4;
      uVar4 = rand();
      *(uint *)((int)this + 0x270) = (uVar4 & 0x1f) + 1;
      uVar4 = rand();
      *(uint *)((int)this + 0x274) = (uVar4 & 0x1f) + 1;
      *(uint *)((int)this + 0x278) = uVar5 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdd7def;
    }
    uVar4 = 0;
  }
  else {
LAB_5cdd7def:
    uVar5 = *(uint *)((int)this + 0x278);
    uVar4 = uVar2;
    if (uVar5 <= uVar2) {
      uVar4 = uVar5;
    }
    *(uint *)((int)this + 0x278) = uVar5 - uVar4;
  }
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x6c) + 2);
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    DAT_5ce2a0f4 = DAT_5ce2a0f4 + *(int *)((int)this + 0x270);
    iVar3 = ftol();
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    *param_2 = *param_2 + (short)iVar3;
    if (1 < uVar5) {
      DAT_5ce2a0f8 = DAT_5ce2a0f8 + 1 + *(int *)((int)this + 0x274);
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
LAB_5cdd7ed2:
  *param_3 = uVar2;
  return param_1;
}


