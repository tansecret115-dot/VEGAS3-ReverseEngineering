/* Module: vidcap30.exe
   Function: FUN_0057f5c0
   Address: 0057f5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0057f5c0(int *param_1,HANDLE param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  DWORD DVar2;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  undefined4 uVar3;
  LPHANDLE lpTargetHandle;
  BOOL BVar4;
  DWORD dwOptions;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005847d8;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x29);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if (param_1[0x31] == 0) {
    dwOptions = 0;
    BVar4 = 0;
    lpTargetHandle = (LPHANDLE)(param_1 + 0x30);
    DVar2 = 2;
    hTargetProcessHandle = GetCurrentProcess();
    hSourceProcessHandle = GetCurrentProcess();
    BVar4 = DuplicateHandle(hSourceProcessHandle,param_2,hTargetProcessHandle,lpTargetHandle,DVar2,
                            BVar4,dwOptions);
    if (BVar4 == 0) {
      uVar3 = FUN_005835c0();
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_c;
      return uVar3;
    }
    param_1[0x31] = 1;
    DVar2 = GetCurrentThreadId();
    param_1[0x32] = DVar2;
    cVar1 = (**(code **)(*param_1 + 100))();
    if (cVar1 == '\0') {
      FUN_0057f6e0();
    }
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return 0;
  }
  DVar2 = GetCurrentThreadId();
  if (param_1[0x32] == DVar2) {
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return 0x80040293;
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return 0x80040294;
}


