/* Module: rmbe3260.dll
   Function: FUN_66042910
   Address: 66042910
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66042910(void *this,undefined4 param_1)

{
  if (*(code **)((int)this + 0x34) == (code *)0x0) {
    return;
  }
  (**(code **)((int)this + 0x34))(param_1);
  return;
}


