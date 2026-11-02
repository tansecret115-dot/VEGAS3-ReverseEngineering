/* Module: rmbe3260.dll
   Function: FUN_66003970
   Address: 66003970
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66003970(void *this,undefined4 param_1)

{
  int *local_8;
  
  local_8 = (int *)0x0;
  (**(code **)(**(int **)((int)this + 0x104) + 0xc))(*(int **)((int)this + 0x104),param_1,&local_8);
  (**(code **)(*local_8 + 0x1c))(local_8,&param_1);
  FUN_66003550((int)this);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return;
}


