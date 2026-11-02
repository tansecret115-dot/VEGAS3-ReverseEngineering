/* Module: espr3260.dll
   Function: FUN_632f1200
   Address: 632f1200
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_632f1200(void *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = *(uint *)((int)this + 0x5264);
  if (0 < (int)uVar1) {
    do {
      FUN_632f4780(this,(short *)(param_1 +
                                 iVar2 * *(int *)((int)this + 0x5250) * *(int *)((int)this + 0x5254)
                                 * 2),iVar2 * *(int *)((int)this + 0x5258) + param_2,
                   (uint)*(ushort *)((int)this + 0x3526c));
      uVar1 = *(uint *)((int)this + 0x5264);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar1);
  }
  return uVar1 & 0xffff0000;
}


