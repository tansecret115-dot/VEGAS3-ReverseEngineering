/* Module: sfppack3.dll
   Function: FUN_5cc42d20
   Address: 5cc42d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cc42d20(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5cc76777(this,0,param_1,*(undefined4 *)(&DAT_5cc88c20 + param_3 * 8),
               *(undefined4 *)(&DAT_5cc88c24 + param_3 * 8));
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined ***)this = &PTR_LAB_5cc88d50;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5cc88d40;
  return this;
}


