/* Module: sdpp3260.dll
   Function: FUN_10005ad0
   Address: 10005ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_10005ad0(void *this,char *param_1,char *param_2)

{
  FUN_10005910(this,param_1,2);
  FUN_10006770((void *)((int)this + 0xc),param_2);
  *(undefined ***)this = &PTR_FUN_10008a78;
  return this;
}


