/* Module: pncrt.dll
   Function: FUN_780099a0
   Address: 780099a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_780099a0(LPVOID param_1)

{
  BOOL BVar1;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_78036de0;
  pcStack_10 = except_handler3;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  BVar1 = TlsSetValue(DAT_7803d248,param_1);
  if (BVar1 == 0) {
    _amsg_exit(0x10);
  }
  if (PTR_FUN_78040d0c != (undefined *)0x0) {
    (*(code *)PTR_FUN_78040d0c)();
  }
  local_8 = 0;
  (**(code **)((int)param_1 + 0x48))(*(undefined4 *)((int)param_1 + 0x4c));
  _endthread();
  ExceptionList = local_14;
  return 0;
}


