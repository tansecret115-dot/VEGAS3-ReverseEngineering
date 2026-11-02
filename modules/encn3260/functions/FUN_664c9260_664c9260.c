/* Module: encn3260.dll
   Function: FUN_664c9260
   Address: 664c9260
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664c9260(void *this,undefined4 param_1)

{
  (**(code **)(**(int **)((int)this + 0x44) + 4))();
  if (*(int **)((int)this + 0x36) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x36) + 0x48))(*(undefined4 *)((int)this + 0xc4));
  }
  *(undefined4 *)((int)this + 0x12) = param_1;
  (**(code **)(**(int **)((int)this + 0x44) + 8))();
  return;
}


