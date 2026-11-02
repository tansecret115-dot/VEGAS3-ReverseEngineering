/* Module: sfppack3.dll
   Function: FUN_5cc77f73
   Address: 5cc77f73
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cc77f73(void *this,undefined4 *param_1)

{
  FUN_5cc781cd(this);
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return this;
}


