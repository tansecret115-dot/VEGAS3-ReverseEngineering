/* Module: sdpp3260.dll
   Function: FUN_10005a50
   Address: 10005a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_10005a50(void *this,char *param_1,int *param_2)

{
  FUN_10005910(this,param_1,1);
  *(undefined ***)this = &PTR_FUN_10008a70;
  (**(code **)(*param_2 + 4))(param_2);
  *(int **)((int)this + 0xc) = param_2;
  return this;
}


