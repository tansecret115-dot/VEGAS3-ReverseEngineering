/* Module: rmbe3260.dll
   Function: FUN_66014760
   Address: 66014760
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_66014760(void *this,undefined4 *param_1)

{
  FUN_66014790(this);
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_66065918,this);
  }
  return this;
}


