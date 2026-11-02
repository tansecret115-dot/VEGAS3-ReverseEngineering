/* Module: sfppack3.dll
   Function: FUN_5cc3ef90
   Address: 5cc3ef90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cc3ef90(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5cc76777(this,0,param_1,*(undefined4 *)(&DAT_5cc88880 + param_3 * 8),
               *(undefined4 *)(&DAT_5cc88884 + param_3 * 8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_LAB_5cc888c8;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5cc888b8;
  return this;
}


