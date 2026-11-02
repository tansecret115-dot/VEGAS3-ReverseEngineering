/* Module: vidcap30.exe
   Function: FUN_004654f0
   Address: 004654f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_004654f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_005810c0(param_2,param_3,param_4,param_5);
  *param_1 = &PTR_FUN_005926b8;
  param_1[3] = &PTR_FUN_00592670;
  param_1[4] = &PTR_LAB_0059265c;
  param_1[0x26] = &PTR_LAB_00592638;
  return param_1;
}


