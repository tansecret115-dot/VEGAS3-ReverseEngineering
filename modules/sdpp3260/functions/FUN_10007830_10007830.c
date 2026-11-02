/* Module: sdpp3260.dll
   Function: FUN_10007830
   Address: 10007830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_10007830(void *this,undefined4 *param_1)

{
  FUN_100065e0((undefined4 *)((int)this + 8));
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return this;
}


