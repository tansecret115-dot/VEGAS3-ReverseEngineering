/* Module: qt4plug.dll
   Function: FUN_5f519890
   Address: 5f519890
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f519890(undefined4 *param_1)

{
  HANDLE hEvent;
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  HANDLE local_30 [5];
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f596720;
  puStack_10 = &DAT_5f594586;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffa0;
  hEvent = (HANDLE)*param_1;
  local_30[0] = (HANDLE)param_1[1];
  DAT_5f5a2ae4 = -0x7ffb1fb9;
  ExceptionList = &local_14;
  uVar2 = FUN_5f5801f0();
  if ((short)uVar2 == 0) {
    sVar1 = FUN_5f575c50();
    if (sVar1 == 0) {
      FUN_5f580580();
      iVar3 = FUN_5f5805e0();
      if (iVar3 != 0) {
        DAT_5f5a2ae4 = 0;
      }
      FUN_5f580600();
      GetCurrentThreadId();
      GetCurrentThread();
      FUN_5f579070();
      goto LAB_5f519954;
    }
    FUN_5f575c70();
  }
  FUN_5f580430();
LAB_5f519954:
  SetEvent(hEvent);
  if (DAT_5f5a2ae4 < 0) {
    WaitForSingleObject(local_30[0],0);
  }
  else {
    FUN_5f5195e0(local_30,1);
    local_8 = 0;
    FUN_5f575c70();
    FUN_5f580430();
  }
  ExceptionList = local_14;
  return DAT_5f5a2ae4;
}


