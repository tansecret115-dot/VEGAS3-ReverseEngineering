/* Module: aviplug.dll
   Function: FUN_5f9844e0
   Address: 5f9844e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f9844e0(void *this,int *param_1)

{
  *(undefined4 *)((int)this + 4) = 1;
  *(int **)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined ***)this = &PTR_LAB_5f9ebae8;
  (**(code **)(*param_1 + 0x34))(param_1);
  (**(code **)(**(int **)((int)this + 8) + 4))(*(int **)((int)this + 8));
  return this;
}


