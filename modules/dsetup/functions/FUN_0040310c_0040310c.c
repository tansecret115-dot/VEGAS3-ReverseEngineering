/* Module: dsetup.dll
   Function: FUN_0040310c
   Address: 0040310c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0040310c(undefined *param_1)

{
  uint *puVar1;
  int local_2c;
  uint *local_28;
  uint local_24;
  uint *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00401358;
  puStack_10 = &LAB_0040514c;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_0040b048 == 3) {
    ExceptionList = &local_14;
    FUN_00404fde(9);
    local_8 = 0;
    local_20 = (uint *)FUN_0040411c((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_00404147(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_00403176();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_0040b048 != 2) goto LAB_004031d8;
    ExceptionList = &local_14;
    FUN_00404fde(9);
    local_8 = 1;
    local_28 = (uint *)FUN_00404b81(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_00404bd8(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_004031ce();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_004031d8:
  HeapFree(DAT_0040b044,0,param_1);
  ExceptionList = local_14;
  return;
}


