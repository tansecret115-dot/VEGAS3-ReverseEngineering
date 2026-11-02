/* Module: vidcap30.exe
   Function: FUN_00581e40
   Address: 00581e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_00581e40(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_0057e420(param_2,param_3,param_3 + 0x5c,param_4,param_5);
  param_1[0x36] = param_3;
  *param_1 = &PTR_FUN_005a6044;
  param_1[3] = &PTR_FUN_005a5ffc;
  param_1[4] = &PTR_LAB_005a5fe8;
  param_1[0x26] = &PTR_LAB_005a5fc4;
  return param_1;
}


