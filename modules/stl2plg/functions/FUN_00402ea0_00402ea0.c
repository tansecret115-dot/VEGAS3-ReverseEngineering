/* Module: stl2plg.dll
   Function: FUN_00402ea0
   Address: 00402ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00402ea0(void *this,undefined4 param_1)

{
  FUN_00401280(this,param_1);
  *(undefined4 *)((int)this + 0x3d6) = 0;
  *(undefined4 *)((int)this + 0x3da) = 0;
  *(undefined ***)this = &PTR_LAB_00464700;
  return this;
}


