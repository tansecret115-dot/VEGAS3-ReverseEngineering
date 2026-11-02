/* Module: pngu3266.dll
   Function: FUN_60616b27
   Address: 60616b27
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNTimer * __thiscall
FUN_60616b27(void *this,int *param_1,ulong param_2,int param_3,CPNTimer **param_4)

{
  int iVar1;
  
  CPNTimer::CPNTimer(this,param_2,1,param_4);
  *(undefined4 *)((int)this + 0x30) = 0;
  *(int **)((int)this + 0x28) = param_1;
  *(undefined ***)this = &PTR_QueryInterface_6062bce0;
  *(undefined ***)((int)this + 4) = &PTR_FUN_6062bcd8;
  iVar1 = (**(code **)(*param_1 + 0x16c))();
  *(int *)((int)this + 0x2c) = iVar1 * param_3;
  return this;
}


