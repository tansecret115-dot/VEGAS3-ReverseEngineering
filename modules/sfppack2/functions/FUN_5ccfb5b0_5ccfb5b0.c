/* Module: sfppack2.dll
   Function: FUN_5ccfb5b0
   Address: 5ccfb5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5ccfb5b0(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5cd404f6(this,0,param_1,*(undefined4 *)(&DAT_5cd53dc0 + param_3 * 8),
               *(undefined4 *)(&DAT_5cd53dc4 + param_3 * 8));
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined ***)this = &PTR_LAB_5cd53e78;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5cd53e68;
  return this;
}


