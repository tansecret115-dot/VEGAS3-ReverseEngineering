/* Module: sfppack1.dll
   Function: FUN_5cdd82d0
   Address: 5cdd82d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdd82d0(void *this,int param_1,int *param_2,uint *param_3)

{
  short sVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_30 [12];
  
  uVar2 = *param_3;
  sVar1 = *(short *)(*(int *)((int)this + 0x6c) + 2);
  iVar4 = FUN_5cdd43d0(this,local_30);
  if ((param_1 == 0) && (*(int *)((int)this + 0x58) != 0)) {
    param_1 = FUN_5cdd6ed0(this);
    if (param_1 < 0) {
      return param_1;
    }
  }
  else if (((iVar4 != 0) || (*(int *)((int)this + 0x70) == 0)) &&
          (param_1 = FUN_5cdd6c60(this,local_30), param_1 < 0)) {
    return param_1;
  }
  *(undefined4 *)((int)this + 0x58) = 1;
  if (sVar1 == 1) {
    param_1 = FUN_5cdd7ef0(this,param_2,1,uVar2);
  }
  else if (sVar1 == 2) {
    param_1 = FUN_5cdd8000(this,param_2,2,uVar2);
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdd850b;
  uVar6 = *(uint *)(*(int *)((int)this + 0x6c) + 4);
  if (*(int *)((int)this + 0x278) == 0) {
    iVar4 = *(int *)((int)this + 0x264) - uVar2;
    *(int *)((int)this + 0x264) = iVar4;
    if (iVar4 < 1) {
      uVar5 = rand();
      *(uint *)((int)this + 0x264) = (uVar5 & 3) * (uVar6 >> 4) + uVar6 * 4;
      uVar5 = rand();
      *(uint *)((int)this + 0x270) = (uVar5 & 0x1f) + 1;
      uVar5 = rand();
      *(uint *)((int)this + 0x274) = (uVar5 & 0x1f) + 1;
      *(uint *)((int)this + 0x278) = uVar6 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdd83ff;
    }
    uVar5 = 0;
  }
  else {
LAB_5cdd83ff:
    uVar6 = *(uint *)((int)this + 0x278);
    uVar5 = uVar2;
    if (uVar6 <= uVar2) {
      uVar5 = uVar6;
    }
    *(uint *)((int)this + 0x278) = uVar6 - uVar5;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x6c) + 2);
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    fVar3 = *(float *)(*(int *)((int)this + 0x26c) +
                      (DAT_5ce2a0ec % *(uint *)((int)this + 0x268)) * 4) * (float)_DAT_5ce13260;
    DAT_5ce2a0ec = DAT_5ce2a0ec + *(int *)((int)this + 0x270);
    if ((float)_DAT_5ce13258 <= fVar3) {
      if (fVar3 <= (float)_DAT_5ce13250) {
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
      fVar3 = *(float *)(*(int *)((int)this + 0x26c) +
                        (DAT_5ce2a0f0 % *(uint *)((int)this + 0x268)) * 4) * (float)_DAT_5ce13260;
      DAT_5ce2a0f0 = DAT_5ce2a0f0 + 1 + *(int *)((int)this + 0x274);
      if ((float)_DAT_5ce13258 <= fVar3) {
        if (fVar3 <= (float)_DAT_5ce13250) {
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
LAB_5cdd850b:
  *param_3 = uVar2;
  return param_1;
}


