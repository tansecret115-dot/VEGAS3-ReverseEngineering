/* Module: vidcap30.exe
   Function: FUN_0057f200
   Address: 0057f200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_0057f200(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,undefined4 param_6)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005847a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0057e0c0(param_2,param_3,param_4,param_5,param_6);
  local_4 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *param_1 = &PTR_LAB_005a5da4;
  param_1[3] = &PTR_LAB_005a5d5c;
  param_1[4] = &PTR_LAB_005a5d48;
  param_1[0x28] = &PTR_LAB_005a5d38;
  iVar1 = FUN_0057f3b0();
  if (iVar1 < 0) {
    *param_5 = iVar1;
  }
  ExceptionList = local_c;
  return param_1;
}


