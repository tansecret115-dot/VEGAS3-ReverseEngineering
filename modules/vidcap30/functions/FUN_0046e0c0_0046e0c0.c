/* Module: vidcap30.exe
   Function: FUN_0046e0c0
   Address: 0046e0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_0046e0c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00580ae0(param_2,param_3,&DAT_00593460,param_4,0);
  param_1[0x28] = &PTR_LAB_005935b4;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  *param_1 = &PTR_LAB_00593548;
  param_1[3] = &PTR_LAB_0059350c;
  param_1[4] = &PTR_LAB_005934f8;
  param_1[0x28] = &PTR_LAB_005934e0;
  return param_1;
}


