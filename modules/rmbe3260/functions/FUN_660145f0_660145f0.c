/* Module: rmbe3260.dll
   Function: FUN_660145f0
   Address: 660145f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_660145f0(void *this,undefined4 *param_1)

{
  FUN_66014790(this);
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_66065b38,this);
  }
  return this;
}


