/* Module: mpegin.dll
   Function: FUN_1000e22b
   Address: 1000e22b
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000e22b(undefined *param_1)

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
  puStack_c = &DAT_10016160;
  puStack_10 = &LAB_10011054;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_1001da94 == 3) {
    ExceptionList = &local_14;
    FUN_10010ee5(9);
    local_8 = 0;
    local_20 = (uint *)FUN_10010023((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_1001004e(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_1000e295();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1001da94 != 2) goto LAB_1000e2f7;
    ExceptionList = &local_14;
    FUN_10010ee5(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10010a88(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10010adf(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_1000e2ed();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_1000e2f7:
  HeapFree(DAT_1001da90,0,param_1);
  ExceptionList = local_14;
  return;
}


