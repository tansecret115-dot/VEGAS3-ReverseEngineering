/* Module: rmbe3260.dll
   Function: FUN_66048910
   Address: 66048910
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66048910(void *this,undefined4 param_1,short param_2)

{
  short sVar1;
  int iVar2;
  
  (**(code **)(**(int **)((int)this + 4) + 0x34))();
  iVar2 = FUN_66047cb0(this,0x2e7261fd);
  if (iVar2 == 0) {
    sVar1 = (**(code **)(**(int **)((int)this + 4) + 0x30))(param_1,param_2);
    if (sVar1 != param_2) {
      iVar2 = (**(code **)(**(int **)((int)this + 4) + 4))();
    }
    *(undefined4 *)((int)this + 0x80) = 0x12;
    if (iVar2 == 0) {
      (**(code **)(*(int *)this + 0x2c))();
    }
  }
  return iVar2;
}


