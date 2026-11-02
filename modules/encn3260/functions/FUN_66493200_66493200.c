/* Module: encn3260.dll
   Function: FUN_66493200
   Address: 66493200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66493200(void *this,int *param_1)

{
  *(int **)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_664de738;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return this;
}


