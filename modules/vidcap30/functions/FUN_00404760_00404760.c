/* Module: vidcap30.exe
   Function: FUN_00404760
   Address: 00404760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HANDLE hHandle;
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00586a20;
  puStack_10 = &DAT_00579df0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  hHandle = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"VIDCAP.3.0.Mutex");
  DVar1 = WaitForSingleObject(hHandle,10000);
  if (DVar1 == 0x102) {
    ExceptionList = local_14;
    return 0;
  }
  iVar2 = _SfActivatePrevAppInstance_4("VIDCAP.3.0.Class.Frame");
  if (iVar2 != 0) {
    FUN_00402580(iVar2);
    ReleaseMutex(hHandle);
    CloseHandle(hHandle);
    ExceptionList = local_14;
    return 1;
  }
  FUN_0049d5c0(param_1);
  iVar2 = FUN_00402b70(param_1,param_4);
  ReleaseMutex(hHandle);
  CloseHandle(hHandle);
  uVar3 = 0;
  local_8 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00403400();
  }
  local_8 = 0xffffffff;
  uVar3 = FUN_004031f0(param_1,uVar3);
  ExceptionList = local_14;
  return uVar3;
}


