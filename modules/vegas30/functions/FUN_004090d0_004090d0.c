/* Module: vegas30.exe
   Function: FUN_004090d0
   Address: 004090d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_004090d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(param_2,&DAT_006335c8,param_1);
  }
  return param_1;
}


