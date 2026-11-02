/* Module: rmme3260.dll
   Function: FUN_66265810
   Address: 66265810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66265810(void *this,int *param_1)

{
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626d3b8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_6626d4b0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626d498;
  *(int **)((int)this + 0x14) = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return this;
}


