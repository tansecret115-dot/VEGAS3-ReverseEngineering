/* Module: extmondrv.dll
   Function: FUN_00405300
   Address: 00405300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00405300(void *this,undefined4 param_1)

{
  FUN_00404d40(this,param_1);
  *(undefined ***)this = &PTR_LAB_0044d950;
  *(undefined4 *)((int)this + 0x10) = 1;
  return this;
}


