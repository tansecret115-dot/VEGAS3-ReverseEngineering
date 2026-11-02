/* Module: mcplugrw.dll
   Function: FUN_0044dd50
   Address: 0044dd50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0044dd50(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_FUN_0049dfdc;
  FUN_0044ddc0((int)this);
  *(undefined4 *)((int)this + 0x10) = param_1;
  FUN_0044dda0((int)this);
  return this;
}


