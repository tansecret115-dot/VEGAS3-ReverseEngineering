/* Module: sfppack1.dll
   Function: FUN_5cdd8d90
   Address: 5cdd8d90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdd8d90(void *this,int param_1,double *param_2,uint *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_44;
  int local_38 [13];
  
  uVar2 = *param_3;
  sVar1 = *(short *)(*(int *)((int)this + 0x6c) + 2);
  iVar3 = FUN_5cdd43d0(this,local_38);
  if ((param_1 == 0) && (*(int *)((int)this + 0x58) != 0)) {
    local_44 = FUN_5cdd6ed0(this);
    if (local_44 < 0) {
      return local_44;
    }
  }
  else if (((iVar3 != 0) || (*(int *)((int)this + 0x70) == 0)) &&
          (local_44 = FUN_5cdd6c60(this,local_38), local_44 < 0)) {
    return local_44;
  }
  *(undefined4 *)((int)this + 0x58) = 1;
  if (sVar1 == 1) {
    local_44 = FUN_5cdd8a50(this,param_2,1,uVar2);
  }
  else if (sVar1 == 2) {
    local_44 = FUN_5cdd8b20(this,param_2,2,uVar2);
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdd8f65;
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
      goto LAB_5cdd8ec5;
    }
    uVar4 = 0;
  }
  else {
LAB_5cdd8ec5:
    uVar6 = *(uint *)((int)this + 0x278);
    uVar4 = uVar2;
    if (uVar6 <= uVar2) {
      uVar4 = uVar6;
    }
    *(uint *)((int)this + 0x278) = uVar6 - uVar4;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x6c) + 2);
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar5 = DAT_5ce2a0dc % *(uint *)((int)this + 0x268);
    DAT_5ce2a0dc = DAT_5ce2a0dc + *(int *)((int)this + 0x270);
    *param_2 = (double)(*(float *)(*(int *)((int)this + 0x26c) + uVar5 * 4) + (float)*param_2);
    if (1 < uVar6) {
      uVar5 = DAT_5ce2a0e0 % *(uint *)((int)this + 0x268);
      DAT_5ce2a0e0 = DAT_5ce2a0e0 + 1 + *(int *)((int)this + 0x274);
      param_2[1] = (double)(*(float *)(*(int *)((int)this + 0x26c) + uVar5 * 4) + (float)param_2[1])
      ;
    }
    param_2 = param_2 + uVar6;
  }
LAB_5cdd8f65:
  *param_3 = uVar2;
  return local_44;
}


