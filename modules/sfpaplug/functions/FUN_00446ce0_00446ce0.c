/* Module: sfpaplug.dll
   Function: FUN_00446ce0
   Address: 00446ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00446ce0(void *this,int *param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_LAB_00455348;
  *(int **)((int)this + 4) = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return this;
}


