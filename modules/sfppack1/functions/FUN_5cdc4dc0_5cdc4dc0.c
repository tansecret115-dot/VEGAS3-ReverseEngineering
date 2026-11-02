/* Module: sfppack1.dll
   Function: FUN_5cdc4dc0
   Address: 5cdc4dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cdc4dc0(void *this,int *param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = FUN_5cdc4ba0(param_1[3],-800);
  *(double *)((int)this + 0x60) = (double)fVar2;
  fVar2 = FUN_5cdc4ba0(param_1[4],-800);
  *(double *)((int)this + 0x68) = (double)fVar2;
  iVar1 = FUN_5cdc4bd0(this,param_1,param_2);
  *(uint *)((int)this + 0x50) = (uint)(-1 < iVar1);
  return;
}


