/* Module: sdpp3260.dll
   Function: FUN_100059d0
   Address: 100059d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_100059d0(void *this,char *param_1,undefined4 param_2)

{
  FUN_10005910(this,param_1,0);
  *(undefined ***)this = &PTR_FUN_10008a68;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return this;
}


