/* Module: encn3260.dll
   Function: FUN_664c9330
   Address: 664c9330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664c9330(void *this,int param_1)

{
  void *this_00;
  undefined4 local_14;
  void *local_10;
  int *local_c;
  undefined4 local_8;
  
  this_00 = operator_new(0x2e);
  if (this_00 == (void *)0x0) {
    local_c = (int *)0x0;
  }
  else {
    local_c = FUN_664c9e00(this_00,this,8);
  }
  local_c[9] = param_1;
  (**(code **)(*local_c + 4))(local_c);
  local_14 = 0x464;
  local_8 = 0;
  local_10 = this;
  (**(code **)(**(int **)((int)this + 0x3c) + 0x24))(&local_14,0);
  return 1;
}


