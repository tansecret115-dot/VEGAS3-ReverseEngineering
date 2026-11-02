/* Module: rmme3260.dll
   Function: FUN_6625d860
   Address: 6625d860
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6625d860(void *this,int *param_1)

{
  int *this_00;
  undefined4 local_14;
  void *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  this_00 = FUN_662582c0(1);
  FUN_6625d8e0(this_00,param_1,*(undefined4 *)((int)this + 0x94));
  FUN_66250b20(*(void **)((int)this + 0xc0),this_00);
  local_c = 0;
  local_8 = 0;
  local_14 = 0x46d;
  local_10 = this;
  (**(code **)(**(int **)((int)this + 0x40) + 0x24))(&local_14,*(undefined4 *)((int)this + 0x98));
  return;
}


