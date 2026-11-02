/* Module: sftrkfx1.dll
   Function: FUN_5cbbbc50
   Address: 5cbbbc50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cbbbc50(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5cbf429c(this,0,param_1,*(undefined4 *)(&DAT_5cc04ef0 + param_3 * 8),
               *(undefined4 *)(&DAT_5cc04ef4 + param_3 * 8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_LAB_5cc04f58;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5cc04f48;
  return this;
}


