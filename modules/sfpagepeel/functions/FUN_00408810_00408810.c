/* Module: sfpagepeel.dll
   Function: FUN_00408810
   Address: 00408810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00408810(void *this,undefined4 param_1)

{
  FUN_0040d090((int)this);
  *(undefined ***)this = &PTR_FUN_00470550;
  *(undefined4 *)((int)this + 0x48) = param_1;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_00470544;
  return this;
}


