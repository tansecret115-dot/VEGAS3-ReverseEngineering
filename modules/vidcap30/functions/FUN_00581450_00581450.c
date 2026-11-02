/* Module: vidcap30.exe
   Function: FUN_00581450
   Address: 00581450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_00581450(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_00582290(param_2,param_3,param_4,param_5);
  param_1[0x2a] = param_3;
  *param_1 = &PTR_LAB_005a5f68;
  param_1[3] = &PTR_LAB_005a5f20;
  param_1[4] = &PTR_LAB_005a5f0c;
  return param_1;
}


