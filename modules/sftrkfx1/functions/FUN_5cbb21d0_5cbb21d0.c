/* Module: sftrkfx1.dll
   Function: FUN_5cbb21d0
   Address: 5cbb21d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cbb21d0(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5cbf429c(this,0,param_1,*(undefined4 *)(&DAT_5cc045d0 + param_3 * 8),
               *(undefined4 *)(&DAT_5cc045d4 + param_3 * 8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_LAB_5cc04670;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5cc04660;
  return this;
}


