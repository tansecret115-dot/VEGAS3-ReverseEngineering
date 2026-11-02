/* Module: encn3260.dll
   Function: FUN_6648eb30
   Address: 6648eb30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6648eb30(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x30) != 0) {
    (**(code **)(**(int **)((int)this + 0x91) + 0x3c))(param_1);
    return;
  }
  (**(code **)(**(int **)((int)this + 0x91) + 0x3c))(param_1);
  (**(code **)(**(int **)((int)this + 0x14) + 0x20))(*(int **)((int)this + 0x14),0,param_1);
  return;
}


