/* Module: sfnetmedia.dll
   Function: FUN_004281b0
   Address: 004281b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004281b0(void *this,undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0x14);
  }
  return *(undefined4 *)((int)this + 0x18);
}


