/* Module: sftrkfx1.dll
   Function: FUN_5cbf6054
   Address: 5cbf6054
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cbf6054(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return;
}


