/* Module: rmbe3260.dll
   Function: FUN_66014650
   Address: 66014650
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_66014650(void *this,undefined4 *param_1)

{
  FUN_66014790(this);
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_66065b68,this);
  }
  return this;
}


