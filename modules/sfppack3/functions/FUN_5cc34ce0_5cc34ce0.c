/* Module: sfppack3.dll
   Function: FUN_5cc34ce0
   Address: 5cc34ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cc34ce0(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  
  *(undefined4 *)((int)this + 0x60) = *param_1;
  fVar2 = FUN_5cc348a0(param_1[2],-800);
  *(double *)((int)this + 0x68) = (double)fVar2;
  fVar2 = FUN_5cc348a0(param_1[1],-800);
  *(double *)((int)this + 0x70) = (double)fVar2;
  if (param_2 == 0) {
    FUN_5cc348d0((int)this);
  }
  if ((*(int *)((int)this + 0x60) != 1) && (*(int *)((int)this + 0x60) != 2)) {
    iVar1 = FUN_5cc34c40((int)this);
    *(uint *)((int)this + 0x58) = (uint)(-1 < iVar1);
    return;
  }
  iVar1 = FUN_5cc34a50(this,(int)param_1);
  *(uint *)((int)this + 0x58) = (uint)(-1 < iVar1);
  return;
}


