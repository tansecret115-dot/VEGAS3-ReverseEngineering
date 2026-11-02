/* Module: sfnetmedia.dll
   Function: FUN_00408540
   Address: 00408540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00408540(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = 0;
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_0043f2e8,this);
  }
  return this;
}


