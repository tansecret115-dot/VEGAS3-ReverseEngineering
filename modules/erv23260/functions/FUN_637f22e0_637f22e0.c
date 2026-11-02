/* Module: erv23260.dll
   Function: FUN_637f22e0
   Address: 637f22e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_637f22e0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  FUN_637f20a0((uint *)((int)this + 0xc));
  FUN_637f20a0((uint *)((int)this + 0x38));
  *(undefined ***)this = &PTR_FUN_638290d0;
  return this;
}


