/* Module: sfppack2.dll
   Function: FUN_5ccd6760
   Address: 5ccd6760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5ccd6760(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5cd404f6(this,0,param_1,*(undefined4 *)(&DAT_5cd51760 + param_3 * 8),
               *(undefined4 *)(&DAT_5cd51764 + param_3 * 8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_LAB_5cd51b28;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5cd51b18;
  return this;
}


