/* Module: mpegin.dll
   Function: FUN_1000e352
   Address: 1000e352
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000e352(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10016178;
  puStack_10 = &LAB_10011054;
  local_14 = ExceptionList;
  if (DAT_1001da94 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_1001da8c) {
      ExceptionList = &local_14;
      FUN_10010ee5(9);
      local_8 = 0;
      piVar1 = FUN_10010377(param_1);
      local_8 = 0xffffffff;
      FUN_1000e3b9();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1001da94 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_1001b33c) {
        ExceptionList = &local_14;
        FUN_10010ee5(9);
        local_8 = 1;
        piVar1 = FUN_10010b24(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_1000e418();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_1000e431;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_1000e431:
  HeapAlloc(DAT_1001da90,0,dwBytes);
  ExceptionList = local_14;
  return;
}


