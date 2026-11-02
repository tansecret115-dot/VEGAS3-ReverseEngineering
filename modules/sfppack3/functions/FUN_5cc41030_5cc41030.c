/* Module: sfppack3.dll
   Function: FUN_5cc41030
   Address: 5cc41030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cc41030(void *this,undefined4 param_1,float *param_2,uint *param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *(ushort *)(*(int *)((int)this + 0x38) + 2);
  uVar2 = *param_3;
  if (param_4 != 0) {
    *param_3 = 0;
    return 1;
  }
  iVar3 = FUN_5cc3e850(this,&param_4);
  if (((iVar3 != 0) || (*(int *)((int)this + 0x3c) == 0)) &&
     (iVar3 = FUN_5cc3ff40(this,&param_4), iVar3 < 0)) {
    return iVar3;
  }
  iVar3 = FUN_5cc40e60(this,param_2,(uint)uVar1,uVar2);
  if (DAT_5cc982c0 != 0) goto LAB_5cc411c3;
  uVar7 = *(uint *)(*(int *)((int)this + 0x38) + 4);
  if (*(int *)((int)this + 0x98) == 0) {
    iVar5 = *(int *)((int)this + 0x84) - uVar2;
    *(int *)((int)this + 0x84) = iVar5;
    if (iVar5 < 1) {
      uVar4 = rand();
      *(uint *)((int)this + 0x84) = (uVar4 & 3) * (uVar7 >> 4) + uVar7 * 3;
      uVar4 = rand();
      *(uint *)((int)this + 0x90) = (uVar4 & 0x1f) + 1;
      uVar4 = rand();
      *(uint *)((int)this + 0x94) = (uVar4 & 0x1f) + 1;
      *(uint *)((int)this + 0x98) = uVar7 >> 3;
      _DAT_5cc9ebd4 = 0;
      _DAT_5cc9ebd8 = 0;
      goto LAB_5cc4112c;
    }
    uVar4 = 0;
  }
  else {
LAB_5cc4112c:
    uVar7 = *(uint *)((int)this + 0x98);
    uVar4 = uVar2;
    if (uVar7 <= uVar2) {
      uVar4 = uVar7;
    }
    *(uint *)((int)this + 0x98) = uVar7 - uVar4;
  }
  uVar7 = (uint)*(ushort *)(*(int *)((int)this + 0x38) + 2);
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar6 = DAT_5cc9ebbc % *(uint *)((int)this + 0x88);
    DAT_5cc9ebbc = DAT_5cc9ebbc + *(int *)((int)this + 0x90);
    *param_2 = *(float *)(*(int *)((int)this + 0x8c) + uVar6 * 4) + *param_2;
    if (1 < uVar7) {
      uVar6 = DAT_5cc9ebc0 % *(uint *)((int)this + 0x88);
      DAT_5cc9ebc0 = DAT_5cc9ebc0 + 1 + *(int *)((int)this + 0x94);
      param_2[1] = *(float *)(*(int *)((int)this + 0x8c) + uVar6 * 4) + param_2[1];
    }
    param_2 = param_2 + uVar7;
  }
LAB_5cc411c3:
  *param_3 = uVar2;
  return iVar3;
}


