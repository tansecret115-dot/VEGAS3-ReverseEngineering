/* Module: vidcap30.exe
   Function: FUN_00583610
   Address: 00583610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_00583610(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  FUN_0057e420(param_2,param_3,param_4,param_5,param_6);
  *param_1 = &PTR_FUN_005a61b8;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[3] = &PTR_FUN_005a6170;
  param_1[4] = &PTR_LAB_005a615c;
  param_1[0x26] = &PTR_LAB_005a6138;
  return param_1;
}


