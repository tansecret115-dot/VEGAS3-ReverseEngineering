/* Module: mp3plug.dll
   Function: FUN_5f710890
   Address: 5f710890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f710890(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_5f710980;
  local_10 = ExceptionList;
  if (param_1 == (undefined4 *)0x0) {
    return 0xc0000001;
  }
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_5f681b80(0xe4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    local_8 = 0;
    FUN_5f712510(puVar1);
  }
  if (puVar1 != (undefined4 *)0x0) {
    *param_1 = puVar1;
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return 0xc0000002;
}


