/* Module: vidcap30.exe
   Function: FUN_005810c0
   Address: 005810c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_005810c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_00581e40(param_2,param_3,param_4,param_5);
  param_1[0x38] = param_3;
  param_1[0x39] = 0;
  *param_1 = &PTR_FUN_005a5ed0;
  param_1[3] = &PTR_FUN_005a5e88;
  param_1[4] = &PTR_LAB_005a5e74;
  param_1[0x26] = &PTR_LAB_005a5e50;
  return param_1;
}


