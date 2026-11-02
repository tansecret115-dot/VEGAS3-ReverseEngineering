/* Module: sfppack3.dll
   Function: FUN_5cc3b850
   Address: 5cc3b850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cc3b850(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5cc76777(this,0,param_1,*(undefined4 *)(&DAT_5cc884b8 + param_3 * 8),
               *(undefined4 *)(&DAT_5cc884bc + param_3 * 8));
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined ***)this = &PTR_LAB_5cc88560;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5cc88550;
  return this;
}


