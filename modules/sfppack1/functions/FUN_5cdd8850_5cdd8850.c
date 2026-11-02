/* Module: sfppack1.dll
   Function: FUN_5cdd8850
   Address: 5cdd8850
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdd8850(void *this,int param_1,float *param_2,uint *param_3,int param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_30 [12];
  
  sVar1 = *(short *)(*(int *)((int)this + 0x6c) + 2);
  uVar2 = *param_3;
  if (param_4 != 0) {
    *param_3 = 0;
    return 1;
  }
  iVar3 = FUN_5cdd43d0(this,local_30);
  if ((param_1 == 0) && (*(int *)((int)this + 0x58) != 0)) {
    param_4 = FUN_5cdd6ed0(this);
    if (param_4 < 0) {
      return param_4;
    }
  }
  else if (((iVar3 != 0) || (*(int *)((int)this + 0x70) == 0)) &&
          (param_4 = FUN_5cdd6c60(this,local_30), param_4 < 0)) {
    return param_4;
  }
  *(undefined4 *)((int)this + 0x58) = 1;
  if (sVar1 == 1) {
    param_4 = FUN_5cdd8520(this,param_2,1,uVar2);
  }
  else if (sVar1 == 2) {
    param_4 = FUN_5cdd85f0(this,param_2,2,uVar2);
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdd8a32;
  uVar6 = *(uint *)(*(int *)((int)this + 0x6c) + 4);
  if (*(int *)((int)this + 0x278) == 0) {
    iVar3 = *(int *)((int)this + 0x264) - uVar2;
    *(int *)((int)this + 0x264) = iVar3;
    if (iVar3 < 1) {
      uVar4 = rand();
      *(uint *)((int)this + 0x264) = (uVar4 & 3) * (uVar6 >> 4) + uVar6 * 4;
      uVar4 = rand();
      *(uint *)((int)this + 0x270) = (uVar4 & 0x1f) + 1;
      uVar4 = rand();
      *(uint *)((int)this + 0x274) = (uVar4 & 0x1f) + 1;
      *(uint *)((int)this + 0x278) = uVar6 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdd899b;
    }
    uVar4 = 0;
  }
  else {
LAB_5cdd899b:
    uVar6 = *(uint *)((int)this + 0x278);
    uVar4 = uVar2;
    if (uVar6 <= uVar2) {
      uVar4 = uVar6;
    }
    *(uint *)((int)this + 0x278) = uVar6 - uVar4;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x6c) + 2);
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar5 = DAT_5ce2a0e4 % *(uint *)((int)this + 0x268);
    DAT_5ce2a0e4 = DAT_5ce2a0e4 + *(int *)((int)this + 0x270);
    *param_2 = *(float *)(*(int *)((int)this + 0x26c) + uVar5 * 4) + *param_2;
    if (1 < uVar6) {
      uVar5 = DAT_5ce2a0e8 % *(uint *)((int)this + 0x268);
      DAT_5ce2a0e8 = DAT_5ce2a0e8 + 1 + *(int *)((int)this + 0x274);
      param_2[1] = *(float *)(*(int *)((int)this + 0x26c) + uVar5 * 4) + param_2[1];
    }
    param_2 = param_2 + uVar6;
  }
LAB_5cdd8a32:
  *param_3 = uVar2;
  return param_4;
}


