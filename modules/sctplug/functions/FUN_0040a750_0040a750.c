/* Module: sctplug.dll
   Function: FUN_0040a750
   Address: 0040a750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0040a750(void *this,int *param_1,undefined4 param_2)

{
  *(undefined ***)((int)this + 4) = &PTR_LAB_00432928;
  *(undefined ***)this = &PTR_LAB_00432914;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00432900;
  *(int **)((int)this + 8) = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return this;
}


