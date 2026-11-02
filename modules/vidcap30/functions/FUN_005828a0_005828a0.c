/* Module: vidcap30.exe
   Function: FUN_005828a0
   Address: 005828a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005828a0(int param_1)

{
  undefined4 uVar1;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00584b16;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  local_10 = param_1;
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
    ExceptionList = &local_c;
    WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
    CloseHandle(*(HANDLE *)(param_1 + 8));
  }
  local_14 = *(int *)(param_1 + 0xc);
  while (local_14 != 0) {
    uVar1 = FUN_0057b750(&local_14);
    FUN_00404b20(uVar1);
  }
  FUN_0057b6e0();
  if (*(HANDLE *)(param_1 + 0x3c) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x3c));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  local_4 = 0xffffffff;
  FUN_0057b680();
  ExceptionList = local_c;
  return;
}


