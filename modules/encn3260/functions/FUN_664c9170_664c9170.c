/* Module: encn3260.dll
   Function: FUN_664c9170
   Address: 664c9170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664c9170(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80040009;
  if (*(int *)((int)this + 0x36) != 0) {
    (**(code **)(**(int **)((int)this + 0x44) + 4))();
    uVar1 = (**(code **)(**(int **)((int)this + 0x36) + 0x68))(param_1);
    (**(code **)(**(int **)((int)this + 0x44) + 8))();
  }
  return uVar1;
}


