/* Module: rmme3260.dll
   Function: FUN_6622d750
   Address: 6622d750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6622d750(void *this,int *param_1)

{
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626bdb8;
  *(undefined ***)this = &PTR_FUN_6626bd98;
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626bd80;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(int **)((int)this + 0xc) = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return this;
}


