/* Module: sfppack3.dll
   Function: FUN_5cc3d5b0
   Address: 5cc3d5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cc3d5b0(void *this,double param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  undefined2 uVar2;
  
  dVar1 = param_1 * _DAT_5cc87d70;
  uVar2 = 0x8000;
  if (-0x8001 < (int)ROUND(dVar1)) {
    uVar2 = 0x7fff;
    if ((int)ROUND(dVar1) < 0x8000) {
      uVar2 = (undefined2)(int)ROUND(dVar1);
    }
  }
  *(undefined2 *)
   (param_2 + ((uint)*(ushort *)(*(int *)((int)this + 0x14c) + 2) * param_3 + param_4) * 2) = uVar2;
  return;
}


