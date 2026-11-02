/* Module: vidcap30.exe
   Function: FUN_00583ee0
   Address: 00583ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00583ee0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00584c48;
  local_c = ExceptionList;
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xa0) + 0x58);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection_00);
  iVar2 = *(int *)(param_1 + 0xa0);
  local_4 = 0;
  lpCriticalSection = *(LPCRITICAL_SECTION *)(iVar2 + 0x38);
  EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)(iVar2 + 0x14);
  if ((iVar2 == 1) || (iVar2 == 2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  LeaveCriticalSection(lpCriticalSection);
  if (bVar1) {
    LeaveCriticalSection(lpCriticalSection_00);
    ExceptionList = local_c;
    return 1;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    LeaveCriticalSection(lpCriticalSection_00);
    ExceptionList = local_c;
    return 0;
  }
  iVar2 = FUN_0057e330();
  if (iVar2 < 0) {
    LeaveCriticalSection(lpCriticalSection_00);
    ExceptionList = local_c;
    return iVar2;
  }
  iVar2 = FUN_00582720();
  if (iVar2 == 0) {
    LeaveCriticalSection(lpCriticalSection_00);
    ExceptionList = local_c;
    return -0x7fffbffb;
  }
  iVar2 = FUN_00582780(0);
  if (iVar2 < 0) {
    LeaveCriticalSection(lpCriticalSection_00);
    ExceptionList = local_c;
    return iVar2;
  }
  iVar2 = FUN_00582780(1);
  LeaveCriticalSection(lpCriticalSection_00);
  ExceptionList = local_c;
  return iVar2;
}


