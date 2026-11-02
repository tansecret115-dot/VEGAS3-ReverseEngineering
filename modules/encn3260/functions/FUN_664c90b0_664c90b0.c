/* Module: encn3260.dll
   Function: FUN_664c90b0
   Address: 664c90b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664c90b0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80040009;
  if (*(int *)((int)this + 0x36) != 0) {
    (**(code **)(**(int **)((int)this + 0x44) + 4))();
    uVar1 = (**(code **)(**(int **)((int)this + 0x36) + 0x5c))(param_1);
    (**(code **)(**(int **)((int)this + 0x44) + 8))();
  }
  return uVar1;
}


