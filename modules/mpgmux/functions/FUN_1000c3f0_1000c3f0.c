/* Module: mpgmux.dll
   Function: FUN_1000c3f0
   Address: 1000c3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000c3f0(undefined *param_1)

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
  puStack_c = &DAT_100151a0;
  puStack_10 = &LAB_1000e8fc;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_1001c684 == 3) {
    ExceptionList = &local_14;
    FUN_1000e78d(9);
    local_8 = 0;
    local_20 = (uint *)FUN_1000d8cb((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_1000d8f6(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_1000c45a();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1001c684 != 2) goto LAB_1000c4bc;
    ExceptionList = &local_14;
    FUN_1000e78d(9);
    local_8 = 1;
    local_28 = (uint *)FUN_1000e330(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_1000e387(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_1000c4b2();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_1000c4bc:
  HeapFree(DAT_1001c680,0,param_1);
  ExceptionList = local_14;
  return;
}


