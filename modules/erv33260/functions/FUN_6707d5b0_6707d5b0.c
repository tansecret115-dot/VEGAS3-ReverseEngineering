/* Module: erv33260.dll
   Function: FUN_6707d5b0
   Address: 6707d5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707d5b0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_FUN_670905f8;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}


