/* Module: wmfplug2.dll
   Function: FUN_00445920
   Address: 00445920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00445920(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  return 0;
}


