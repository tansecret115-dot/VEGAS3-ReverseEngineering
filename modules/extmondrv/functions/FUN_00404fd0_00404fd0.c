/* Module: extmondrv.dll
   Function: FUN_00404fd0
   Address: 00404fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00404fd0(void *this,undefined4 param_1)

{
  FUN_00404d40((undefined4 *)((int)this + 4),param_1);
  *(undefined4 *)((int)this + 4) = &PTR_LAB_0044d904;
  *(undefined ***)this = &PTR_LAB_0044d8e0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return this;
}


