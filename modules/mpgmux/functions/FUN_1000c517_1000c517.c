/* Module: mpgmux.dll
   Function: FUN_1000c517
   Address: 1000c517
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000c517(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100151b8;
  puStack_10 = &LAB_1000e8fc;
  local_14 = ExceptionList;
  if (DAT_1001c684 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_1001c67c) {
      ExceptionList = &local_14;
      FUN_1000e78d(9);
      local_8 = 0;
      piVar1 = FUN_1000dc1f(param_1);
      local_8 = 0xffffffff;
      FUN_1000c57e();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1001c684 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_10019b04) {
        ExceptionList = &local_14;
        FUN_1000e78d(9);
        local_8 = 1;
        piVar1 = FUN_1000e3cc(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_1000c5dd();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_1000c5f6;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_1000c5f6:
  HeapAlloc(DAT_1001c680,0,dwBytes);
  ExceptionList = local_14;
  return;
}


