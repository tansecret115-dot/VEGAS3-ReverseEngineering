/* Module: rmme3260.dll
   Function: FUN_6625c770
   Address: 6625c770
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6625c770(void *this,char *param_1,uint param_2)

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
    local_c = FUN_6625e150(this_00,this,1);
  }
  FUN_66250410((void *)((int)local_c + 10),param_1);
  *(uint *)((int)local_c + 0x16) = param_2 & 0xffff;
  (**(code **)(*local_c + 4))(local_c);
  local_14 = 0x464;
  local_8 = 0;
  local_10 = this;
  (**(code **)(**(int **)((int)this + 0x3c) + 0x24))(&local_14,0);
  return;
}


