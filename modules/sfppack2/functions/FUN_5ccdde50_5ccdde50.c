/* Module: sfppack2.dll
   Function: FUN_5ccdde50
   Address: 5ccdde50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5ccdde50(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5cd404f6(this,0,param_1,*(undefined4 *)(&DAT_5cd51f90 + param_3 * 8),
               *(undefined4 *)(&DAT_5cd51f94 + param_3 * 8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_LAB_5cd52038;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5cd52028;
  return this;
}


