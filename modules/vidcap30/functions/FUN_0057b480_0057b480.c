/* Module: vidcap30.exe
   Function: FUN_0057b480
   Address: 0057b480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0057b480(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_1 = &PTR_LAB_005a5c94;
  FUN_0057b410(param_2);
  if (param_3 == (undefined4 *)0x0) {
    param_3 = param_1;
  }
  param_1[1] = param_3;
  param_1[2] = 0;
  return param_1;
}


