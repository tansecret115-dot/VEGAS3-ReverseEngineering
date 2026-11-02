/* Module: encn3260.dll
   Function: FUN_6649bf20
   Address: 6649bf20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6649bf20(void *this,int *param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(int **)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_FUN_664dea70;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return this;
}


