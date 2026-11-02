/* Module: sfpagepeel.dll
   Function: FUN_00408990
   Address: 00408990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00408990(void *this,undefined4 param_1)

{
  FUN_0040af10((int)this);
  *(undefined ***)this = &PTR_FUN_00470598;
  *(undefined4 *)((int)this + 0x48) = param_1;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_0047058c;
  return this;
}


