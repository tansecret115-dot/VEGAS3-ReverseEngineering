/* Module: encn3260.dll
   Function: FUN_664d21a0
   Address: 664d21a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664d21a0(void *this,int *param_1)

{
  *(undefined ***)((int)this + 4) = &PTR_LAB_664dfdf0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_664dfe70;
  *(undefined ***)((int)this + 4) = &PTR_LAB_664dfe58;
  *(int **)((int)this + 0x14) = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return this;
}


