/* Module: pncrt.dll
   Function: FUN_78009b20
   Address: 78009b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_78009b20(DWORD *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint _Retval;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_78036df0;
  pcStack_10 = except_handler3;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  BVar1 = TlsSetValue(DAT_7803d248,param_1);
  if (BVar1 == 0) {
    _amsg_exit(0x10);
  }
  DVar2 = GetCurrentThreadId();
  *param_1 = DVar2;
  if (PTR_FUN_78040d0c != (undefined *)0x0) {
    (*(code *)PTR_FUN_78040d0c)();
  }
  local_8 = 0;
  _Retval = (*(code *)param_1[0x12])(param_1[0x13]);
  _endthreadex(_Retval);
  ExceptionList = local_14;
  return 0;
}


