/* Module: sfxpfx1.dll
   Function: FUN_5c9453a0
   Address: 5c9453a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5c9453a0(void *this,undefined4 *param_1,int param_2)

{
  double dVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x68) = *param_1;
  dVar1 = (double)(int)param_1[7] * _DAT_5c98b940;
  *(double *)((int)this + 0x70) = dVar1;
  *(double *)((int)this + 0x78) = _DAT_5c98b988 - dVar1;
  if (param_2 == 0) {
    FUN_5c944f90((int)this);
  }
  if ((*(int *)((int)this + 0x68) != 1) && (*(int *)((int)this + 0x68) != 2)) {
    iVar2 = FUN_5c945300((int)this);
    *(uint *)((int)this + 0x5c) = (uint)(-1 < iVar2);
    return;
  }
  iVar2 = FUN_5c945110(this,(int)param_1);
  *(uint *)((int)this + 0x5c) = (uint)(-1 < iVar2);
  return;
}


