/* Module: sfpublish.dll
   Function: FUN_00408760
   Address: 00408760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00408760(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = 0;
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_0043f1c8,this);
  }
  return this;
}


