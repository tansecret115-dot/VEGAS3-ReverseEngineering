/* Module: aviplug.dll
   Function: FUN_5f984260
   Address: 5f984260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f984260(void *this,int *param_1)

{
  *(undefined4 *)((int)this + 4) = 1;
  *(int **)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_5f9ebac4;
  (**(code **)(*param_1 + 4))(param_1);
  return this;
}


