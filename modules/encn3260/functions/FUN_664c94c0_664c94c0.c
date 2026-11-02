/* Module: encn3260.dll
   Function: FUN_664c94c0
   Address: 664c94c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664c94c0(void *this,int param_1)

{
  undefined4 local_14;
  void *local_10;
  int local_c;
  undefined4 local_8;
  
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 0x8c) = 1;
  }
  local_c = param_1;
  local_14 = 0x466;
  local_8 = 0;
  local_10 = this;
  (**(code **)(**(int **)((int)this + 0x40) + 0x24))(&local_14,*(undefined4 *)((int)this + 0x98));
  return;
}


