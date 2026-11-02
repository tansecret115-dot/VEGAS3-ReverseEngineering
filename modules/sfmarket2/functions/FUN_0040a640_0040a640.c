/* Module: sfmarket2.dll
   Function: FUN_0040a640
   Address: 0040a640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0040a640(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = 0;
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_004a4150,this);
  }
  return this;
}


