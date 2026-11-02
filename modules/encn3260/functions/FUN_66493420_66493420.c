/* Module: encn3260.dll
   Function: FUN_66493420
   Address: 66493420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66493420(void *this,int *param_1)

{
  *(int **)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = &PTR_FUN_664de748;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return this;
}


