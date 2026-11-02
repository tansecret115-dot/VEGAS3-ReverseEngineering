/* Module: rmbe3260.dll
   Function: FUN_66042290
   Address: 66042290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66042290(void *this,undefined4 *param_1,undefined4 *param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)((int)this + 0x140);
    *param_2 = *(undefined4 *)((int)this + 0x104);
    return 0;
  }
  return 0xfff9;
}


