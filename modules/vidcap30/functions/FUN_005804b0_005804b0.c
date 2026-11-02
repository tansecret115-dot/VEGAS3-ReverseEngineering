/* Module: vidcap30.exe
   Function: FUN_005804b0
   Address: 005804b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_005804b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0057fd20(param_2,param_3,param_4,1,1);
  param_1[0x18] = 0;
  *param_1 = &PTR_LAB_005a5e38;
  param_1[3] = &PTR_LAB_005a5e0c;
  return param_1;
}


