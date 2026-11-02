/* Module: sftrkfx1.dll
   Function: FUN_5cba5ad0
   Address: 5cba5ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cba5ad0(void *this,int param_1,short *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 auStack_98 [4];
  undefined4 uStack_88;
  float local_64 [3];
  float fStack_58;
  float local_4c [9];
  double dStack_28;
  double dStack_20;
  double dStack_18;
  double dStack_10;
  double dStack_8;
  
  iVar1 = *param_3;
  if (param_1 == 2) {
    *param_3 = 0;
    return 1;
  }
  iVar2 = FUN_5cba25c0(this,local_4c);
  if (((iVar2 != 0) || (*(int *)((int)this + 0x2c) == 0)) &&
     (iVar2 = FUN_5cba5130(this,local_4c,param_1), iVar2 < 0)) {
    return iVar2;
  }
  uStack_88 = 0x5cba5b3d;
  FUN_5cbde980(*(ushort **)((int)this + 0x28),0,param_2,iVar1,local_64);
  fVar5 = (float10)_CIpow();
  dStack_28 = (double)((float10)local_64[0] * fVar5);
  dStack_8 = 1000000.0;
  dStack_20 = (double)((float10)fStack_58 * fVar5);
  FUN_5cba5850((double *)((int)this + 0xb0),param_2,iVar1,&dStack_8);
  dStack_8 = dStack_8 / *(double *)((int)this + 0xf8);
  uStack_88 = 0x5cba5bab;
  FUN_5cbde980(*(ushort **)((int)this + 0x28),0,param_2,iVar1,local_64);
  iVar1 = *(int *)this;
  dStack_18 = (double)local_64[0];
  dStack_10 = (double)fStack_58;
  pdVar3 = &dStack_28;
  puVar4 = auStack_98;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)pdVar3;
    pdVar3 = (double *)((int)pdVar3 + 4);
    puVar4 = puVar4 + 1;
  }
  (**(code **)(iVar1 + 0x68))(this);
  return 0;
}


