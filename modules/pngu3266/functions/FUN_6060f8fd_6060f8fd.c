/* Module: pngu3266.dll
   Function: FUN_6060f8fd
   Address: 6060f8fd
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNTimer * __thiscall
FUN_6060f8fd(void *this,int *param_1,ulong param_2,int param_3,CPNTimer **param_4)

{
  int iVar1;
  
  CPNTimer::CPNTimer(this,param_2,1,param_4);
  *(undefined4 *)((int)this + 0x30) = 0;
  *(int **)((int)this + 0x28) = param_1;
  *(undefined ***)this = &PTR_QueryInterface_6062b728;
  *(undefined ***)((int)this + 4) = &PTR_FUN_6062b720;
  iVar1 = (**(code **)(*param_1 + 0x13c))();
  *(int *)((int)this + 0x2c) = iVar1 * param_3;
  return this;
}


