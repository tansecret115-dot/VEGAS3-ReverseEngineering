/* Module: sfpublish.dll
   Function: FUN_004087a0
   Address: 004087a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_004087a0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = 0;
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_0043ca10,this);
  }
  return this;
}


