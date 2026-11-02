/* Module: sfs4rw.dll
   Function: FUN_00413100
   Address: 00413100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00413100(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x680) = 1;
  *(undefined4 *)((int)this + 0x684) = param_1;
  *(undefined4 *)((int)this + 0x7c8) = param_2;
  return;
}


