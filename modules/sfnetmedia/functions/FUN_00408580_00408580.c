/* Module: sfnetmedia.dll
   Function: FUN_00408580
   Address: 00408580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00408580(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = 0;
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_0043c820,this);
  }
  return this;
}


