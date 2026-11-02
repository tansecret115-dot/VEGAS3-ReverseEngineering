/* Module: encn3260.dll
   Function: FUN_664a7f60
   Address: 664a7f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664a7f60(void *this,undefined4 *param_1)

{
  if (*(void **)((int)this + 0x68) != (void *)0x0) {
    FUN_664a7f60(*(void **)((int)this + 0x68),param_1);
    return param_1;
  }
  *param_1 = *(undefined4 *)((int)this + 400);
  param_1[1] = *(undefined4 *)((int)this + 0x194);
  return param_1;
}


