/* Module: vegas30.exe
   Function: FUN_00409090
   Address: 00409090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00409090(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(param_2,&DAT_0063c3f0,param_1);
  }
  return param_1;
}


