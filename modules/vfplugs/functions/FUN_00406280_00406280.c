/* Module: vfplugs.dll
   Function: FUN_00406280
   Address: 00406280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00406280(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = 0;
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_00486aa0,this);
  }
  return this;
}


