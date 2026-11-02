/* Module: rmme3260.dll
   Function: FUN_66237c90
   Address: 66237c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66237c90(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*(int *)((int)this + 0x38) + 0x18))(param_1,0);
  if (iVar1 == 0) {
    uVar2 = 0x80040009;
  }
  else {
    (**(code **)(*(int *)((int)this + 0x38) + 0xc))(iVar1);
    uVar2 = FUN_66237af0(this,param_1,param_2);
  }
  if (*(int **)((int)this + 0x7e) != (int *)0x0) {
    FUN_66245c10(*(int **)((int)this + 0x7e));
  }
  if (*(int **)((int)this + 0x82) != (int *)0x0) {
    FUN_66245c10(*(int **)((int)this + 0x82));
  }
  return uVar2;
}


