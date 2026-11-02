/* Module: vidcap30.exe
   Function: FUN_00467030
   Address: 00467030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_00467030(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00580ae0(param_2,param_3,&DAT_005923a8,param_4,1);
  param_1[0x28] = &PTR_LAB_005927f8;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
  param_1[0x33] = 1;
  param_1[0x3e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x34] = 0xff;
  param_1[0x3b] = 0x14;
  *param_1 = &PTR_LAB_0059278c;
  param_1[3] = &PTR_FUN_00592750;
  param_1[4] = &PTR_LAB_0059273c;
  param_1[0x28] = &PTR_LAB_00592708;
  return param_1;
}


