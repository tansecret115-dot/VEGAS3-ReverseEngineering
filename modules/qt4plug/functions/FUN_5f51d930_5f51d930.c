/* Module: qt4plug.dll
   Function: FUN_5f51d930
   Address: 5f51d930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f51d930(int param_1)

{
  int *piVar1;
  short sVar2;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f596780;
  puStack_10 = &DAT_5f594586;
  local_14 = ExceptionList;
  if (*(int *)(param_1 + 0x5c) != 1) {
    piVar1 = (int *)(param_1 + 0x74);
    ExceptionList = &local_14;
    if ((*piVar1 != 0) && (ExceptionList = &local_14, sVar2 = FUN_5f5814c0(), sVar2 != 0)) {
      ExceptionList = local_14;
      return 0x8004e01f;
    }
    if (*piVar1 != 0) {
      FUN_5f580d20();
      *piVar1 = 0;
    }
    local_8 = 0;
    sVar2 = FUN_5f580b60();
    if (sVar2 != 0) {
      ExceptionList = local_14;
      return 0x8004e01f;
    }
  }
  ExceptionList = local_14;
  return 0;
}


