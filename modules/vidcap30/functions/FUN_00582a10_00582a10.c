/* Module: vidcap30.exe
   Function: FUN_00582a10
   Address: 00582a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00582a10(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00584b28;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x24);
  ExceptionList = &local_c;
  while( true ) {
    EnterCriticalSection(lpCriticalSection);
    local_4 = 0;
    puVar1 = (undefined4 *)FUN_0057b7d0();
    if (puVar1 != (undefined4 *)0x0) break;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    LeaveCriticalSection(lpCriticalSection);
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x3c),0xffffffff);
  }
  local_4 = 0xffffffff;
  LeaveCriticalSection(lpCriticalSection);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  param_2[3] = puVar1[3];
  FUN_00404b20(puVar1);
  ExceptionList = local_c;
  return;
}


