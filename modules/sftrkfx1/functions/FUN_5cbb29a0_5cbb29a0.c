/* Module: sftrkfx1.dll
   Function: FUN_5cbb29a0
   Address: 5cbb29a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cbb29a0(void *this,undefined4 param_1,undefined4 param_2)

{
  switch(param_1) {
  case 0:
    (**(code **)(**(int **)((int)this + 0x2c) + 0x40))(*(int **)((int)this + 0x2c),param_2);
    return;
  case 1:
    (**(code **)(**(int **)((int)this + 0x2c) + 0x48))(*(int **)((int)this + 0x2c),param_2);
    return;
  case 2:
    (**(code **)(**(int **)((int)this + 0x2c) + 0x50))(*(int **)((int)this + 0x2c),param_2);
    return;
  case 3:
    (**(code **)(**(int **)((int)this + 0x2c) + 0x58))(*(int **)((int)this + 0x2c),param_2);
  }
  return;
}


