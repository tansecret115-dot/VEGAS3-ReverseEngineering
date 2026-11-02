/* Module: vidcap30.exe
   Function: FUN_00583e30
   Address: 00583e30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00583e30(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00584c28;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xa0) + 0x58);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if (param_2 < 0) {
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return 0x80070057;
  }
  if (0 < param_2) {
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return 0x40103;
  }
  uVar1 = (**(code **)(*(int *)(param_1 + -0x48) + 0x1c))(param_3);
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = lpCriticalSection;
  return uVar1;
}


