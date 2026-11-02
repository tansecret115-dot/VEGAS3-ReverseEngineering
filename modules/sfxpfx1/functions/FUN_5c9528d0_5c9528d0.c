/* Module: sfxpfx1.dll
   Function: FUN_5c9528d0
   Address: 5c9528d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c9528d0(void *this,int param_1,double *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  double *pdVar6;
  float10 fVar7;
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
  pdVar6 = param_2;
  for (uVar4 = uVar1; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar5 = 0;
    if (uVar2 != 0) {
      do {
        fVar7 = FUN_5c951df0((int)this,*pdVar6,uVar5);
        *pdVar6 = (double)fVar7;
        uVar5 = uVar5 + 1;
        pdVar6 = pdVar6 + 1;
      } while (uVar5 < uVar2);
    }
  }
  if (DAT_5c998760 != 0) goto LAB_5c952ab8;
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
      goto LAB_5c952a18;
    }
    uVar4 = 0;
  }
  else {
LAB_5c952a18:
    uVar2 = *(uint *)((int)this + 0xc0);
    uVar4 = uVar1;
    if (uVar2 <= uVar1) {
      uVar4 = uVar2;
    }
    *(uint *)((int)this + 0xc0) = uVar2 - uVar4;
  }
  uVar2 = (uint)*(ushort *)(*(int *)((int)this + 0x48) + 2);
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar5 = DAT_5c99f054 % *(uint *)((int)this + 0xb0);
    DAT_5c99f054 = DAT_5c99f054 + *(int *)((int)this + 0xb8);
    *param_2 = (double)(*(float *)(*(int *)((int)this + 0xb4) + uVar5 * 4) + (float)*param_2);
    if (1 < uVar2) {
      uVar5 = DAT_5c99f058 % *(uint *)((int)this + 0xb0);
      DAT_5c99f058 = DAT_5c99f058 + 1 + *(int *)((int)this + 0xbc);
      param_2[1] = (double)(*(float *)(*(int *)((int)this + 0xb4) + uVar5 * 4) + (float)param_2[1]);
    }
    param_2 = param_2 + uVar2;
  }
LAB_5c952ab8:
  *param_3 = uVar1;
  return 0;
}


