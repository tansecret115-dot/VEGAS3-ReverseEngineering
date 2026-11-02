/* Module: erv33260.dll
   Function: FUN_67072390
   Address: 67072390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_67072390(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  FUN_670721d0((uint *)((int)this + 0xc));
  FUN_670721d0((uint *)((int)this + 0x38));
  *(undefined ***)this = &PTR_FUN_67090068;
  return this;
}


