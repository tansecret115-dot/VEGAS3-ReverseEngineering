/* Module: vidcap30.exe
   Function: FUN_00582290
   Address: 00582290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_00582290(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_0057e0c0(param_2,param_3,param_3 + 0x5c,param_4,param_5);
  param_1[0x28] = param_3;
  param_1[0x29] = 0;
  *param_1 = &PTR_LAB_005a60dc;
  param_1[3] = &PTR_LAB_005a6094;
  param_1[4] = &PTR_LAB_005a6080;
  return param_1;
}


