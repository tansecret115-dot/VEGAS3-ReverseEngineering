/* Module: rmme3260.dll
   Function: FUN_6625ca00
   Address: 6625ca00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6625ca00(void *this,undefined4 param_1,undefined2 param_2,uint param_3)

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
    local_c = FUN_6625e150(this_00,this,2);
  }
  *(undefined4 *)((int)local_c + 0x1a) = param_1;
  *(undefined2 *)((int)local_c + 0x1e) = param_2;
  *(uint *)((int)local_c + 0x16) = param_3 & 0xffff;
  (**(code **)(*local_c + 4))(local_c);
  local_14 = 0x464;
  local_8 = 0;
  local_10 = this;
  (**(code **)(**(int **)((int)this + 0x3c) + 0x24))(&local_14,0);
  (**(code **)(**(int **)((int)this + 0x48) + 0x10))(0xffffffff);
  return (-(uint)(*(int *)((int)this + 0xa4) != 0) & 0x7fffbffb) + 0x80004005;
}


