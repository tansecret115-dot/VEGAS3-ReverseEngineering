/* Module: rmbe3260.dll
   Function: FUN_66015c90
   Address: 66015c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66015c90(void *this,undefined2 *param_1)

{
  if (param_1 == (undefined2 *)0x0) {
    return 0x80004003;
  }
  *param_1 = *(undefined2 *)((int)this + 0x94);
  return 0;
}


