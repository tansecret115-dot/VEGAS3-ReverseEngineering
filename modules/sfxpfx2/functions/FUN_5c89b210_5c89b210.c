/* Module: sfxpfx2.dll
   Function: FUN_5c89b210
   Address: 5c89b210
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c89b210(void *this,int param_1,double *param_2,uint *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_24;
  undefined4 local_18 [5];
  
  uVar2 = *param_3;
  sVar1 = *(short *)(*(int *)((int)this + 0x4c) + 2);
  iVar3 = FUN_5c897530(this,local_18);
  if ((param_1 == 0) && (*(int *)((int)this + 0x38) != 0)) {
    local_24 = FUN_5c899460(this);
    if (local_24 < 0) {
      return local_24;
    }
  }
  else if (((iVar3 != 0) || (*(int *)((int)this + 0x50) == 0)) &&
          (local_24 = FUN_5c899280(this,local_18), local_24 < 0)) {
    return local_24;
  }
  *(undefined4 *)((int)this + 0x38) = 1;
  if (sVar1 == 1) {
    local_24 = FUN_5c89aef0(this,param_2,1,uVar2);
  }
  else if (sVar1 == 2) {
    local_24 = FUN_5c89af90(this,param_2,2,uVar2);
  }
  if (DAT_5c8e93b8 != 0) goto LAB_5c89b3e5;
  uVar6 = *(uint *)(*(int *)((int)this + 0x4c) + 4);
  if (*(int *)((int)this + 0x268) == 0) {
    iVar3 = *(int *)((int)this + 0x254) - uVar2;
    *(int *)((int)this + 0x254) = iVar3;
    if (iVar3 < 1) {
      uVar4 = rand();
      *(uint *)((int)this + 0x254) = (uVar4 & 3) * (uVar6 >> 4) + uVar6 * 4;
      uVar4 = rand();
      *(uint *)((int)this + 0x260) = (uVar4 & 0x1f) + 1;
      uVar4 = rand();
      *(uint *)((int)this + 0x264) = (uVar4 & 0x1f) + 1;
      *(uint *)((int)this + 0x268) = uVar6 >> 3;
      _DAT_5c8efccc = 0;
      _DAT_5c8efcd0 = 0;
      goto LAB_5c89b345;
    }
    uVar4 = 0;
  }
  else {
LAB_5c89b345:
    uVar6 = *(uint *)((int)this + 0x268);
    uVar4 = uVar2;
    if (uVar6 <= uVar2) {
      uVar4 = uVar6;
    }
    *(uint *)((int)this + 0x268) = uVar6 - uVar4;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x4c) + 2);
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar5 = DAT_5c8efcac % *(uint *)((int)this + 600);
    DAT_5c8efcac = DAT_5c8efcac + *(int *)((int)this + 0x260);
    *param_2 = (double)(*(float *)(*(int *)((int)this + 0x25c) + uVar5 * 4) + (float)*param_2);
    if (1 < uVar6) {
      uVar5 = DAT_5c8efcb0 % *(uint *)((int)this + 600);
      DAT_5c8efcb0 = DAT_5c8efcb0 + 1 + *(int *)((int)this + 0x264);
      param_2[1] = (double)(*(float *)(*(int *)((int)this + 0x25c) + uVar5 * 4) + (float)param_2[1])
      ;
    }
    param_2 = param_2 + uVar6;
  }
LAB_5c89b3e5:
  *param_3 = uVar2;
  return local_24;
}


