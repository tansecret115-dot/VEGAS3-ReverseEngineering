/* Module: sfxpfx1.dll
   Function: FUN_5c94f4a0
   Address: 5c94f4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c94f4a0(void *this,int param_1,double *param_2,uint *param_3)

{
  uint uVar1;
  double *pdVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  double *pdVar7;
  float10 fVar8;
  uint local_1c;
  int local_18 [5];
  
  uVar1 = *param_3;
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x48) + 2);
  iVar3 = FUN_5c94cb00(this,local_18);
  if ((param_1 == 0) && (*(int *)((int)this + 0x34) != 0)) {
    iVar3 = FUN_5c94e700(this);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  else if (((iVar3 != 0) || (*(int *)((int)this + 0x4c) == 0)) &&
          (iVar3 = FUN_5c94e6c0(this,local_18), iVar3 < 0)) {
    return iVar3;
  }
  uVar5 = 0;
  *(undefined4 *)((int)this + 0x34) = 1;
  uVar4 = uVar1;
  pdVar2 = param_2;
  pdVar7 = param_2;
  if (uVar6 != 0) {
    do {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        fVar8 = FUN_5c94e890((int)this,*pdVar2,uVar5);
        *pdVar2 = (double)fVar8;
        pdVar2 = pdVar2 + uVar6;
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar1;
      pdVar2 = pdVar7 + 1;
      pdVar7 = pdVar7 + 1;
    } while (uVar5 < uVar6);
  }
  if (DAT_5c998760 != 0) goto LAB_5c94f69b;
  uVar6 = *(uint *)(*(int *)((int)this + 0x48) + 4);
  if (*(int *)((int)this + 0x2008) == 0) {
    iVar3 = *(int *)((int)this + 0x1ff4) - uVar1;
    *(int *)((int)this + 0x1ff4) = iVar3;
    if (iVar3 < 1) {
      uVar4 = rand();
      *(uint *)((int)this + 0x1ff4) = (uVar4 & 3) * (uVar6 >> 4) + uVar6 * 4;
      uVar4 = rand();
      *(uint *)((int)this + 0x2000) = (uVar4 & 0x1f) + 1;
      uVar4 = rand();
      *(uint *)((int)this + 0x2004) = (uVar4 & 0x1f) + 1;
      *(uint *)((int)this + 0x2008) = uVar6 >> 3;
      _DAT_5c99f074 = 0;
      _DAT_5c99f078 = 0;
      goto LAB_5c94f5f9;
    }
    local_1c = 0;
  }
  else {
LAB_5c94f5f9:
    uVar6 = *(uint *)((int)this + 0x2008);
    local_1c = uVar1;
    if (uVar6 <= uVar1) {
      local_1c = uVar6;
    }
    *(uint *)((int)this + 0x2008) = uVar6 - local_1c;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x48) + 2);
  for (; local_1c != 0; local_1c = local_1c - 1) {
    uVar4 = DAT_5c99f054 % *(uint *)((int)this + 0x1ff8);
    DAT_5c99f054 = DAT_5c99f054 + *(int *)((int)this + 0x2000);
    *param_2 = (double)(*(float *)(*(int *)((int)this + 0x1ffc) + uVar4 * 4) + (float)*param_2);
    if (1 < uVar6) {
      uVar4 = DAT_5c99f058 % *(uint *)((int)this + 0x1ff8);
      DAT_5c99f058 = DAT_5c99f058 + 1 + *(int *)((int)this + 0x2004);
      param_2[1] = (double)(*(float *)(*(int *)((int)this + 0x1ffc) + uVar4 * 4) + (float)param_2[1]
                           );
    }
    param_2 = param_2 + uVar6;
  }
LAB_5c94f69b:
  *param_3 = uVar1;
  return 0;
}


