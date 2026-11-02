/* Module: qt4plug.dll
   Function: FUN_5f5195e0
   Address: 5f5195e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f5195e0(HANDLE *param_1,DWORD param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  tagMSG local_3c;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f596710;
  puStack_10 = &DAT_5f594586;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb8;
  ExceptionList = &local_14;
  while( true ) {
    while( true ) {
      BVar1 = PeekMessageA(&local_3c,(HWND)0x0,0,0,1);
      if (BVar1 != 0) break;
      DVar2 = MsgWaitForMultipleObjects(param_2,param_1,0,0xffffffff,0xff);
      if (DVar2 != param_2) {
        ExceptionList = local_14;
        return 0;
      }
    }
    if (local_3c.message == 0x12) break;
    local_8 = 0;
    DispatchMessageA(&local_3c);
    local_8 = 0xffffffff;
  }
  ExceptionList = local_14;
  return 1;
}


