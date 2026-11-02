/* Module: auth3260.dll
   Function: FUN_627a6100
   Address: 627a6100
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_627a6100(void *this,undefined4 *param_1)

{
  FUN_627a6080(this);
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_627a7820,this);
  }
  return this;
}


