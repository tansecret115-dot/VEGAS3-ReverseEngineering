/* Module: sfppack3.dll
   Function: FUN_5cc333c0
   Address: 5cc333c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cc333c0(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5cc76777(this,0,param_1,*(undefined4 *)(&DAT_5cc87a78 + param_3 * 8),
               *(undefined4 *)(&DAT_5cc87a7c + param_3 * 8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_LAB_5cc87b40;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5cc87b30;
  return this;
}


