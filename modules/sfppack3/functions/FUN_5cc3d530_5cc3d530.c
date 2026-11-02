/* Module: sfppack3.dll
   Function: FUN_5cc3d530
   Address: 5cc3d530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cc3d530(void *this,double param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (int)ROUND(param_1 * _DAT_5cc87d60);
  if (iVar1 < -0x80) {
    iVar1 = 0;
  }
  else if (0x7f < iVar1) {
    iVar1 = 0xff;
  }
  *(byte *)((uint)*(ushort *)(*(int *)((int)this + 0x14c) + 2) * param_3 + param_2 + param_4) =
       (byte)iVar1 ^ 0x80;
  return;
}


