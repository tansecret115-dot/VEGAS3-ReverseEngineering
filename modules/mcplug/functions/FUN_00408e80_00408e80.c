/* Module: mcplug.dll
   Function: FUN_00408e80
   Address: 00408e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00408e80(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined ***)this = &PTR_LAB_00476aa0;
  *(int **)((int)this + 4) = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0x10) = 1;
  return this;
}


