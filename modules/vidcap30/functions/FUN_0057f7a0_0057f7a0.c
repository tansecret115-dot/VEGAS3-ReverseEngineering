/* Module: vidcap30.exe
   Function: FUN_0057f7a0
   Address: 0057f7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0057f7a0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  HANDLE local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005847f8;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa4);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(param_1 + 0xc4);
  local_4 = 0;
  while( true ) {
    if (iVar1 != 2) {
      *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_c;
      return 0;
    }
    LeaveCriticalSection(lpCriticalSection);
    local_14 = *(HANDLE *)(param_1 + 0xbc);
    local_10 = *(undefined4 *)(param_1 + 0xd0);
    DVar2 = WaitForMultipleObjects(2,&local_14,0,0xffffffff);
    EnterCriticalSection(lpCriticalSection);
    if (DVar2 != 0) break;
    iVar1 = *(int *)(param_1 + 0xc4);
  }
  if (DVar2 != 1) {
    if (DVar2 != 0xffffffff) {
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_c;
      return 0x8000ffff;
    }
    uVar3 = FUN_005835c0();
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return uVar3;
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return 0x80040223;
}


