/* Module: sfppack1.dll
   Function: FUN_5cdba430
   Address: 5cdba430
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_5cdba430(void *this,void *param_1,undefined4 param_2,int param_3)

{
  FUN_5ce01676(this,0,param_1,*(undefined4 *)(&DAT_5ce13538 + param_3 * 8),
               *(undefined4 *)(&DAT_5ce1353c + param_3 * 8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_LAB_5ce13610;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5ce13600;
  return this;
}


