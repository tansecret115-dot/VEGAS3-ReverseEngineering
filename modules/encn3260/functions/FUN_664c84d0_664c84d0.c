/* Module: encn3260.dll
   Function: FUN_664c84d0
   Address: 664c84d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664c84d0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x36) != 0) {
    (**(code **)(**(int **)((int)this + 0x44) + 4))();
    uVar1 = (**(code **)(**(int **)((int)this + 0x36) + 4))(param_1,param_2);
    (**(code **)(**(int **)((int)this + 0x44) + 8))();
  }
  return uVar1;
}


