/* Module: sftrkfx1.dll
   Function: FUN_5cbb2a80
   Address: 5cbb2a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cbb2a80(void *this,undefined4 param_1,undefined4 param_2)

{
  switch(param_1) {
  case 0:
    (**(code **)(**(int **)((int)this + 0x2c) + 0x80))(*(int **)((int)this + 0x2c),param_2);
    return;
  case 1:
    (**(code **)(**(int **)((int)this + 0x2c) + 0x88))(*(int **)((int)this + 0x2c),param_2);
    return;
  case 2:
    (**(code **)(**(int **)((int)this + 0x2c) + 0x90))(*(int **)((int)this + 0x2c),param_2);
    return;
  case 3:
    (**(code **)(**(int **)((int)this + 0x2c) + 0x98))(*(int **)((int)this + 0x2c),param_2);
  }
  return;
}


