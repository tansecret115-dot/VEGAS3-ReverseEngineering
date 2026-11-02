/* Module: encn3260.dll
   Function: FUN_664975b0
   Address: 664975b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664975b0(void *this,int *param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined ***)this = &PTR_FUN_664de870;
  *(int **)((int)this + 0x18) = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return this;
}


