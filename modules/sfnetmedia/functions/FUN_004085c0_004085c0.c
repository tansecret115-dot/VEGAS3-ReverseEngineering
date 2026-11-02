/* Module: sfnetmedia.dll
   Function: FUN_004085c0
   Address: 004085c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_004085c0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = 0;
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_0043f238,this);
  }
  return this;
}


