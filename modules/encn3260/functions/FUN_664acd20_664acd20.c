/* Module: encn3260.dll
   Function: FUN_664acd20
   Address: 664acd20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664acd20(void *this,int *param_1)

{
  *(undefined ***)((int)this + 4) = &PTR_LAB_664df208;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(int **)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_FUN_664df1e8;
  *(undefined ***)((int)this + 4) = &PTR_LAB_664df1d8;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
    FUN_664acd80(*(undefined4 **)((int)this + 0x14));
  }
  return this;
}


