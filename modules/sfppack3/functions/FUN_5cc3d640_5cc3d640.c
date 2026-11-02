/* Module: sfppack3.dll
   Function: FUN_5cc3d640
   Address: 5cc3d640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cc3d640(void *this,double param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = -0x80000000;
  if (0x7fffffff < (uint)(int)ROUND(param_1 * _DAT_5cc87d90)) {
    iVar1 = (int)ROUND(param_1 * _DAT_5cc87d90);
  }
  *(int *)(param_2 + ((uint)*(ushort *)(*(int *)((int)this + 0x14c) + 2) * param_3 + param_4) * 4) =
       iVar1;
  return;
}


