/* Module: stl2plg.dll
   Function: FUN_0041fa90
   Address: 0041fa90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0041fa90(void *this,int *param_1)

{
  *(undefined4 *)((int)this + 4) = 1;
  *(int **)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_0046b900;
  (**(code **)(*param_1 + 4))(param_1);
  return this;
}


