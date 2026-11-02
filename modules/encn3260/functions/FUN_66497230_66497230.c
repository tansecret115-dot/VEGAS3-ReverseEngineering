/* Module: encn3260.dll
   Function: FUN_66497230
   Address: 66497230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66497230(void *this,int *param_1)

{
  *(undefined ***)((int)this + 4) = &PTR_LAB_664de858;
  *(undefined ***)this = &PTR_FUN_664de838;
  *(undefined ***)((int)this + 4) = &PTR_LAB_664de820;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(int **)((int)this + 0xc) = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return this;
}


