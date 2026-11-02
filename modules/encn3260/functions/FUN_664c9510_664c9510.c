/* Module: encn3260.dll
   Function: FUN_664c9510
   Address: 664c9510
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664c9510(void *this,int *param_1)

{
  int *this_00;
  undefined4 local_14;
  void *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  this_00 = FUN_664c4bd0(1);
  FUN_664c9590(this_00,param_1,*(undefined4 *)((int)this + 0x94));
  FUN_664baa70(*(void **)((int)this + 0xc0),this_00);
  local_c = 0;
  local_8 = 0;
  local_14 = 0x46d;
  local_10 = this;
  (**(code **)(**(int **)((int)this + 0x40) + 0x24))(&local_14,*(undefined4 *)((int)this + 0x98));
  return;
}


